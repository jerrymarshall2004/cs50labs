# Introduction to Git

In this lab you will learn:
-What Git is
-What GitHub is
-How to set up a 'local' Git repositroy
-How to push changes from your local machine to the cloud

Git is a version control system that lets you manage and keep track of your source code history. GitHub is a cloud-based hosting service that lets you manage Git repositories.

Imagine a situation where you are writing an essay, and you decide to make some changes.  After reading the changes, you realize the essay just isn't going in the direction you want, and would like to go back to the version you had before you made the changes.  You realize that you saved your new version with the same name, and have lost your original version ---- OH NO!

{% next %}

This is where Git comes in.  Git is a tool that tracks version history.  You have a master timeline, and can create branches off of that timeline.  You can keep the changes on separate branches, or if you decide you like the changes, you can "merge" the changes back to the master timeline.

![gitTimeline](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/gitIntro/gitTimeline.png)

{% next %}

# Install & Configure Git

1. Register for an account on [github.com](https://github.com/).

__***CS50 IDE already has git installed.  But the instructions below are included incase you want to install git on a computer at home.***__

2. [Download](https://git-scm.com/downloads), install, and [configure](https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup) git. Windows users please install [Git for Windows](https://gitforwindows.org/).
3. Configure git in your local environment (CS50 IDE) by typing in the following commands (Be sure to replace the information in quotes with your infromation:

```
$ git config --global user.name "FirstName LastName"
$ git config --global user.email "email@example.com"
```
4.  In the IDE, use mkdir to create a directory calle "MyBio".  Make sure to cd into the newly created folder.

```
mkdir MyBio
cd MyBio
```

5.  In this directory, initialize git by typing:

```
git init
```
This sets up a hidden folder within your MyBio folder that will keep track of version changes.  You should also see (Master) beside your prompt now.

6.  Create a file in your new directory by using the touch command:

```
touch MyBio.txt
```

7.  Double click on the file to edit it.  Type in your name, and a fake student number.

{% next %}  

# Git Workflow
![gitTimeline](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/gitIntro/gitWorkflow.png)

Git has an interesting workflow.  Once you have initialized the folder (Git init), you need to tell git which files to watch for changes.  You do this with the git add command:

```
git add MyBio.txt
```
This moves the file from the local working directory to a "staging area".

Check to make sure the file was added to the stagging area properly by typing:

```
git status
```

After we are happy with some of the changes we've made to the MyBio.txt file, we will need to "commit" this change. When a commit is made, you always need to include a message to indicate what changes were made.
```
git commit -m "Added my name and a fake student number."
```
We can check that the change was commited to the master timeline by typing:
```
git log
```
{% next %}
