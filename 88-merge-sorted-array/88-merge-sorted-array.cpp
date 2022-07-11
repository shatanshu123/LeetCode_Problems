//STRIVER_SDE_SHEET

class Solution {
public:
    void merge(vector<int>& num1, int n, vector<int>& num2, int m) {
        int cur = 0, idx1 = 0, idx2 = 0, len = n + m;
        vector <int> ans(len);
        while(true){
            while(idx1 < n and (idx2 == m or num1[idx1] <= num2[idx2])){
                ans[cur] = num1[idx1];
                idx1 ++;
                cur ++;
            }
            while(idx2 < m and (idx1 == n or num2[idx2] <= num1[idx1])){
                ans[cur] = num2[idx2];
                idx2 ++;
                cur ++;
            }
            if(cur == len) break;
        }
        for(int i=0;i<len;i++) num1[i] = ans[i];
    }
};
