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
        lli noe, val;
        vector<lli> vect;
        for (lli v = 0; v < noe; v++)
        {
            cin >> val;
            vect.push_back(val);
        }
        sort(vect.begin(), vect.end());
        lli ans = INT_MAX;
        for (lli i = 0; i < noe - 1; i++)
        {
            ans = min(ans, vect[i] ^ vect[i + 1]);
        }
        cout << ans << "\n";
    }
    return 0;
}