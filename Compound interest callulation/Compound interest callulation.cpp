#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time, interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the interest rate: ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    interest = principal * pow((1 + rate / 100), time);

    cout << "Compound Interest: " << interest - principal << end
    return 0;
}