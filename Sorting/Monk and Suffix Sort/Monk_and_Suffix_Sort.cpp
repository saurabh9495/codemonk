#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;
int main()
{
    int k;
    string str;
    cin >> str >> k;
    vector<string> vect;
    for (lli i = 0; i < str.length(); i++)
    {
        string val = str.substr(i);
        vect.push_back(val);
    }
    sort(vect.begin(), vect.end());
    cout << vect[k - 1];
    return 0;
}