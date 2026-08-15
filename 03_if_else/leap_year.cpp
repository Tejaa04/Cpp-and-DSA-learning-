#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter an year to check leap year" << endl;
    cin >> n;
    if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
        cout<<"Leap year" << endl;
    }
    else{
        cout<<"Not a leap year" << endl;
    }
}