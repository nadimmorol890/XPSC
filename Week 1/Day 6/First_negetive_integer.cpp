// Geeks_for_geeks Problem
// Topicwise Problem - 6

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    
    long long l = 0, r = 0;
    
    queue<long long> q;
    vector<long long> result;
    
    while (r < N)
    {
        if(A[r] < 0) {
            q.push(A[r]);
        }
        
        if(r - l + 1 == K) {
            if(q.size() >= 1) {
                result.push_back(q.front());
                
                if(A[l] == q.front()) {
                    q.pop();
                }
            }
            else {
                result.push_back(0);
            }
            l++;
        }
        r++;
    }
    return result;
}