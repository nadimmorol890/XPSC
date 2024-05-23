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
        int n; 
        cin >> n;
        
        vector <int> freq(n + 1, 0);
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            freq[x]++;
        }
        
        int c = 0;

        for (int i = 0; i <= n; i++) {
            c += (freq[i] == 1);

            if ((c == 2) || (freq[i] == 0)) {
                cout << i << '\n';
                break;
            }
        }
    }
    
    return 0;
}