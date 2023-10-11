#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double R, x, xp, xk, dx, y;
    
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while(x <= xk) {
        if(x <= -6 * R) {
        y = 0;
    }
    else {
        if(x > -6 * R && x <= -6) {
            y = -sqrt(pow(R, 2) - pow(x, 2) - 12 * x - 36);
        }
        else{
            if(x > -6 && x <= -R) {
                y = (R * R + R * x) / (-R + 6);
            }
            else{
                if(x > -R && x <= 0) {
                    y = sqrt(R * R - x * x);
                }
                else {
                    if(x > 0 && x <= 3) {
                        y = R - (R * x / 3.0);
                    }
                    else {
                        y = (R * x - 3 * R) / 6.0;
                    }
                }
            }
        }
    }

        cout << "|" << setw(7) << setprecision(2) << x
        << " |" << setw(10) << setprecision(3) << y
        << " |" << endl;

        x += dx;

    }

    cout << "---------------------------" << endl;
    return 0;
}