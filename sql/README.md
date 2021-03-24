# SQL

In this lab you will:

- Look at a new program in our terminal window, sqlite3, a command-line program that lets us use another language, SQL (pronounced like “sequel”).

- Learn how run some commands to create a new database called favorites.db and import our CSV file into a table called “favorites”:

```
~/ $ sqlite3 favorites.db
```
```
sqlite> .mode csv
```
```
sqlite> .import "favoriteTVShows.csv" favorites
```
If you notice, in the file tree, there is now an addition file with a .db file extension. Now we can use the SQL language to interact with our data.  For example, you can print the titles by typing in the terminal:

```
SELECT title FROM favorites; 
```

**We can sort our results:**

```
SELECT title FROM favorites ORDER BY title;
```

**And get a count of the number of times each title appears:**

```
SELECT title, COUNT(title) FROM favorites GROUP BY title;
```
**We can even set the count of each title to a new variable, n, and order our results by that, in descending order. Then we can see the top 10 results with LIMIT 10:**

```
SELECT title, COUNT(title) AS n FROM favorites GROUP BY title ORDER BY n DESC LIMIT 10;
```
**With .schema, we can see how the format for the table for our data is created:**

```
.schema
```
SQL is a language that lets us work with a relational database, an application lets us store data and work with them more quickly than with a CSV.

{% next %}

#Working with data

It turns out that, when working with data, we only need four operations:

-Create
-Read
-Update
-Delete

In SQL, the commands to perform each of these operations are:

-Insert
-Select
-Update
-Delete


## Note: I havn't had a chance to write a check/submit for this yet.
