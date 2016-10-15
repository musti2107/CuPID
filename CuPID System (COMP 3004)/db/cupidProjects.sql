
drop table if exists projects;

create table if not exists projects(
      id integer primary key not null, --auto increment key 
      projectName text NOT NULL, --title project
      projectDescription text NOT NULL  --description
      );

--INSERT DATA
--=======================

begin transaction;

--Insert students
insert into projects(projectName, projectDescription) values ('COMP 1405', 'Processing bouncing ball game');
insert into projects(projectName, projectDescription) values ('COMP 1406', 'Stadium seating GUI in Java');
insert into projects(projectName, projectDescription) values ('COMP 2401', 'Client-Server in C');
insert into projects(projectName, projectDescription) values ('COMP 2402', 'Bredth first binary tree search');
insert into projects(projectName, projectDescription) values ('COMP 2404', 'Brig Manager in C++');
insert into projects(projectName, projectDescription) values ('COMP 2406', 'Node.js Server in the Express framework');
insert into projects(projectName, projectDescription) values ('COMP 3004', 'cupid student grouping system');

end transaction;
