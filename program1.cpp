#include <iostream>
using namespace std;

// Program to print a string using string data type

void display(string s){
    cout << "Entered string is: " << s;
}

int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    display(str);
    return 0;    
}

// Program to print a string using character array.

// void display( char *str){
//        cout << "Entered string is: " << str;
// }
// int main(){
//     char str[100];
//     cout << "Enter the string: ";
//     cin.get(str, 100);
//     display(str);
//     return 0;
// }