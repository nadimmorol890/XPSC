// Topic wise problem 7
// Geeks for geeks problem

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.length();

        int l = 0, r = 0, cnt = 0, ans = 0;
        map<char, int> freq;
    
        while (r < n) {
            if (freq[s[r]] == 0) {
                cnt++;
            }
    
            freq[s[r]]++;
    
            if (cnt == k) {
                ans = max(ans, r - l + 1);
            }
            else {
                while (cnt > k) {
                    freq[s[l]]--;
                    
                    if (freq[s[l]] == 0) {
                        cnt--;
                    }
                    l++;
                }
            }
            r++;
        }
        
        if (ans == 0) return -1;
        else return ans;
    }
};