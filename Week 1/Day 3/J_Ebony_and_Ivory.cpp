#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= c; j++) {
            if ((a * i) + (b * j) == c) {
                cout << "Yes" << '\n';
                return 0;
            }
        }
    }
    
    cout << "No" << '\n';

    return 0;
}