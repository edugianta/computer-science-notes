.columns on
.mode header

CREATE TABLE Student (
  sID INTEGER PRIMARY KEY,
  sName VARCHAR(50),
  sAddress VARCHAR(255),
  sYear INTEGER DEFAULT 1
);

-- 1
INSERT INTO Student(
  sID,
  sName,
  sAddress,
  sYear
) VALUES (
  6,
  "Alice Brown",
  "10 Maple Ave",
  2
);

-- 2
INSERT INTO Student(
  sName,
  sAddress
) VALUES (
  "Bob Wilson",
  "22 Pine St"
);

-- 3
INSERT INTO Student ( sName, sAddress, sYear) VALUES ("Charlie Davis", "15 Lake Dr", 3), ("Diana Evans", "9 Hill Top", 1);


-- SELECT 

--4
SELECT * FROM Student;

--5
SELECT sName, sYear FROM Student;

--6
SELECT * from Student WHERE sYear = 1;

--7
SELECT * from Student WHERE sYear >= 2;

--8
SELECT * from Student WHERE sName LIKE "%J%";

--9
SELECT sName from STUDENT WHERE (sAddress = "5 Oak St") OR (sYear = 3); 

--10
SELECT DISTINCT sYear from STUDENT; 

--11
SELECT * from STUDENT ORDER BY sName ASC;

--12
SELECT * from STUDENT ORDER BY
  sYear DESC,
  sName ASC;

--13
SELECT sID, sName FROM STUDENT WHERE (sYear = 1) OR (LIKE "%St%");

--14
INSERT INTO Student (sName, sAddress) VALUES ("Fiona Green", "12 Park Ln");

SELECT * from Student WHERE sName = "Fiona Green";
