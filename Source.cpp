// Lab_03_3.cpp 
// < Ратушна Соломія  > 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 0.1 


#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x;
    double R;
    double y;

    cout << "R=";
    cin >> R;
    cout << "x=";
    cin >> x;

    if (x <= -8)
        y = -R;
    else
        if (-8 < x && x <= -R)
            y = (R * R + x * R) / -R + 8;
        else
            if (-R < x && x <= 0)
                y = sqrt(R * R - x * x);
            else
                if (0 < x && x <= R)
                    y = sqrt(R * R - x * x);
                else
                    if (R < x && x < 5)
                        y = (2 * x - 2 * R) / 5 - R;
                    else
                     
                            y = 3;
    cout << endl;
    cout << "y=" << y << endl;

    system("pause");
    cin.get();
    return 0;
}