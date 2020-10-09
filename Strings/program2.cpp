// 2.	WAP to accept the First name , Middle Name and Last Name of a person and display full name  and Short Name (eq- Amar Kumar Singh-   A.K.S)

#include<iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter name: ";
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        if(i == 0) {
            cout << str[i];
        }
        else if(str[i] == ' ') {
            cout << "." << str[i + 1];
        }
    }
    return 0;
}