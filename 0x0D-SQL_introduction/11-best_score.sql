-- Lists all records with a score >= 10 in the table second_table of the database hbtn_0c_0
-- Records are ordered by descending score
SELECT `score`, `name`
FROM `second_table`
WHERE `score` >= 10
ORDER BY `score` DESC;
