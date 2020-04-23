#include <iostream>

using namespace std;

int main (void)
{
    short o = 0;
    short i = 0;
    bool x = 0;
    short z =50;

    while (i <= 3000)
    {
        o++;
        i++;
        cout << "FUCK YOU!\n";
        if (o == z)
        {
            if(x == 1) x = 0;
            else x = 1;
            o = 0;
        }
        if (x)
        {
            for (short a = o;a >= 0;)
            {
                cout.put(' ');
                a--;
            }
        }
        else 
        {
            for (short a = o;a <= z;)
            {
                cout.put(' ');
                a++;
            }
        }
    }
    return 0;
}
