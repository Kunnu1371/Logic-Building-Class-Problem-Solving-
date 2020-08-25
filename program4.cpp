// 4.	WAP to accept a string and count number of Vowels present in it


#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
     string str;
     int  count = 0;
     cout << "Enter string: ";
     getline(cin, str);
     for(int i = 0; i < str.length(); i++) {
          if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'|| str[i] == 'U') {
               count++;
          }
     }
     cout << count;
    return 0;
}