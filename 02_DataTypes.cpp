#include <bits/stdc++.h>
using namespace std;
int main(){
int age = 22;
float height = 165.6, CGPA = 7.08;
char initial = 'L';
bool is_employee = false;

string name1;
cout << "Enter your nick name: ";
cin >> name1;
string name2;
cin.ignore();
cout << "Enter your full name: ";
getline(cin, name2);
cout<<"Hello Mr." << name2 << endl;

cout << age << endl;
cout << height << endl;
cout << CGPA << endl;
cout << initial << endl;
cout << is_employee << endl;
}