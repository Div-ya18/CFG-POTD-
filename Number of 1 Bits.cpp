class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int ans=0;
        while(N>=1){
            ans += N%2;
            N/=2;
        }
        return ans;
    }
};
