#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y, b;
    int map[100][100] = {false};
    cout << "Siniri girin:";
    cin >> b;
    for (x = 0; x < b + 1; x = x + 2)
    {
        for (y = 0; y < b + 1; y++)
        {
            if (y < b)
            {
                if (map[x][y] == 0)
                {
                    map[x][y] = 1;
                    cout << "(" << x << "," << y << ")"
                         << " ";
                }
            }
            else
            {
                if (y == b and map[x][y] == 0)
                {
                    map[x][y] = 1;
                    cout << "(" << x << "," << y << ")"
                         << " ";
                    for (y; y > -1; y = y - 1)
                    {
                        if (map[x + 1][y] == 0 and x < b)
                        {
                            map[x + 1][y] = 1;
                            cout << "(" << x + 1 << "," << y << ")"
                                 << " ";
                        }
                    }
                }
                break;
            }
        }
    }

    return 0;
}
