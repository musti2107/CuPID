#include "PPIDrunControl.h"

//needs constructor
PPIDrunControl::PPIDrunControl(string p, int sz, int grp, int pp, int gp, int mp){
    cout << "constructed the PPIDRUNCONTROL" << endl;

    pid = p;
    prioritySet = 1;
    range = 3;
    groupsMade = 0;
    studentsAllocated = 0;
    groupSize = sz;
    gradesPriority = grp; //ppid.getB();
    personalPriority = pp; //ppid.getC();
    groupPriority =  gp; //ppid.getD();
    miscPriority = mp; //ppid.getE();

    cout << "printing received values in ppidruncontrol " << groupSize << ","<<gradesPriority<<","<<personalPriority<<","<<groupPriority<<","<<miscPriority<<endl;

}

void PPIDrunControl::runPPID(vector<Group *> &gps){

    cout<<"running the ppid" << endl;

    int check = store.getProjStuds(pid, stus);
    if (check == 1){
        cout << "there is the problem with store.getProjStuds" << endl;
        //return check;
    }

    if(groupSize >= stus.size()){
        grouping = new Group(stus.size());
        for(myItr = stus.begin(); myItr != stus.end(); myItr++){
            grouping->addStudent(*myItr);
        }
        groups.push_back(grouping);
        //return 0;
    } else {


        grouping = new Group(groupSize);
        groups.push_back(grouping);
        groupsMade++;
        grouping->addStudent(stus.at(0));
        studentsAllocated++;
        stus.at(0)->setCheck();
    //int studentsUsed = 1;


        while((stus.size() != studentsAllocated)){
            cout << "Top of the while loop, groups made: " << groupsMade;
            cout << ", and range is: " << range <<endl;


            if(gradesPriority == 1){
                cout<< "size of stus being passed in: " << stus.size()<< endl;
                runGradesPriority(stus);
            } else if(personalPriority == 1){
                runPersonalPriority(stus);
            } else if(groupPriority == 1){
                runGroupPriority(stus);
            } else {
                runMiscPriority(stus);
            }

            level1.erase(level1.begin(), level1.end());
            level2.erase(level2.begin(), level2.end());
            level3.erase(level3.begin(), level3.end());
            level4.erase(level4.begin(), level4.end());
        cout << "sizes or levels are erase are: " << level1.size() << "-" << level2.size() << "-" << level3.size() << "-" << level4.size() << endl;
        /*
        int groupNum = 1;
        for(gItr = groups.begin(); gItr != groups.end(); gItr++){
            cout << " Checking Group: " << groupNum << endl;
            vector<Student *> temp;
            (*gItr)->getStudents(temp);
            for(myItr = temp.begin(); myItr != temp.end(); myItr++){
                cout << "Student: " << (*myItr)->getName() << endl;
            }
            groupNum++;
        }*/
        }
        //return 0;

        gItr=groups.end()-1; //point gITr to the last group
        cout<<"we are checking 0.5*groupsize: " << 0.5*groupSize << " and spotsleft: " << (*gItr)->getSpotsLeft() << endl;
        if((*gItr)->getSpotsLeft()>=(0.5*groupSize) && (groupSize - (*gItr)->getSpotsLeft() != groupSize)){ //checking if size is good for removal
            int counter = 0; //couter set
            vector<Student*> temp; //making temp student vector
            (*gItr)->getStudents(temp); //populating it with the last left over in stu vector
            vector<Student*>::iterator stuItr; //stu pointer
            stuItr = temp.begin(); //points to first student of the temp vector
            vector<Group*>::iterator g2Itr;
            while(counter!=((groupSize)-((*gItr)->getSpotsLeft()))){  //check till we reach to a point where no students are left to remove
                for(g2Itr = groups.begin(); g2Itr != groups.end()-1; g2Itr++){ //point to first element of groups and then check till last group is reached for limit
                    (*g2Itr)->overrideSpots(*stuItr);
                    stuItr++;
                    counter++;
                    if((stuItr)==temp.end()){
                        break;
                    }
                }
            }
            groups.erase(groups.end()-1);
        }
    }

    gps=groups;

}

