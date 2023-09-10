#include<iostream>

using namespace std;

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
