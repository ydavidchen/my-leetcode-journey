/*
Udacity SQL for Data Analysis
JOIN Quiz Part I

Provide a table for all web_events associated with account name of Walmart. 
There should be three columns. 
Be sure to include the primary_poc, time of the event, and the channel for each event. 
Additionally, you might choose to add a fourth column to assure only Walmart events were chosen.

RESULTS: 39 rows
*/

SELECT w.channel, a.primary_poc
FROM web_events w
JOIN accounts a
ON w.account_id = a.id
WHERE a.name = 'Walmart';


/*
Provide a table that provides the region for each sales_rep 
along with their associated accounts. 
Your final table should include three columns: the region name, the sales rep name, and the account name. 
Sort the accounts alphabetically (A-Z) according to account name. 

RESULTS: 351 rows
*/
SELECT s.name, r.name, a.name
FROM sales_reps s
JOIN region r
ON s.region_id = r.id
JOIN accounts a
ON s.id = a.sales_rep_id
ORDER BY a.name;

/*
Provide the name for each region for every order, 
as well as the account name and the unit price they paid (total_amt_usd/total) for the order. 
Your final table should have 3 columns: region name, account name, and unit price. 
A few accounts have 0 for total, so I divided by (total + 0.01) to assure not dividing by zero.

RESULTS: 6912 rows
*/
SELECT r.name, a.name, o.total_amt_usd/(o.total+0.01) unit_price
FROM region r
JOIN sales_reps s ON s.region_id = r.id
JOIN accounts a ON a.sales_rep_id = s.id
JOIN orders o ON o.account_id = a.id;