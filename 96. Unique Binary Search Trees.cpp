class Solution {
public:
    int numTrees(int n) {
        int *res = new int[n+1];
        memset(res,0,sizeof(int)*(n+1));
        res[0] = 1;
        res[1] = 1;
        res[2] = 2;
        for(int i=3;i<=n;i++)
            for(int j=1;j<=i;j++)
                res[i]+=res[j-1]*res[i-j];
        return res[n];
    }
};