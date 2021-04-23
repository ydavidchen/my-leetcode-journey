
/*
Please write a SQL query to output movies with an odd numbered ID 
and a description that is not 'boring'. Order the result by rating.
*/

SELECT *
FROM cinema
WHERE id % 2 = 1 AND description != 'boring'
ORDER BY rating DESC
;