#include <iostream>
#include <string>
using namespace std;
int main()
{
// declare variables
/* declare 3 string variables to read in the three names */
string name1, name2, name3;
// prompt the user for three names
cout << "Please enter 3 names: ";
// read in the three names
cin >> name1 >> name2 >> name3;
// display a message describing the output
cout << "\nThe alphabetical order of the names is:\n";
if (name1 <= name2 && name1 <= name3)
{
cout << name1 << endl;
if (name2 <= name3)
{
cout << name2 << endl;
cout << name3 << endl;
}
else
{
cout << name3 << endl;
cout << name2 << endl;
}
}
else if (name2 <= name1 && name2 <=name3)
{
cout << name2 << endl;
if (name1 <= name3)
{
cout << name1 << endl;
cout << name3 << endl;
}else {
cout << name3 << endl;
cout << name1 << endl;
}}
else
{
cout << name3 << endl;
if (name1 <= name2) {
cout << name1 << endl;
cout << name2 << endl;
}
else {
cout << name2 << endl;
cout << name1 << endl;
}
}
return 0;
}