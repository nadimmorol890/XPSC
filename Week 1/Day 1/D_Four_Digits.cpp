#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s = to_string(n);
    
    while(s.size() < 4) {
        s = '0' + s;
    }
    
    cout << s << '\n';

    return 0;
}