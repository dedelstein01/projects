//calculate compound interest
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

    int main (){
    int time = 1, princ, years;
    double rate, money;

    system("cls");
    system("color 15");

    cout << "Hello Daniel" << endl;
    cout << "Please enter a number: ";      //asks user to input integer princ
    cin >> princ;
    cout << "rate: ";                       //asks user to enter interest rate
    cin >> rate;
    cout << "Number of years: ";            //length of time
    cin >> years;
    cout << endl;

    cout << setiosflags (ios::fixed) << setprecision(2);            //standard notation, 2 decimal places
    money = (princ * (rate/100)+ princ);                            //formula
    cout << "0\t$" << princ << endl << "1\t$" << money << endl;     //outputs princ and 1st yr interest

    while (time < years){                                           //loop until # of years in reached
    money = (money * (rate/100) + money);
    time++;

    cout << time << "\t$" << money << endl;                         //output year and total

    }

    return 0;
    }
