// 5.	WAP to accept a string and count number of Words Present in it.(eq- Amar  Singh-- 2)


#include<iostream>
using namespace std;
int main(){
    string str;
    int count = 1;
    cout << "Enter string: ";
    getline(cin, str);
    for(int i = 0; str[i] != '\0';i++) {
        if(str[i] == ' ') {
            count++;
        }
    }
    cout << count;
    return 0;
}