void PPIDrunControl::runGradesPriority(vector<Student*>& s){
    cout << " " << endl;
    cout<<"In gradesPriority function, received vector of size:" << s.size() << endl;
    cout << "prioritySet = " << prioritySet << endl;
    if(s.size() == 0 && prioritySet != 4){
        //received empty set and not at the end of the iterations
        cout << "Grades Priority: s.size() is 0 and priority !=4" << endl;
        prioritySet++;
        if(personalPriority == prioritySet){
            runPersonalPriority(s);
        } else if(groupPriority == prioritySet){
            runGroupPriority(s);
        } else {
            runMiscPriority(s);
       }
    }else if(s.size() == 0 && prioritySet == 4){
        //received empty set and at the end of the iterations
        cout << "Grades Priority s.size() 0 and priority is 4" << endl;
        range++;
        prioritySet = 1;
    }else{
        vector<Student*>::iterator my1Itr;
        cout << "s is not empty, proceed to comparing students" << endl;
        for(my1Itr = s.begin(); my1Itr != s.end(); my1Itr++){
            cout<<"Student being checked in gradesPriority: " << (*my1Itr)->getName() << endl;
            if((*my1Itr)->getCheck() == 1){
                //do nothing
                cout << (*my1Itr)->getName() << " is already assigned" << endl;
            } else if((*my1Itr)->getCheck() == 0){
                cout << (*my1Itr)->getName() << " is available " << endl;
                if(grouping->getSpotsLeft() == 0){
                    cout << "current group is full, need a new group " << endl;
                    grouping = new Group (groupSize);
                    grouping->addStudent((*my1Itr));
                    (*my1Itr)->setCheck();
                    groups.push_back(grouping);
                    groupsMade++;
                    cout << "student added, group is made and added" << endl;
                    studentsAllocated++;
                }
                else if((grouping->getS1()-range) <= (*my1Itr)->getFS1() && (grouping->getS1()+range) >= (*my1Itr)->getFS1()){
                    cout<<"Dont need new group, range is: " << range << endl;
                    cout << "Current groups's S1: " << grouping->getS1() << endl;
                    cout << "Current student's FS1: " << (*my1Itr)->getFS1() << endl;
                    cout << "Current student's S1: " << ((*my1Itr)->getS1()) << endl;
                    cout << "Current Group's PS1:" << grouping->getPS1() << endl;
                    if(((*my1Itr)->getS1())-range <= grouping->getPS1() && ((*my1Itr)->getS1())+range >= grouping->getPS1()){
                        cout << "The Grades Priority matches" << endl;
                        cout << "level1 size prepushback: " << level1.size() << endl;
                        level1.push_back(*my1Itr);
                        cout<<"level1.size() post pushback: " << level1.size() << endl;
                    }
                }
            }
        }
        cout<< "left for-loop in gradespriority, priority is " << prioritySet <<endl;
        if(prioritySet != 4){
            //cout << "in the if of gradesSet!= 4" << endl;
            //send forward if priority set is not 4
            prioritySet++;
            if(personalPriority == prioritySet){
                runPersonalPriority(level1);
            } else if(groupPriority == prioritySet){
                runGroupPriority(level1);
            } else {
                runMiscPriority(level1);
            }
        }else{
            cout << "in else of grades priority" << endl;
            if(prioritySet == 4 && (level1.size() <= grouping->getSpotsLeft()) && grouping->getSize() != 0 && level1.size() != 0){
                    //if the last priority set, add first person in vector to group
                    for(lItr = level1.begin(); lItr != level1.end(); lItr++){
                        cout<<"in the first for loop" << endl;
                        grouping->addStudent(*lItr);
                        cout<<"added in the first for-loop" << endl;
                        (*lItr)->setCheck();
                        range = 3;
                        studentsAllocated++;
                    }
                    prioritySet = 1;

            }else if(prioritySet == 4 && (level1.size() > grouping->getSpotsLeft()) && grouping->getSpotsLeft() != 0){
                    //cout<< "in the second forloop"<< endl;
                    grouping->addStudent(level1.at(0));
                    level1.at(0)->setCheck();
                    studentsAllocated++;
                    //cout << "added in the second for-loop" << endl;
                    range = 3;
                    prioritySet = 1;
            }else{
                prioritySet = 1;
                range++;
            }
        }
    }
}




