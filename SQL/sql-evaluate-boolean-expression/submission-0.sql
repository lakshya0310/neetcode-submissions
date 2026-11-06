-- Write your query below
SELECT e.left_operand,e.operator,e.right_operand,
CASE
WHEN e.operator = '>' AND lv.value > rv.value THEN 'true'
WHEN e.operator = '<' AND lv.value < rv.value THEN 'true'
WHEN e.operator = '=' AND lv.value = rv.value THEN 'true'
ELSE 'false'
END AS value
FROM expressions AS e
JOIN variables AS lv ON e.left_operand=lv.name
JOIN variables AS rv ON e.right_operand = rv.name;