.headers on
.mode column
.schema


SELECT 
  Movie.movYear as "year", 
  Movie.movTitle as "movie_title", 
  Actor.actName as "leading_actor" 
FROM Movie 
LEFT JOIN Actor ON Actor.actId = Movie.actId
ORDER BY 
  Movie.movYear ASC,
  Movie.movTitle ASC;

SELECT
  Movie.movTitle as "title",
  MovieSales.region as "region",
  MovieSales.movSales as "sales"
FROM Movie
LEFT JOIN MovieSales ON Movie.movId = MovieSales.movId
ORDER BY
  Movie.movTitle ASC;


 
SELECT
  Movie.movTitle as "movie_title",
  SUM(MovieSales.movSales) as "sales"
FROM Movie
LEFT JOIN MovieSales ON Movie.movId = MovieSales.movId
GROUP BY MovieSales.movSales
ORDER BY
  Movie.movTitle ASC;


SELECT 
  Actor.actName as "actor_name",
  SUM(MovieSales.movSales) as total_sales
FROM Actor
LEFT JOIN Movie ON Actor.actId = Movie.actId
LEFT JOIN MovieSales ON Movie.movId = MovieSales.movId
GROUP BY total_sales
ORDER BY total_sales DESC;

