class Solution {
public:
    int minimumSum(int n, int k) {
        int ans = 0;
        unordered_set<int> st;
        int i = 1;  //start from 1
        while (n) {
        if (st.find(i) == st.end()) { //if its ok to use this element i
            st.insert(k - i);          //mark k-i as cannot use in future
            ans += i;                 
             n--;
            }
         i++;
        }
         return ans;
     }
};