#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y, b;
    int array[100][100];
    cout << "Siniri girin:";
    cin >> b;
    for (x = 0; x < b + 1; x = x + 2)
    {
        for (y = 0; y < b + 1; y++)
        {
            if (y < b)
            {
                cout << "(" << x << "," << y << ")"
                     << " ";
            }
            else
            {
                cout << "(" << x << "," << y << ")"
                     << " ";
                for (y; y > -1; y = y - 1)
                {
                    cout << "(" << x + 1 << "," << y << ")"
                         << " ";
                }
                break;
            }
        }
    }

    return 0;
}
