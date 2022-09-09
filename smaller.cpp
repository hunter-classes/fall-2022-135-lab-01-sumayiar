/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1A
This program finds the smaller of two integers inputted and prints it out.
*/
#include<iostream>

using namespace std;

int main()
{
    cout << "Enter the first number: ";
    int a;
    cin >> a;

    cout << "Enter the second number: ";
    int b;
    cin >> b;

    if (a > b){
        cout << "The smaller of the two is " << b << endl;
    }
    else {
        cout << "The smaller of the two is " << a << endl;
    }
    return 0;
}