# Spreadsheets

-Most of us are familiar with spreadsheets, rows of data, with each column in a row having a different piece of data that relate to each other somehow.

-A database is an application that can store data, and we can think of Google Sheets as one such application.

-For example, we created a [Google Form](https://forms.gle/Jtg6Hu466CV7aVBt8) to ask students their favorite TV show and genre of it. We look thorugh the responses, and see that the spreadsheet has three columns: “Timestamp”, “title”, and “genres”:

![spreadSheets](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/spreadsheets/spreadsheet.png)

We can download a CSV file from the spreadsheet with “File > Download”, upload it to our IDE, and see that it’s a text file with comma-separated values matching the spreadsheet’s data.

## Open a CSV file in Python

Python has a package that allows you to open csv files, and incorporate them into a .py file.  

```python
import csv
with open("favoriteTVShows.csv", "r") as file:
    reader = csv.DictReader(file)

    for row in reader:
        print(row["title"])
```
Try creating a file called favorites.py; open the favoriteTVShows.csv file and print the titles from the csv file in the terminal using the python code.

{% next %}

## Analying the Data

Maybe we want to do a summary of the number of times people picked a certain TV show.  We can open the file and make a 'dictionary' for the title of each row.

Now, we can use a dictionary to count the number of times we’ve seen each title, with the keys being the titles and the values for each key an integer, tracking how many times we’ve seen that title:

```python
import csv
#Remember dictionaries are declared with {}

counts = {}

with open("favoriteTVShows.csv", "r") as file:
    reader = csv.DictReader(file)
    
#This block checks if the title is already in the dictionary.  If it is count is increased by one.  If it isn't, it is added to the dictionary.
    
    for row in reader:
        title = row["title"]
        if title in counts:
            counts[title] += 1
        else:
            counts[title] = 1 
            
#This prints the title, and number of times it occurs separated by |.
for title, count in counts.items():
    print(title, count, sep=" | ") #This prints the title, and number of times it occurs separated by |.
```
{% next %}
