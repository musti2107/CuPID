drop table if exists regs;
drop table if exists PPID;

CREATE TABLE regs(sid integer not null, pid integer NOT NULL, primary key (sid, pid));
CREATE TABLE PPID (GroupSize varchar(1), Grade varchar(1), Personal varchar(1), Groups varchar(1), Misc varchar(1));


begin transaction;
insert into regs (sid, pid) values (100917191, 4);
insert into regs (sid, pid) values (100823576, 4);
insert into regs (sid, pid) values (100833433, 4);
insert into regs (sid, pid) values (100838870, 4);
insert into regs (sid, pid) values (100917192, 4);
insert into regs (sid, pid) values (100917193, 4);
insert into regs (sid, pid) values (100917194, 4);
insert into regs (sid, pid) values (100917195, 4);
insert into regs (sid, pid) values (100917196, 4);
insert into regs (sid, pid) values (100917197, 4);
insert into regs (sid, pid) values (100917198, 4);
insert into regs (sid, pid) values (100917199, 4);
insert into regs (sid, pid) values (101987220, 4);
insert into regs (sid, pid) values (101987221, 4);
insert into regs (sid, pid) values (101987222, 4);
insert into regs (sid, pid) values (101987223, 4);
insert into regs (sid, pid) values (101987224, 4);
insert into regs (sid, pid) values (101987225, 4);
insert into regs (sid, pid) values (111222333, 4);
insert into regs (sid, pid) values (111222334, 4);
insert into regs (sid, pid) values (111222335, 4);
insert into regs (sid, pid) values (111222336, 4);
insert into regs (sid, pid) values (111222337, 4);
insert into regs (sid, pid) values (111222338, 4);
insert into regs (sid, pid) values (111222339, 4);

insert into regs (sid, pid) values (100917191, 3);
insert into regs (sid, pid) values (100823576, 3);
insert into regs (sid, pid) values (100833433, 3);
insert into regs (sid, pid) values (100838870, 3);
insert into regs (sid, pid) values (100917192, 3);
insert into regs (sid, pid) values (100917193, 3);
insert into regs (sid, pid) values (100917194, 3);
insert into regs (sid, pid) values (100917195, 3);
insert into regs (sid, pid) values (100917196, 3);
insert into regs (sid, pid) values (100917197, 3);

insert into regs (sid, pid) values (100917198, 2);
insert into regs (sid, pid) values (100917199, 2);
insert into regs (sid, pid) values (101987220, 2);
insert into regs (sid, pid) values (101987221, 2);
insert into regs (sid, pid) values (101987222, 2);

insert into regs (sid, pid) values (101987223, 1);
insert into regs (sid, pid) values (101987224, 1);
insert into regs (sid, pid) values (101987225, 1);
insert into regs (sid, pid) values (111222333, 1);
insert into regs (sid, pid) values (111222334, 1);
insert into regs (sid, pid) values (111222335, 1);
insert into regs (sid, pid) values (111222336, 1);
insert into regs (sid, pid) values (111222337, 1);
insert into regs (sid, pid) values (111222338, 1);
insert into regs (sid, pid) values (111222339, 1);
insert into regs (sid, pid) values (100917191, 1);
insert into regs (sid, pid) values (100823576, 1);
insert into regs (sid, pid) values (100833433, 1);
insert into regs (sid, pid) values (100838870, 1);
insert into regs (sid, pid) values (100917193, 1);
insert into regs (sid, pid) values (100917194, 1);
insert into regs (sid, pid) values (100917195, 1);
insert into regs (sid, pid) values (100917196, 1);
insert into regs (sid, pid) values (100917198, 1);
insert into regs (sid, pid) values (100917199, 1);

insert into regs (sid, pid) values (100917191, 5);
insert into regs (sid, pid) values (100823576, 5);
insert into regs (sid, pid) values (100833433, 5);
insert into regs (sid, pid) values (100838870, 5);
insert into regs (sid, pid) values (100917192, 5);
insert into regs (sid, pid) values (100917196, 5);
insert into regs (sid, pid) values (100917197, 5);
insert into regs (sid, pid) values (100917198, 5);
insert into regs (sid, pid) values (100917199, 5);
insert into regs (sid, pid) values (101987220, 5);
insert into regs (sid, pid) values (111222333, 5);
insert into regs (sid, pid) values (111222334, 5);
insert into regs (sid, pid) values (111222335, 5);
insert into regs (sid, pid) values (111222336, 5);
insert into regs (sid, pid) values (111222337, 5);

insert into regs (sid, pid) values (101987225, 6);
insert into regs (sid, pid) values (111222333, 6);
insert into regs (sid, pid) values (111222334, 6);
insert into regs (sid, pid) values (111222335, 6);
insert into regs (sid, pid) values (111222336, 6);
insert into regs (sid, pid) values (111222337, 6);
insert into regs (sid, pid) values (111222338, 6);
insert into regs (sid, pid) values (111222339, 6);
insert into regs (sid, pid) values (100917194, 6);
insert into regs (sid, pid) values (100917195, 6);
insert into regs (sid, pid) values (100917196, 6);
insert into regs (sid, pid) values (100917197, 6);
insert into regs (sid, pid) values (100917198, 6);
insert into regs (sid, pid) values (100917199, 6);
insert into regs (sid, pid) values (101987220, 6);
insert into regs (sid, pid) values (101987221, 6);
insert into regs (sid, pid) values (101987222, 6);

insert into regs (sid, pid) values (101987220, 7);

insert into PPID (GroupSize, Grade, Personal, Groups, Misc) values ('1', '1', '1', '1', '1');



end transaction;
