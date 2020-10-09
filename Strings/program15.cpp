// 15.	WAP of  Trim “          hi      ”                    ----- “hi”.


#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    int count = 0;
    cout << "Enter string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(!(s[i] == ' ')) {
           cout << s[i];
        }
        else {
            continue;
        }
    }
    return 0;
}