// Create two classes which stores distance in feet, inches and meter, centimeter format
// respectively. Write a function which compares distance in object of these classes and displays
// the larger one.
#include <iostream>

using namespace std;
class DB;
class DM
{
    float meters, centimeters;

public:
    DM(float m, float c)
    {
        meters = m;
        centimeters = c;
    }
    friend void compares(DM &x, DB &y);
};
class DB
{
    float inch;
    float feet;

public:
    DB(float i, float f)
    {
        inch = i;
        feet = f;
    }

    friend void compares(DM &, DB &);
};
void compares(DM &a, DB &b)
{
    if ((b.feet * 0.0254) < a.meters)
    {
        cout << "Distance in meters and centimers is larger\n";
    }
    else
    {
        cout << "Distance in inches and feet is larger\n";
    }
}
int main()
{
    DM a(2, 3);
    DB b(100, 60);
    compares(a, b);
}
