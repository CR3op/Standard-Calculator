#include <iostream>
#include "operations.h"

using namespace std;

int main()
{
    int x,y;
    int user;

    cout << "Choose which operation will you want to do:" << endl;
    cout << "1. Add\n2. Subtract\n3. Divide\n4. Multiply" << endl;
    cout << "Enter a number: ";
    cin >> user;
    cout << endl;

    if (user == 1) //for Addition
    {
        cout << "Enter a number: ";
        cin >> x;
        cout << "Enter a number: ";
        cin >> y;

        cout << Add(x, y);

    }
    else if(user == 2)//for Subtraction
    {
        cout << "Enter a number: ";
        cin >> x;
        cout << "Enter a number: ";
        cin >> y;
        cout << Sub(x, y);

    }
    else if(user == 3)//for Division
    {
        cout << "Enter a number: ";
        cin >> x;
        cout << "Enter a number: ";
        cin >> y;
        Divide(x,y);

    }
    else if(user == 4)//for Multiplication
    {
        cout << "Enter a number: ";
        cin >> x;
        cout << "Enter a number: ";
        cin >> y;
        Mult(x,y);
    }

    return 0;
}



