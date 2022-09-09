/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1C

This program determines whether the year that the user inputted is a leap or common year.
*/
#include<iostream>

using namespace std;

int main()
{
    cout << "Enter year: ";
    int year;
    cin >> year;
    
    if (year % 4 != 0){
        cout << "Common year" << endl;
    }
    else if (year % 100 != 0){
         cout << "Leap year" << endl;
    }
    else if (year % 400 != 0){
         cout << "Common year" << endl;
    }
    else {
        cout << "Leap year" << endl;
    }
    return 0;
}