void PPIDrunControl::runPersonalPriority(vector<Student*>& s){
    cout << " " << endl;
    cout<<"In personalPriority function, received vector of size:" << s.size() << endl;
    if(s.size() == 0 && prioritySet != 4){
        //received empty set and not at the end of the iterations
        cout << "s.size() is 0 and priority !=4. increase prioritySet and move forward" << endl;
        prioritySet++;
        if(gradesPriority == prioritySet){
            runGradesPriority(s);
        } else if(groupPriority == prioritySet){
            runGroupPriority(s);
        } else {
            runMiscPriority(s);
       }
    } else if(s.size() == 0 && prioritySet == 4){
        //received empty set and at the end of the iterations
        cout << "s.size() is 0 and priority is 4, increase range and start over" << endl;
        range++;
        prioritySet = 1;
    }else{
        vector<Student*>::iterator my2Itr;
        for(my2Itr = s.begin(); my2Itr != s.end(); my2Itr++){
            if((*my2Itr)->getCheck() == 1){
                //do nothing
                cout << (*my2Itr)->getName() << " is already assigned" << endl;
            } else if((*my2Itr)->getCheck() == 0){
                //if group is full
                cout << (*my2Itr)->getName() << " is available " << endl;
                if(grouping->getSpotsLeft() == 0){
                    cout << "current group is full, need a new group" << endl;
                    grouping = new Group (groupSize);
                    grouping->addStudent((*my2Itr));
                    (*my2Itr)->setCheck();
                    groups.push_back(grouping);
                    groupsMade++;
                    studentsAllocated++;
                    cout <<"group is made and added, student is added" << endl;
                }
                else if((grouping->getS2()-range) <= (*my2Itr)->getFS2() && (grouping->getS2()+range) >= (*my2Itr)->getFS2()){
                    cout<<"Dont need new group, range is: " << range << endl;
                    cout << "Current groups's S2: " << grouping->getS2() << endl;
                    cout << "Current student's FS2: " << (*my2Itr)->getFS2() << endl;
                    cout << "Current student's S2: " << ((*my2Itr)->getS2()) << endl;
                    cout << "Current Group's PS2:" << grouping->getPS2() << endl;
                    if(((*my2Itr)->getS2())-range <= grouping->getPS2() && ((*my2Itr)->getS2())+range >= grouping->getPS2()){
                        cout << "The Personal Priority matches" << endl;
                        cout << "level2 size prepushback: " << level2.size() << endl;
                        level2.push_back((*my2Itr));
                        cout << "level2 size postpushback: " << level2.size() << endl;
                    }
                }
            }
        }
        if(prioritySet != 4){
            cout << "in the if of personalSet!= 4" << endl;
            //send forward if priority set is not 4
            prioritySet++;
            if(gradesPriority == prioritySet){
                runGradesPriority(level2);
            } else if(groupPriority == prioritySet){
                runGroupPriority(level2);
            } else {
                runMiscPriority(level2);
            }
        }else{
            cout << "in the else of personalSet!= 4" << endl;
            if(prioritySet == 4 && (level2.size() <= grouping->getSpotsLeft()) && grouping->getSize() != 0 && level2.size() != 0){
                    //if the last priority set, add first person in vector to group
                    for(lItr = level2.begin(); lItr != level2.end(); lItr++){
                        grouping->addStudent(*lItr);
                        studentsAllocated++;
                        (*lItr)->setCheck();
                        range = 3;
                    }
                    prioritySet = 1;

            }else if(prioritySet == 4 && (level2.size() > grouping->getSpotsLeft()) && grouping->getSpotsLeft() != 0){
                    grouping->addStudent(level2.at(0));
                    studentsAllocated++;
                    level2.at(0)->setCheck();
                    range = 3;
                    prioritySet = 1;
            }else{
                prioritySet = 1;
                range++;
            }
        }
    }

}

