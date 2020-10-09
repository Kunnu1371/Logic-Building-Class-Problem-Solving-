// 11.	WAP to accept a word and convert it to piglatin form(trouble --- oubletray)


#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string str;
    int count = 0;
    cout << "Enter string: ";
    getline(cin, str);
    int first_vowel_found;
    for(int i = 0; i < str.length(); i++) {
         if((str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'|| str[i] == 'U') || (first_vowel_found == 1)) {
             cout << str[i];
             first_vowel_found = 1;
         } 
        else {
            count++;
        }
    }
     for(int i = 0; i < count; i++) {
         cout << str[i];
     }

     cout << "ay";
    return 0;
}