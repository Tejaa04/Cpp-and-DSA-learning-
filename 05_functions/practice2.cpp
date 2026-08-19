#include<iostream>
using namespace std;

// pass by value
void addBonusByValue(int balance, int deposit){
    balance += deposit;
    cout << "Inside function: " << balance << endl;
}

// pass by reference
void addBonusByReference(int &balance, int deposit){         // & this symbol points to the local memory of the variable
    balance += deposit;
}

int main(){
    int balance = 5000;
    int deposit = 1500;
    addBonusByValue(balance, deposit);
    cout << balance << endl;
    addBonusByReference(balance, deposit);
    cout << balance << endl;
}
