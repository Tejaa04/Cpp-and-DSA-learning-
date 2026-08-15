#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>100 || marks<0){
        cout<<"Please enter valid marks.";
    }
    else if(marks>=90){
        cout<<"O"<<endl;
        cout<<"Pass"<<endl;
    }
    else if(marks>=80){
        cout<<"A+"<<endl;
        cout<<"Pass"<<endl;
    }
    else if(marks>=70){
        cout<<"A"<<endl;
        cout<<"Pass"<<endl;
    }
    else if(marks>=60){
        cout<<"B"<<endl;
        cout<<"Pass"<<endl;
    }
    else if(marks>=40){
        cout<<"print"<<endl;
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}