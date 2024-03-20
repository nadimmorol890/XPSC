#include<bits/stdc++.h>
using namespace std;

// int search(string pat, string txt)
// {
//     map<char, int> fr1,fr2;
    
//     for(auto x:pat) {
//         fr1[x]++;
//     }
    
//     int ans = 0;
//     int n = txt.size();
//     int m = pat.size();
//     int l = 0, r = 0; 
        
//     while (r < n) {
//         fr2[txt[r]]++;
        
//         if (r-l+1<m) {
//             r++;
//         }
//         else if (r - l + 1 == m) {
//             if (fr1 == fr2) {
//                 ans++;
//             }
            
//             fr2[txt[l]]--;
            
//             if (fr2[txt[l]] == 0) {
//                 fr2.erase(txt[l]);
//             }
//             l++;
//             r++;
//         }
//     }
//     return ans;
// }

int search(string pat, string txt) {
    int n = pat.length();
    int m = txt.length();

    if (n > m) {
        return 0;
    }

    vector<int> patFreq(26, 0), txtFreq(26, 0);

    for (char c : pat) {
        patFreq[c - 'a']++;
    }

    int count = 0;
    int l = 0, r = 0;

    while (r < m) {

        txtFreq[txt[r] - 'a']++;

        if (r - l + 1 == n) {
        
            bool ans = true;
            
            for (int i = 0; i < 26; ++i) {
                if (patFreq[i] != txtFreq[i]) {
                    ans = false;
                    break;
                }
            }
            if (ans) {
                count++;
            }
            
            txtFreq[txt[l] - 'a']--;
            l++;
        }

        r++;
    }

    return count;
}

int main() {
    string txt, pat;
    cin >> txt >> pat;
   
    cout << search(pat, txt) << endl;

    return 0;
}
