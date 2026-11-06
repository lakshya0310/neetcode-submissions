-- Write your query below
SELECT t1.name FROM customers AS t1
LEFT JOIN orders AS t2
    ON t1.id = t2.customer_id
WHERE t2.id is NULL;