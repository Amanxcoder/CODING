#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "Enter The Percentage  :  ";
    cin >> p;

    if (p <= 100 && p >= 81)
    {
        cout << "Very good";
    }
    if (p >= 61 && p <= 80)
    {
        cout << "Good";
    }
    if (p >= 41 && p <= 60)
    {
        cout << " Average";
    }

    if (p <= 40)
    {
        cout << " Fail";
    }
}