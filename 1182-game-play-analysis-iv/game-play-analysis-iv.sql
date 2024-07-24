SELECT ROUND(COUNT(DISTINCT a.player_id) / COUNT(DISTINCT act.player_id), 2) AS fraction
FROM (
    SELECT player_id, MIN(event_date) AS evt
    FROM activity
    GROUP BY player_id
) act
LEFT JOIN activity a
ON act.player_id = a.player_id
AND DATE_ADD(act.evt, INTERVAL 1 DAY) = a.event_date;
