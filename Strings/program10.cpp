// 10.	WAP of SubString (AMAR SINGH--- R SINGH)

#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    int flag;
    cout << "Enter name: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
         if(s[i] == ' ') {
             cout << s[i - 1] << " ";
             flag = 1;
        }
        else if(flag == 1) {
            cout << s[i];
        }
    }
    return 0;
}