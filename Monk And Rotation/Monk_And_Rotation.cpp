#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;
int main()
{
    lli testcases;
    cin >> testcases;
    for (lli t = 0; t < testcases; t++)
    {
        lli noe, k, val, p;
        cin >> noe >> k;
        vector<lli> vect;
        for (lli i = 0; i < noe; i++)
        {
            cin >> val;
            vect.push_back(val);
        }
        k %= noe;
        for (lli j = 0; j < noe; j++)
        {
            p = vect[(j + (noe - k)) % noe];
            cout << p << " ";
        }
        cout << "\n";
    }
    return 0;
}