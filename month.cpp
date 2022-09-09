/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1D

This program prints the number of days after the user inputs a year and a month.
*/
#include<iostream>
using namespace std;

int main()
{
    cout << "Enter year: ";
    int year;
    cin >> year;
    
    cout << "Enter month: ";
    int month;
    cin >> month;
    
    if ((month == 2) && ((year % 100 != 0 && year % 4 == 0)) || (year % 400 == 0)){
        cout << "29 days" << endl;
    }
    else if (month == 2){
        cout << "28 days" << endl;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 days" << endl;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "30 days" << endl;
    }
    return 0;
}
