SELECT 
    user_id,
    Concat(Upper(Left(name, 1)), Lower(Substr(name, 2))) AS name
FROM 
    users
ORDER BY 
    user_id;