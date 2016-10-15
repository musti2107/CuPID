# CuPID
Carleton Univeristy Project Identifier (CuPID)//
by: Muhammad, Abdul, Malik and Rehnuma (Game of Codes)

DESCRIPTION OF THE GROUP PROJECT:
----------------------------------
To prepare university graduates for future employment, many university courses require students to work on team projects. This helps the students develop important lifelong skills, such as teamwork, cooperation and delegation of work. A common issue that arises in this situation is teams of students who are not compatible. Some contributing factors are skill set, personalities and work habits. To help address the problem and make more compatible teams, a system called the Carleton University Project Identifier (cuPID) was proposed to be developed. For a given project, the cuPID system would organize students into compatible teams using a qulitative based unique Project Partner IDentifier (PPID) algorithm.


GENERAL USAGE NOTES
------------------------------------
- system only runs on the Carleton University COMP 3004 F2015 VM
- skip this section for instructions to run the system
- a complete list of students and the projects students are registered in can be viewed by accessing the cupid db file in the db directory, in the source code folder, instructions are below:
---this can be done by installing sqlite3 by running the command:
     sudo apt-get install sqlite3 libsqlite3-dev
---run sqlite3:
     sqlite3 cupid
---to see all students:
     select * from students;
---to see all the projects:
     select * from projects;
---to see all the students registered in all the projects:
     select * from regs;
- a list of all the students that come preregistered in the system can be found at the bottom of the document
----------------------------------------------------------------------------------------------------------------------------

Compile and run the system in QT
-----------------------------------------
- move the cupid folder to the Desktop
- launch QT
- choose Open Project option
- from file browser menu, navigate to the directory called cupid, which is on the Desktop
- select and open the cuPID.pro file
- click the green play button on the left menu bar to run
----------------------------------------------------------------------------------------------------------------------------

Compiling the system with MAKE and launching the executable
------------------------------------------------------------------------------
- launch Terminal
- navigate to directory in terminal: build-cuPID-Desktop-Debug
- in terminal, type make and press enter, this will create the cupid executable
- open the build-cuPID-Desktop-Debug folder and launch the cuPID executable
----------------------------------------------------------------------------------------------------------------------------

Administrator User
------------------------
- launch the cuPID system
- click the Login button under the Admin heading
- To add project:
     - click the Add button to open the Add Project window
     - Fill out the Title and Description text fields
     - click Go!
     -close confirmation window and close Add Project window
-To view project list and edit project:
     - click the view button to open the view projects window
     - enter the project id, the number in the left most column, in the text box, click Edit Project button
     - in the edit project window, edit the Title or Description and click Ok
     - close the confirmation box, close the edit project window and choose another project to edit
     - close the view project window
- To edit the PPID:
     - click the Edit button to launch the PPID edit window
     - edit the setting of the PPID
     - click Ok and close the PPID Edit window
- To run the PPID:
     - click the View Projects button
     - select a project from the list to run the PPID on by clicking on it 
     - click the Launch PPID button
     - if the group size selected will not create even groups, a message will appear providing the notification
     - if no messge, a summary and detailed printout of the results will be displayed
     - if a message does appear, click continue to proceed without changing and allow algorithm to even out the groups
     - if a message does appear and administrator wants to change the group size, click the Edit PPID button and follow the instructions under the To edit the PPID section

----------------------------------------------------------------------------------------------------------------------------

Student User
----------------
- launch the cuPID system
- To register:
     - click the Register button under the Student heading to launch the registration form window
     -  fill out the form and click submit
     - close the confirmation box and the registration form window
- to log in:
     - click the Login button under the Student heading to launch the login window
     - enter valid student ID to launch main Student navigation page
- to register in the project:
     - follow log in instructions to log in
     - click the register button to launch the registration form window
     - enter the project ID, the number in the left most column, corresponding with the project into the text box and click register
     - close confirmation window and and the registration form window
- to edit profile:
     - follow log in instruction to log in
     - click the edit button to launch the edit profile form
     -  edit the values of the personal and partner question and click submit 
     - close confirmation box and edit profile form window



------------------------------
LIST OF PREREGISTERED STUDENTS
------------------------------
ID          name                
----------  --------------------
100823576   Muhammad Mustafa    
100833433   Malik Ehsan         
100838870   Rehnuma Tarannum    
100917191   Abdul Niazi         
100917192   Mufti Shufti        
100917193   Gennady Golovkin    
100917194   Anderson Silva      
100917195   Khabib Nurmagomedov 
100917196   Reza Aslam          
100917197   Georges St Pierre   
100917198   Jon Jones           
100917199   Dominck Cruz        
101987220   TJ Dillashaw        
101987221   Matt Hughes         
101987222   Robbie Lawlor       
101987223   Carlos Condit       
101987224   Ronda Rousey        
101987225   Chris Weidman       
111222333   Cain Velasquez      
111222334   Fabricio Werdum     
111222335   Frankie Edgar       
111222336   Richie Hawtin       
111222337   Nicolas Jaar        
111222338   Nils Frahm          
111222339   Olafur Arnalds      
999888111   dfsgsdf
