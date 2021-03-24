# SQL

-We’ll look at a new program in our terminal window, sqlite3, a command-line program that lets us use another language, SQL (pronounced like “sequel”).

-We’ll run some commands to create a new database called favorites.db and import our CSV file into a table called “favorites”:

```
~/ $ sqlite3 favorites.db
```
```
sqlite> .mode csv
```
```
sqlite> .import "favoriteTVShows.csv" favorites
```
If you notice, in the file tree, there is now an addition file with a .db file extension.

-For example, we created a [Google Form](https://forms.gle/Jtg6Hu466CV7aVBt8) to ask students their favorite TV show and genre of it. We look thorugh the responses, and see that the spreadsheet has three columns: “Timestamp”, “title”, and “genres”:

![spreadSheets](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/spreadsheets/spreadsheet.png)



## Note: I havn't had a chance to write a check/submit for this yet.
