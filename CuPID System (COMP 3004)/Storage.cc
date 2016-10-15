#include "Storage.h"

Storage::Storage(){

  //const char *debs = "cupid";
  db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("../cupid/db/cupid");
  bool ok = db.open();
  query = new QSqlQuery(db);
  if(ok == false){
      qDebug() << "Not working";
  }

}

Storage::~Storage(){
     db.close();


}

int Storage::registerStudent(string sNum, string name, vector<string>& p){

    stuNum = sNum;
  	stuName = name;
  	sql = "insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (";
  	sql = sql + stuNum + ", " + "\'" + stuName + "\'";

    for(unsigned int i = 0; i < p.size(); i++){
  		sql = sql + ", ";
  		string in = p.at(i);
    	sql = sql + in;
    } 
  	sql = sql + ");";
    string w = sql;
    s = QString::fromStdString(w);
    check = query->exec(s);
    if(check == false){
        qDebug() << query->lastError();
        query->finish();
           query->clear();
        return 1;
    }

    query->finish();
    query->clear();
    return 0;
}

int Storage::projectList(vector<Project*>& p){
	
	Project *proj;
    sql = "SELECT id, projectName, projectDescription FROM projects";
    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    string id;
    string name;
    string desc;

    query->first();

    do{
        id = query->value(0).toString().toStdString();
        name = query->value(1).toString().toStdString();
        desc = query->value(2).toString().toStdString();


        proj = new Project(id, name, desc);
        p.push_back(proj);
    }while(query->next());

    query->finish();
    return 0;
}

int Storage::studentProjReg(string sNum, string pNum){

    sql = "select id from projects";
    s = QString::fromStdString(sql);
    check = query->exec(s);
    query->first();
    string id;
    do{
        id = query->value(0).toString().toStdString();

        if(id == pNum){
            sql = "insert into regs (sid, pid) values (" + sNum + ", " + pNum + ");";
            s = QString::fromStdString(sql);
            check = query->exec(s);

            if(check == false){
                qDebug() << query->lastError();
                query->finish();
                return 1;
            }

            query->finish();
            return 0;
        }
    }while (query->next());

    query->finish();
    return 1;

}


int Storage::studentLogin(string num){

    sql = "SELECT ID FROM students";

    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    string id;
    query->first();
    do{

        id = query->value(0).toString().toStdString();
        if(id == num){
            query->finish();
            return 0;
        }
    }while(query->next());

    query->finish();
    return 1;
}

int Storage::getProfile(string num, vector<string>& p){

    sql = "SELECT ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24 FROM students WHERE ID=" + num+";";

    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    int counter = 0;
    query->first();

    while(counter < 26){
        p.push_back(query->value(counter).toString().toStdString());
        counter++;
    }
    query->finish();
    return 0;
}

int Storage::getStuProjs(string id, vector<Project*>& p){

	sql = "SELECT pid FROM regs WHERE sid =" + id + ";";
	s = QString::fromStdString(sql);
	check = query->exec(s);

	if(check == false){
		qDebug() << query->lastError();
		query->finish();
		return 1;
	}

	vector<int> projNums;
	query->first();
	do{
        int value = query->value(0).toInt();
        projNums.push_back(value);
	} while(query->next());

	query->finish();

	int getProjs = getSelectProjs(projNums, p);

	return getProjs;

}

int Storage::getSelectProjs(vector<int>& p, vector<Project*>& projs){

	sql = "SELECT * FROM projects WHERE";
	vector<int>::iterator myItr;

    for(myItr = p.begin(); myItr != p.end(); myItr++){
        string value = static_cast<ostringstream*>( &(ostringstream() << *myItr) )->str();
        string newSql = sql + " id=" + value + ";";
        cout << newSql << endl;
		s = QString::fromStdString(newSql);
        check = query->exec(s);

		if(check == false){
		qDebug() << query->lastError();
		query->finish();
		return 1;
		}

		Project *proj;
		string id;
    	string name;
    	string desc;

    	query->first();

    	do{
        	id = query->value(0).toString().toStdString();
        	name = query->value(1).toString().toStdString();
        	desc = query->value(2).toString().toStdString();
        	proj = new Project(id, name, desc);
            projs.push_back(proj);
    	}while(query->next());
    	query->finish();
	}
	return 0;
}

int Storage::getProjStuds(string pid, vector<Student*>& p){

    sql = "SELECT sid FROM regs WHERE pid = " + pid + ";";
    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    vector<string> projStus;
    query->first();
    do{
        string value = query->value(0).toString().toStdString();
        projStus.push_back(value);
    } while(query->next());

    query->finish();
    cout<<"projStus size is: " << projStus.size() << endl;

    int getStus = getSelectStus(projStus, p);
    return getStus;

}