void PPIDrunControl::runGroupPriority(vector<Student*>& s){
    cout << " " << endl;
     cout << "in groupPriority, received vector of size: " << s.size() << endl;
    if(s.size() == 0 && prioritySet != 4){
        //received empty set and not at the end of the iterations
        cout << "s.size() is 0 and priority !=4, increase priority and send forward" << endl;
        prioritySet++;
        if(personalPriority == prioritySet){
            runPersonalPriority(s);
        } else if(gradesPriority == prioritySet){
            runGradesPriority(s);
        } else {
            runMiscPriority(s);
       }
    } else if(s.size() == 0 && prioritySet == 4){
        //received empty set and at the end of the iterations
        cout << "s.size() is 0 and priority is 4, increase range and start over, reset prioritySet" << endl;
        cout << "range: " << range << endl;
        range++;
        cout << "range increased?: " << range << endl;

        prioritySet = 1;
    }else{
        vector<Student*>::iterator my3Itr;
        for(my3Itr = s.begin(); my3Itr != s.end(); my3Itr++){
            if((*my3Itr)->getCheck() == 1){
                //do nothing
                cout << (*my3Itr)->getName() << " is already assigned" << endl;
            } else if((*my3Itr)->getCheck() == 0){
                cout << (*my3Itr)->getName() << " is available" << endl;
                if(grouping->getSpotsLeft() == 0){
                    cout << "Current group is full, need a new group" << endl;
                    grouping = new Group (groupSize);
                    grouping->addStudent((*my3Itr));
                    studentsAllocated++;
                    (*my3Itr)->setCheck();
                    groups.push_back(grouping);
                    cout << "student is added, group is made and added" << endl;
                    groupsMade++;
                }

                else if((grouping->getS3()-range) <= (*my3Itr)->getFS3() && (grouping->getS3()+range) >= (*my3Itr)->getFS3()){
                    cout<<"Dont need new group, range is: " << range << endl;
                    cout << "Current groups's S3: " << grouping->getS3() << endl;
                    cout << "Current student's FS3: " << (*my3Itr)->getFS3() << endl;
                    cout << "Current student's S3: " << ((*my3Itr)->getS3()) << endl;
                    cout << "Current Group's PS3:" << grouping->getPS3() << endl;
                    if(((*my3Itr)->getS3())-range <= grouping->getPS3() && ((*my3Itr)->getS3())+range >= grouping->getPS3()){
                        cout << "The Group Priority matches" << endl;
                        cout << "level3 size prepushback: " << level3.size() << endl;
                        level3.push_back((*my3Itr));
                        cout << "level3 size postpushback: " << level3.size() << endl;
                    }
                }
            }
        }
        if(prioritySet != 4){
            cout << "prioritySet != 0 after groupPriority(), send forward" << endl;
            //send forward if priority set is not 4
            prioritySet++;
            if(personalPriority == prioritySet){
                runPersonalPriority(level3);
            } else if(gradesPriority == prioritySet){
                runGradesPriority(level3);
            } else {
                runMiscPriority(level3);
            }
        }else{
            cout << "in the else of groupsSet!= 4" << endl;
            cout<< "prioritySet: " << prioritySet << " level3.size: " << level3.size() << "grouping.getsize " << grouping->getSize() << "grouping.getspotsleft " << grouping->getSpotsLeft() << endl;
            if(prioritySet == 4 && (level3.size() <= grouping->getSpotsLeft()) && grouping->getSize() != 0 && level3.size() != 0){
                    //if the last priority set, add first person in vector to group
                    for(lItr = level3.begin(); lItr != level3.end(); lItr++){
                        grouping->addStudent(*lItr);
                        studentsAllocated++;
                        (*lItr)->setCheck();
                        range = 3;
                    }
                    cout<<"in the if of groupsset checking" << endl;
                    prioritySet = 1;

            }else if(prioritySet == 4 && (level3.size() >= grouping->getSpotsLeft()) && grouping->getSpotsLeft() != 0){
                cout<<"in the 3 conditional statement" << endl;
                    grouping->addStudent(level3.at(0));
                    studentsAllocated++;
                    level3.at(0)->setCheck();
                    range = 3;
                    prioritySet = 1;
                    cout<<"in the else-if of groupsset checking" << endl;
            }else{
                prioritySet = 1;
                range++;
                cout << "in the else, range: " << range << endl;
            }
        }
    }
}

