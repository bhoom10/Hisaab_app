# Hisaab_app
Accounts application for trips with friends

This is a C++ applications that takes into account expenditures of a set of people for a period of time and outputs the settled accounts
Input format:
Number of People
First names of all people
Expenditures

The first line contains number of people. Next line has the first names of each person
The next few lines have the expenditures.
Each expenditure is of the following format:
<name of person who paid> <amount paid> <List of people for who he paid>

Sample input:
4
A B C D
A 100 A B C D
B 500 C D
D 300 A B

Sample output:
A gives 75
B gets 325
C gives 275
D gets 25



