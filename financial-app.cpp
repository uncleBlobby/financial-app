#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    // Program introduction and explanation
    cout << endl;
    cout << "                Financial App: Initial Deposit" << endl;
    cout << "********************************************************************" << endl;
    cout << endl;
    cout << "Suppose you want to deposit a certain amount of money into an account" << endl;
    cout << "with a fixed anual interest rate.  This program will compute the initial" << endl;
    cout << "deposit required, based on desired final balance, interest rate, and term." << endl;

    // Variable initialization
    double finalAccountValue, annualInterestPercent, termYears;

    // Prompt for user inputs
    cout << endl;
    cout << "Please enter your desired account value at end of term: $";
    cin >> finalAccountValue;
    cout << "Please enter the annual interest rate (%): ";
    cin >> annualInterestPercent;
    cout << "Please enter the number of years in the term: ";
    cin >> termYears;
    cout << endl;

    // Calculate initial deposit and output to user
    cout << "The initial deposit required is: $" << fixed << setprecision(2) << (finalAccountValue / (pow((1 + (annualInterestPercent/100)/12), termYears * 12)));
    cout << endl;
    cout << endl;

    // End program
    return 0;
}