#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> divisors;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            
            if ((n / i) != i) {
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int val : divisors) {
        cout << val << " ";
    }
    cout << '\n';
    
    return 0;
}