int Storage::getSelectStus(vector<string>& stus, vector<Student*>& p){

    sql = "SELECT * FROM students WHERE id=";
    vector<string>::iterator myItr;
    cout << "Stus size: " << stus.size() << endl;

    for(myItr = stus.begin(); myItr != stus.end(); myItr++){
        string newSql = sql + *myItr + ";";
        cout << "newsql: " << newSql << endl;
        //cout << newSql << endl;
        s = QString::fromStdString(newSql);
        check = query->exec(s);

        if(check == false){
            qDebug() << query->lastError();
            query->finish();
            return 1;
        }

        query->first();
        do{
            Student *stu;
            int id = query->value(0).toInt();
            int first = 0;
            int second = 0;
            int third = 0;
            int forth = query->value(13).toInt();
            int fifth = 0;
            int sixth = 0;
            int seventh = 0;
            int eighth = query->value(25).toInt();

            for(int i = 0; i < 4; i++){
                //first set of personal question's values are added
                //cout << "value: " <<
                first = first + query->value(i+2).toInt();
                cout << "first is: " << first<<endl;
            }
            for(int i = 0; i < 4; i++){
                //second set of personal question's values are added
                second = second + query->value(i+6).toInt();
            }
             for(int i = 0; i < 3; i++){
                //third set of personal questions's values are added
                third = third + query->value(i+10).toInt();
            }

            for(int i = 0; i < 4; i++){
                //1st set of partner preference questions
                fifth = fifth + query->value(i+14).toInt();
            }

            for(int i = 0; i < 4; i++){
                sixth = sixth + query->value(i+18).toInt();
            }

            for(int i = 0; i < 3; i++){
                seventh = seventh + query->value(i+22).toInt();
            }

            cout << id << " " << first<< " "<< second <<" "<<third<<" "<<forth<<" "<<fifth<<" "<<sixth<<" "<<seventh<<" "<<eighth<<endl;

            stu = new Student(query->value(1).toString().toStdString(), id, first, second, third, forth, fifth, sixth, seventh, eighth);
            p.push_back(stu);

        }while(query->next());
        query->finish();
    }

    cout<<"p size is: " << p.size()<< endl;
    return 0;

}

int Storage::addProject(string name, string desc){

    projName = name;
    projDesc = desc;

    sql = "insert into projects (projectName, projectDescription) values (\'" + projName + "\', \'" + projDesc + "\');";
    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    query->finish();
    return 0;
}

int Storage::editProject(string id, string title, string desc){

    sql = "UPDATE projects SET projectName=\'" + title + "\', projectDescription=\'" + desc + "\' WHERE id=" + id + ";";
    s = QString::fromStdString(sql);
    check = query->exec(s);
    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }
    query->finish();
    return 0;

}

int Storage::editProfile(string num, vector<string>& p){

    stuNum = num;

    sql = "UPDATE students SET Q1=" + p.at(0);
    for(unsigned int i = 1; i < p.size(); i++){
        string col= static_cast<ostringstream*>(&(ostringstream() << (i+1)))->str();
        sql = sql + ", Q" + col + "=";
  		string in = p.at(i);
        sql = sql + in;
    }

    sql = sql + " WHERE ID=" + stuNum + ";";

    s = QString::fromStdString(sql);

    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    query->finish();
    return 0;

}


int Storage::setPPIDInfo(string GroupSize, string Grade, string Personal, string Groups, string Misc){

    sql = "update PPID set GroupSize='" + GroupSize + "', Grade='" + Grade + "', Personal='" + Personal + "', Groups='" + Groups + "', Misc='" + Misc + "';";
    cout << "sql is: " << sql << endl;
    s = QString::fromStdString(sql);

    check = query->exec(s);

    if(check == false){
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }
    query->finish();
    return 0;

}

int Storage::getPPIDInfo(vector<int>& ppid){
   // cout << "in the getPPIDinfo function" << endl;
    sql = "SELECT * FROM PPID;";

    s = QString::fromStdString(sql);
    check = query->exec(s);

    if(check == false){
       // cout << "in getppidinfo, check is false" << endl;
        qDebug() << query->lastError();
        query->finish();
        return 1;
    }

    int counter = 0;
    query->first();

    for(int i=0; counter<5; i++){
        int temp;
        temp = query->value(counter).toInt();
       // cout << "temp in getppidinfo" << endl;
        ppid.push_back(temp);
        counter++;
    }
    query->finish();
    return 0;
}


void Storage:: close(){
    db.close();
}


