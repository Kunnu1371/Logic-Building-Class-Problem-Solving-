// 7.	WAP to accept a day name and display the Day number.(eq- Monday --1)

#include<iostream>
using namespace std;
int main(){
    int found, i;
    string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << "Please enter the day: ";
    string entered_day;
    getline(cin, entered_day);
    for(i = 0; i < 7; i++) {
        if(entered_day.compare(day[i])) {
            found = 1;
            break;
        } 
    }
        if(found == 1) {
            cout << day[i] << "\t" << i + 1;
        }
        else{
            cout << "Entered some wrong data";
        }
    
    return 0;
}