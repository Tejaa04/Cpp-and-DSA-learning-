// for a single character - we use single quotes ' ', for character sequences - we use " "
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Strings
    string line;
    string vowels = "aeiou";
    cout<<"Enter a sequence of strings: ";
    getline(cin, line);
    cout << line << endl;
    // Arrays
    int arr[5] = {78, 12, 34, 90, 21};
    cout<< arr[1] << endl;
    cout << sizeof(arr) << endl; // it returns the size of array in bytes, int = 4 bytes, 5 int varaibles - so returns 20 bytes
    // 2d Arrays
    int arr1[2][3];
    arr1[0][0] = 78;
    cout << arr1[0][0] << endl;
}