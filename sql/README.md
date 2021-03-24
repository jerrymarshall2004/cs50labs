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

# Working with data

It turns out that, when working with data, we only need four operations:

- Create
- Read
- Update 
- Delete

In SQL, the commands to perform each of these operations are:

- Insert

   -INSERT INTO table_name (Column A, Column B) VALUES (Value A, Value B)

- Select

   -SELECT (Column A, Column B) From table_name

- Update
   
   -UPDATE table_name SET Column = new_value WHERE column = value

- Delete

   -DELETE FROM table_name WHERE Column = Value


{% next %}

## Using Python to Create a Database

Lets create a simple python program to keep track of your favorite songs.  Create a new file called favoriteSongs.py

The first thing you have to do is include the sqllite package in your python file:
```python
import sqlite3
```
Then you tell python to create a database, and create a "cursor" (that will be able to move through the data).
```python
conn = sqlite3.connect('favoriteSongs.db')
cur = conn.cursor()
```

Now that you have connected your database, and cursor, you can use sql language commands.  Lets create a table called favouriteSongs, with a column "Band", and another column "Song" :

```python
cur.execute('DROP TABLE IF EXISTS favoriteSongs') #This is necessary in case a table with same name exists
cur.execute('CREATE TABLE favoriteSongs (Band TEXT, Song TEXT)')
```
Next, Lets insert two rows in our newly made table:
```python
cur.execute('INSERT INTO favoriteSongs (Band, Song) VALUES (?, ?)',
    ('ACDC', 'Thunder Struck'))
cur.execute('INSERT INTO favoriteSongs (title, plays) VALUES (?, ?)',
    ('Led Zepplin', 'Highway to Heaven'))
```
The last step is to commit the changes, and write them to the database file:

```python
conn.commit()
```
Lastly, lets have python print our newly added songs in the terminal:

```python
print('Favorite Songs:')
cur.execute('SELECT Band, Song FROM favouriteSongs')
for row in cur:
     print(row)
```
And finally, close the data base:
```python
cur.close()
```
## Your Turn

Write a python program that keeps a database of your favorite songs, ask the user for band name, then song name, then print all of the records.  "Here is a list of your favourite songs: "

{% spoiler "Hint" %}
In this case you don't want to delete the table if it exists each time, and you don't need to create a new table each time.
{% endspoiler %}

## Note: I havn't had a chance to write a check/submit for this yet.


