-- create a table
CREATE TABLE students (
"ID" int8 PRIMARY KEY,
"Name" verchar(50) NOT NULL,
"Age" int2 NOT NULL,
    "City" Char (50),
    "Salary" numeric
);

SELECT * FROM students
