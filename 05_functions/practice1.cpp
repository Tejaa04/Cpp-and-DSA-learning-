// void - used when we have no return values,it doesnt return anything
// int function_name - it is used when we want to return an int value
#include<bits/stdc++.h>
using namespace std;

void print(){                   // defining a function
    cout<<"This a Void function" << endl;
}
int sum(int a, int b){          // we need to mention the data type for these parameters
    int c = a+b;                // int will find for the return value - if not found, it returns garbage value
    return c;                   // return keyword is used to return the value
}
int main(){
    print();                    // calling a function
    int a,b;
    cin >> a >> b;
    cout << sum(a,b);           // calling a function with the parameters
}