void PPIDrunControl::runMiscPriority(vector<Student*>& s){
     cout << " " << endl;
     cout << "In miscPriority function, received vector of size " << s.size() << endl;
    if(s.size() == 0 && prioritySet != 4){
        //received empty set and not at the end of the iterations
        cout << "s.size() is 0 and priority !=4, increase prioritySet and send forward" << endl;
        prioritySet++;
        if(personalPriority == prioritySet){
            runPersonalPriority(s);
        } else if(groupPriority == prioritySet){
            runGroupPriority(s);
        } else {
            runGradesPriority(s);
       }
    } else if(s.size() == 0 && prioritySet == 4){
        //received empty set and at the end of the iterations
        cout << "s.size() is 0 and priority is 4, increase range and start over" << endl;
        range++;
        prioritySet = 1;
    }else{
        vector<Student*>::iterator my4Itr;
        for(my4Itr = s.begin(); my4Itr != s.end(); my4Itr++){
            if((*my4Itr)->getCheck() == 1){
                //do nothing
                cout << (*my4Itr)->getName() << "is already assigned" << endl;
            } else if((*my4Itr)->getCheck() == 0){
                //if group is full
                cout << (*my4Itr)->getName() << "is available" << endl;
                cout << "range is: " << range << endl;
                cout << "Current groups's S4: " << grouping->getS4() << endl;
                cout << "Current student's FS4: " << (*my4Itr)->getFS4() << endl;
                cout << "Current student's S4: " << ((*my4Itr)->getS4()) << endl;
                cout << "Current Group's PS4:" << grouping->getPS4() << endl;
                if(grouping->getSpotsLeft() == 0){
                    cout << "Current group is full, need a new group " << endl;
                    grouping = new Group (groupSize);
                    grouping->addStudent((*my4Itr));
                    studentsAllocated++;
                    (*my4Itr)->setCheck();
                    groups.push_back(grouping);
                    groupsMade++;
                    cout << "Studend is added, new group is made and added" << endl;
                }
                 /*else if((grouping->getS4()) == (*my4Itr)->getFS4() && (grouping->getS4()) == (*my4Itr)->getFS4()){
                    cout<<"Dont need new group" << endl;
                    if(((*my4Itr)->getS4()) == grouping->getPS4() && ((*my4Itr)->getS4()) == grouping->getPS4()){
                        cout << "The Misc Priority matches" << endl;
                        cout << "level4 size prepushback: " << level4.size() << endl;
                        level4.push_back((*my4Itr));
                        cout << "level4 size prepushback: " << level4.size() << endl;
                    }
                }*/
                else if((grouping->getS4()-range) <= (*my4Itr)->getFS4() && (grouping->getS4()+range) >= (*my4Itr)->getFS4()){
                    cout<<"Dont need new group, range is: " << range << endl;
                    if(((*my4Itr)->getS4())-range <= grouping->getPS4() && ((*my4Itr)->getS4())+range >= grouping->getPS4()){
                        cout << "The Misc Priority matches" << endl;
                        cout << "level4 size prepushback: " << level4.size() << endl;
                        level4.push_back((*my4Itr));
                        cout << "level4 size prepushback: " << level4.size() << endl;
                    }
                }
            }
        }
        if(prioritySet != 4){
            cout << "in the if of prioritySet!= 4" << endl;
            //send forward if priority set is not 4
            prioritySet++;
            if(personalPriority == prioritySet){
                runPersonalPriority(level4);
            } else if(groupPriority == prioritySet){
                runGroupPriority(level4);
            } else {
                runGradesPriority(level4);
            }
        }else{
            cout << "in the else of prioritySet!= 4, therefore priorityset = 4" << endl;
            if(prioritySet == 4 && (level4.size() <= grouping->getSpotsLeft()) && level4.size() != 0 && level4.size() != 0){
                    //if the last priority set, add first person in vector to group
                    for(lItr = level4.begin(); lItr != level4.end(); lItr++){
                        grouping->addStudent(*lItr);
                        studentsAllocated++;
                        (*lItr)->setCheck();
                        range = 3;
                        prioritySet = 1;
                    }

            }else if(prioritySet == 4 && (level4.size() > grouping->getSpotsLeft()) && grouping->getSpotsLeft() != 0){
                    grouping->addStudent(level1.at(0));
                    studentsAllocated++;
                    level4.at(0)->setCheck();
                    range = 3;
                    prioritySet = 1;
            } else{
                prioritySet = 1;
                range++;
                //range = 3;
                cout << "no one was added to group, start over with prioritySet 1";
            }
        }
    }

}
