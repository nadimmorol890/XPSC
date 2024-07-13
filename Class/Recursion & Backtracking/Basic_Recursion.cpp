#include<bits/stdc++.h>
#define ll long long
using namespace std;

void print (int n) {
    if (n == 0) {
        return;
    }
    print (n - 1);
    cout << n << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    print (n);
    
    return 0;
}