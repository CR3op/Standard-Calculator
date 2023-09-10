#include <iostream>

using namespace std;

int Add(int x, int y);
int Sub(int x, int y);
void Divide(double x, double y);
void Mult(double x, double y);

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

int Add(int x, int y)
{
    cout << "The total value is: ";
    
    return x + y;
}

int Sub(int x, int y)
{
    cout << "The total value is: ";
    
    return x - y;
}

void Divide(double x, double y)
{
    double div = x/y;
    cout << "The total value is: " << div;
    
}

void Mult(double x, double y)
{
    double m = x * y;
    cout << "The total value is: " << m;

}



