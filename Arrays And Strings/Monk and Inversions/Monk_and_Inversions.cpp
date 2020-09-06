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
        vector<lli> vect;
        lli noe, val = 0;
        cin >> noe;
        for (lli j = 0; j < noe; j++)
        {
            cin >> val;
            vect.push_back(val);
        }
    }
    return 0;
}
