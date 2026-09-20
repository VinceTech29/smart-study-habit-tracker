# Smart Study Habit Tracker

A simple C++ console application that allows users to record and view their study sessions.

## Features

- Add a study session
- Record the subject
- Record the number of study hours
- Record the time of study
- View the saved study session
- Exit the program through a menu

## Technologies Used

- C++
- Object-Oriented Programming
- Standard Input/Output

## Program Structure

The program uses a `StudySession` class with the following attributes:

- `subject` - stores the subject being studied
- `hours` - stores the number of study hours
- `timeOfDay` - stores the study time such as Morning, Afternoon, or Night

### Main Functions

`inputSession()`
- Accepts the study session details from the user.

`displaySession()`
- Displays the recorded study session.

`main()`
- Handles the program menu and user choices.

## How to Run

1. Make sure a C++ compiler is installed.
2. Save the source code as:

```text
main.cpp
