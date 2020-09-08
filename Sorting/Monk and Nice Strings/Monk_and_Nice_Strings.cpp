#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin >> n;
    vector<string> vect_original;
    vector<string> vect_sorted;
    string val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vect_original.push_back(val);
        vect_sorted.push_back(val);
        sort(vect_sorted.begin(), vect_sorted.end());
        auto it = find(vect_sorted.begin(), vect_sorted.end(), val);
        cout << it - vect_sorted.begin() << endl;
    }
    return 0;
}