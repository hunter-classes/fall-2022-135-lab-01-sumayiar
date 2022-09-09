/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab1A

This program finds the smallest number out of three numbers that the user inputs.
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
    
    cout << "Enter the third number: ";
    int c;
    cin >> c;
    
    if (b > a && c > a){
        cout << "The smaller of the three is " << a << endl;
    }
    else if (a > b && c > b){
        cout << "The smaller of the three is " << b << endl;
    }
    else if (a > c && b > c){
        cout << "The smaller of the three is " << c << endl;
    }
    return 0;
}
