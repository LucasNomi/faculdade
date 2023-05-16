#include <iostream>
#include <cmath>
using namespace std;

float Dist(float, float, float, float);

int main()
{
    float x1, x2, y1, y2;

    cout << "X1: ";
    cin >> x1;

    cout << "Y1: ";
    cin >> y1;

    cout << "X2: ";
    cin >> x2;

    cout << "Y2: ";
    cin >> y2;

    cout << endl;

    cout << Dist(x1, x2, y1, y2);

    return 0;
}

float Dist(float x1, float x2, float y1, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}