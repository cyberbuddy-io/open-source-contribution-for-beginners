#include <iostream>
using namespace std;

class triangle
{
    float a, b, c;
    float d, e;

public:
    void area()
    {
        float u, v;
        d = u, e = v;
        cout << "enter the height of triangle"
             << " " << endl;
        cin >> d;
        cout << "enter the base of the triangle"
             << " " << endl;
        cin >> e;
        cout << "Area of triangle is :-> " << (d + e) / 2 << endl;
    }
    void perimeter()
    {
        float x, y, z;
        a = x, b = y, c = z;
        cout << "enter first side of triangle: "
             << " " << endl;
        cin >> a;
        cout << "enter second side of triangle: "
             << " " << endl;
        cin >> b;
        cout << "enter third side of triangle: "
             << " " << endl;
        cin >> c;
        cout << "Perimeter of a triangle is :-> " << a + b + c << endl;
    }
};
int main()
{
    triangle t;
    t.area();
    t.perimeter();
    return 0;
}