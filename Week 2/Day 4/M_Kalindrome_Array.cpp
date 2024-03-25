#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(vector<int> a) {
    bool palindrome = true;

    int i = 0, j = a.size() - 1;

    while (i < j) {
        if (a[i] != a[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    return palindrome;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (check_palindrome(a)) {
            cout << "YES" << '\n';
        }
        else {
            int i = 0, j = n-1, x, y;
            
            while (i < j) {
                if (a[i] != a[j]) {
                    x = a[i];
                    y = a[j];
                    break;
                }
                i++;
                j--;
            }

            vector<int> v1, v2;
            for (int i = 0; i < n; i++) {
                if (a[i] != x) {
                    v1.push_back(a[i]);
                }
                if (a[i] != y) {
                    v2.push_back(a[i]);
                }
            }

            if (check_palindrome(v1) || check_palindrome(v2)) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}