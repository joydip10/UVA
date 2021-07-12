#include <iostream>
using namespace std;

int main ()
{
    int a,b,c,d;
    while (cin >> a >> b >> c >> d)
    {
        int e = 1080;
        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;
        else
        {
            if (a >= b)
                e = e + (a-b)*9;
            else
                e = e + ((40-b)+a)*9;
            if (b >= c)
                e = e + ((40-b)+c)*9;
            else
                e = e + (c-b)*9;
            if (c >= d)
                e = e + (c-d)*9;
            else
                e = e + ((40-d)+c)*9;
        }
        cout << e << endl;
    }
    return 0;
}
