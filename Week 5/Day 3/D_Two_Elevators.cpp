#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int Elevator1 = (a - 1);
        int Elevator2 = abs(b - c) + (c - 1);

        if (Elevator1 < Elevator2)
            cout << 1 << '\n';
        else if (Elevator2 < Elevator1)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
    
    return 0;
}