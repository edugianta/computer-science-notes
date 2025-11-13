.headers on
PRAGMA foreign_keys = ON;

DROP TABLE IF EXISTS Books;
DROP TABLE IF EXISTS Genres;

CREATE TABLE Genres (
    genre_id INTEGER PRIMARY KEY AUTOINCREMENT,
    genre_name TEXT 
);


CREATE TABLE Books (
    book_id INTEGER PRIMARY KEY AUTOINCREMENT,
    title TEXT,
    author TEXT,
    pub_year DATE,
    genre_id INT,
    FOREIGN KEY(genre_id) REFERENCES Genres(genre_id)
);

INSERT INTO Genres (
  genre_name
) VALUES (
  "Action"
);

INSERT INTO Genres (
  genre_name
) VALUES (
  "Legal Drama"
);

INSERT INTO Genres (
  genre_name
) VALUES (
  "Political Epic"
);

INSERT INTO Genres (
  genre_name
) VALUES (
  "Satire"
);

INSERT INTO Genres (
  genre_name
) VALUES (
  "Young Adult"
);


INSERT INTO Books (
  title,
  author,
  pub_year,
  genre_id
) VALUES (
  "To Kill a mockingbird",
  "harper lee",
  "1965", 
  "1"
);
INSERT INTO Books (
  title,
  author,
  pub_year,
  genre_id
) VALUES (
  "dune",
  "frank herbert",
  "1965", 
  "2"
);
INSERT INTO Books (
  title,
  author,
  pub_year,
  genre_id
) VALUES (
  "pride and prejudice",
  "frank herbert",
  "1813", 
  "4"
);
INSERT INTO Books (
  title,
  author,
  pub_year,
  genre_id
) VALUES (
  "hitchikers guide",
  "douglas", 
  "1979", 
  "4"
);
INSERT INTO Books (
  title,
  author,
  pub_year,
  genre_id
) VALUES (
  "hunger games",
  "suzanne collins", 
  "2008", 
  "5"
);





-- task 2

-- list all books
SELECT * from Books;
SELECT * from Genres;
-- list all books after the year 2000
SELECT * from Books WHERE (pub_year > 2000);

-- all books that are Satire
SELECT * from Books WHERE (genre_id = (
    SELECT genre_id FROM Genres WHERE genre_name = 'Satire'
));

-- all unique author names
SELECT DISTINCT author from Books;
