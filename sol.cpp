#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, s2;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s1 = s[i] + s1;
        else s2 = s[i] + s2;
    }
    cout << s1 << s2;
    return 0;
}
