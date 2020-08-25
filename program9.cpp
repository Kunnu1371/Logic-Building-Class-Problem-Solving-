// 8.	WAP to accept a String and Convert the case of each alphabet present in it.(eq- JaVa---jAvA)

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
    int flag = 0, length, i;
    string str, reverse;
    getline(cin, str);
    length = str.length() - 1;
     for(i = length; i >= 0 ; i--) {
      reverse += str[i];
   }

    if (reverse.compare(str) == 0) {
        cout << str << " is  a palindrome" << endl; 
    }     
    else {
        cout << str << " is not a palindrome" << endl; 
    }
}