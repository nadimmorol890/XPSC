#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "=" << '\n';
        return 0;
    }

    double cnt1 = log(x) * y;
    double cnt2 = log(y) * x;


    if (abs(cnt1 - cnt2) < 1e-8) {
        cout << "=" << '\n';
    }
    else if (cnt1 < cnt2) {
        cout << "<" << '\n';
    }
    else {
        cout << ">" << '\n';
    }
    
    return 0;
}