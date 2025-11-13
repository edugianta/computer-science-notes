/*
NAME: Eduardo Lopes Giantaglia
ID: 20810352
EMAIL: scyel4
MODULE CODE: COMP1048 Databases and Interfaces
Lab 004 SQL CREATE, INSERT and SELECT
Monday October 20th
*/



.headers on
.mode column

DROP TABLE IF EXISTS Movie;
DROP TABLE IF EXISTS Actor;

CREATE TABLE Movie(
  mId INT PRIMARY KEY AUTOINCREMENT, 
  mTitle TEXT NOT NULL,
  mPrice REAL NOT NULL, 
  mYear INT,
  mGenre TEXT,
  mLeadingActor INT REFERENCES Actor(aid)
);

CREATE TABLE Actor(
  aid INT PRIMARYKEY AUTOINCREMENT,
  aName TEXT NOT NULL
);

-- im gonna have to use subqueries

-- first add all unique actors
INSERT INTO Actor (aName) VALUES
('Barry Nelson'),
('Arethan Franklin'),
('Bullet Prakash'),
('Daniel Craig'),
('James Bond'),
('Jonny Walker'),
('Laura Dern'),
('Ryan Reynolds');

-- then fetch their ids with subquery, not elegant at all
INSERT INTO Movie (mTitle, mPrice, mYear, mGenre, mLeadingActor) VALUES
('Die Hard with a Vengeance', 12.24, 1999, 'Action', 
    (SELECT aid FROM Actor WHERE aName = 'Barry Nelson')),
('Black Snake Moan', 9.99, 2007, 'Adventure', 
    (SELECT aid FROM Actor WHERE aName = 'Barry Nelson')),
('Snakes on a Plane', 9.99, 2011, 'Comedy', 
    (SELECT aid FROM Actor WHERE aName = 'Arethan Franklin')),
('Freeway of Love', 9.99, 2018, 'Drama', 
    (SELECT aid FROM Actor WHERE aName = 'Bullet Prakash')),
('I knew you were waiting for me', 12.25, 1997, 'Comedy', 
    (SELECT aid FROM Actor WHERE aName = 'Daniel Craig')),
('The Black Panther', 10.99, 2018, 'Action', 
    (SELECT aid FROM Actor WHERE aName = 'James Bond')),
('The Jungle Book', 9.99, 2015, 'Adventure', 
    (SELECT aid FROM Actor WHERE aName = 'Jonny Walker')),
('Infinity War', 8.5, 1975, 'Horror', 
    (SELECT aid FROM Actor WHERE aName = 'Laura Dern')),
('Coming to Europe', 12.99, 2001, 'Adventure', 
    (SELECT aid FROM Actor WHERE aName = 'Laura Dern')),
('The Midnight', 10.99, 2019, 'Drama', 
    (SELECT aid FROM Actor WHERE aName = 'Ryan Reynolds'));


-- 3.3
-- question 1 
SELECT mTitle, mYear FROM Movies;
-- question 2 
SELECT mTitle FROM Movies WHERE mPrice > 10;
-- question 3 
SELECT mTitle FROM Movies WHERE (mPrice <= 9.99) AND (mGenre = 'Adventure');
-- question 4
SELECT mTitle, mGenre FROM Movies WHERE (mGenre = 'Comedy') OR (mGenre = 'Action');
-- question 5 
SELECT DISTINCT aName from Actor ORDER BY aName DESC;



