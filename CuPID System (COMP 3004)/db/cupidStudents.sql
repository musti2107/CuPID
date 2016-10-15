
drop table if exists students;

CREATE TABLE students(
ID integer primary key,
name text,
Q1 integer,
Q2 integer,
Q3 integer,
Q4 integer, Q5 integer, Q6 integer, Q7 integer, Q8 integer, Q9 integer,
Q10 integer, Q11 integer, Q12 integer, Q13 integer, Q14 integer,
Q15 integer, Q16 integer, Q17 integer, Q18 integer, Q19 integer,
Q20 integer, Q21 integer, Q22 integer, Q23 integer, Q24 integer
);


begin transaction;

--Insert students
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917191,'Abdul Niazi', 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100823576,'Muhammad Mustafa', 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 5, 1, 1, 2, 1, 1, 1, 1, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100833433,'Malik Ehsan', 1, 3, 4, 5, 5, 4, 3, 1, 5, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 9, 1, 1, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100838870,'Rehnuma Tarannum', 1, 1, 5, 1, 4, 2, 1, 1, 5, 4, 3, 1, 5, 3, 1, 3, 2, 2, 1, 1, 2, 2, 2, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917192,'Mufti Shufti', 1, 2, 3, 4, 5, 4, 3, 4, 5, 4, 4, 3, 4, 5, 3, 4, 5, 2, 5, 1, 1, 1, 1, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917193,'Gennady Golovkin', 1, 2, 3, 2, 5, 4, 1, 4, 2, 4, 3, 3, 4, 5, 3, 4, 5, 2, 5, 1, 4, 4, 2, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917194,'Anderson Silva', 5, 4, 3, 2, 1, 1, 2, 3, 2, 4, 3, 2, 4, 5, 1, 1, 1, 2, 5, 1, 4, 4, 2, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917195,'Khabib Nurmagomedov', 5, 4, 3, 2, 1, 2, 3, 4, 5, 4, 3, 1, 4, 5, 2, 3, 1, 2, 5, 1, 4, 4, 2, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917196,'Reza Aslam', 5, 4, 3, 2, 1, 2, 3, 1, 2, 3, 4, 2, 4, 5, 1, 3, 1, 2, 2, 2, 4, 4, 2, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917197,'Georges St Pierre', 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 4, 5, 1, 3, 1, 2, 2, 2, 4, 4, 2, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917198,'Jon Jones', 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 4, 5, 1, 3, 1, 2, 2, 2, 5, 5, 5, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (100917199,'Dominck Cruz', 5, 4, 3, 2, 1, 2, 3, 4, 5, 5, 5, 1, 1, 1, 2, 2, 1, 2, 2, 2, 3, 4, 4, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987220,'TJ Dillashaw', 5, 4, 3, 2, 1, 2, 3, 4, 5, 5, 5, 1, 1, 1, 2, 2, 1, 2, 2, 2, 3, 4, 4, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987221,'Matt Hughes', 3, 2, 1, 2, 3, 2, 1, 3, 2, 3, 3, 3, 2, 3, 2, 3, 3, 3, 2, 2, 1, 4, 4, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987222,'Robbie Lawlor', 5, 5, 5, 5, 5, 5, 1, 3, 2, 3, 3, 3, 2, 3, 2, 3, 3, 3, 5, 5, 5, 5, 5, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987223,'Carlos Condit', 5, 5, 5, 5, 5, 4, 1, 3, 2, 3, 3, 3, 2, 3, 2, 3, 3, 3, 5, 5, 5, 5, 5, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987224,'Ronda Rousey', 5, 5, 5, 5, 5, 4, 1, 3, 2, 3, 3, 1, 5, 5, 4, 4, 4, 2, 5, 5, 5, 5, 5, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (101987225,'Chris Weidman', 5, 5, 5, 5, 5, 4, 1, 3, 2, 3, 3, 1, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 5, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222333,'Cain Velasquez', 3, 2, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222334,'Fabricio Werdum', 1, 2, 3, 4, 5, 1, 2, 2, 4, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222335,'Frankie Edgar', 2, 3, 3, 4, 5, 2, 2, 2, 4, 1, 1, 1, 4, 1, 1, 1, 4, 4, 4, 4, 2, 3, 3, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222336,'Richie Hawtin', 3, 2, 4, 2, 5, 2, 3, 3, 4, 2, 1, 1, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222337,'Nicolas Jaar', 5, 3, 2, 2, 5, 2, 3, 3, 4, 2, 1, 1, 4, 1, 1, 4, 2, 1, 2, 2, 2, 2, 2, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222338,'Nils Frahm', 5, 3, 2, 3, 5, 4, 3, 2, 4, 2, 1, 1, 4, 1, 1, 4, 2, 1, 2, 2, 2, 2, 2, 3);
insert into students(ID, name, Q1, Q2, Q3, Q4, Q5, Q6, Q7, Q8, Q9, Q10, Q11, Q12, Q13, Q14, Q15, Q16, Q17, Q18, Q19, Q20, Q21, Q22, Q23, Q24) values (111222339,'Olafur Arnalds', 2, 3, 1, 4, 5, 4, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 5, 4, 3, 2);



end transaction;
