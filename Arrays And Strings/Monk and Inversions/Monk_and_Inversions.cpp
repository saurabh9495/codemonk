#include <iostream>
using namespace std;
int arr[21][21];

int main()
{
    int c, t, n, i, j, k, cnt = 0, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c = 0;
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                cin >> arr[i][j];
            }
        }

        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                for (x = i; x < n; ++x)
                {
                    for (y = j; y < n; ++y)
                    {
                        if (arr[x][y] < arr[i][j])
                            c++;
                    }
                }
            }
        }

        cout << c << endl;
    }

    return 0;
}