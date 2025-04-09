#include <bits/stdc++.h> // Include the necessary header file for input/output operations
using namespace std;
int main()
{
string Statement; // Declare a string variable named "Statement" to store user input
getline(cin, Statement); // Get a line of input from the user and store it in the "Statement" variable
int m = 0; // Initialize a variable "m" to 0
for (int i = 0; i < Statement.size(); i++) // Iterate through each character in the input string
{
if (isalnum(Statement[i])) // Check if the current character is alphanumeric
{
if (isdigit(Statement[i])) // Check if the current character is a digit
{
// Handle the case where the current character is part of a multi-digit integer
int num = 0;
while (i < Statement.size() && isdigit(Statement[i]))
{
num = num * 10 + (Statement[i] - '0');
i++;
}
i--; // Decrement i to account for the extra increment in the loop
cout << "<" << num << ">"; // Output a token indicating an integer
}
else
{
// Handle the case where the current character is part of an identifier
string identifier;
while (i < Statement.size() && isalnum(Statement[i]))
{
identifier += Statement[i];
i++;
}
i--; // Decrement i to account for the extra increment in the loop
cout << "<id," << m << ">"; // Output a token indicating an identifier
m++; // Increment the identifier number
}

}
else if (Statement[i] == '=') // Check if the current character is an equal sign
{
cout << "<=>"; // Output a token indicating an equal sign
}
else if (Statement[i] == '+') // Check if the current character is a plus sign
{
cout << "<+>"; // Output a token indicating a plus sign
}
else if (Statement[i] == '-') // Check if the current character is a minus sign
{
cout << "<->"; // Output a token indicating a minus sign
}
else if (Statement[i] == '*') // Check if the current character is an asterisk
{
cout << "<*>"; // Output a token indicating an asterisk
}
else if (Statement[i] == '%') // Check if the current character is a percent sign
{
cout << "<%>"; // Output a token indicating a percent sign
}
else if (Statement[i] == '/') // Check if the current character is a forward slash
{
cout << "</>"; // Output a token indicating a forward slash
}
else if (Statement[i] == ';') // Check if the current character is a semicolon
{
cout << "<;>"; // Output a token indicating a semicolon
}
}
return 0;
}
