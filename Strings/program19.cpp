// 19.	WAP to accept a String and Display it in Title Case.(eq- My name is covid----- My Name Is Covid)


#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    int count = 0;
    cout << "Enter string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            s[i + 1] = toupper(s[i + 1]);
            cout << " ";
        }
        else if(i == 0){
            s[i] =  toupper(s[i]);
            cout << s[i];
        } else {
            cout << s[i];
        }
    }
    return 0;
}