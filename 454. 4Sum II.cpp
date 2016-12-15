class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> m;
        int res;
        for(int a:A)
            for(int b:B)
                m[a+b]++;
        for(int c:C)
            for(int d:D)
                res += m[-(c+d)];
        return res;
    }
};
