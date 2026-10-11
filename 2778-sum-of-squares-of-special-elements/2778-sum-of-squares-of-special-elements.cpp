class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sqSum = 0;
        for(int i=1;i<=nums.size();i++){
            if(nums.size()%i==0){
                sqSum+=nums[i-1]*nums[i-1];
            }
        }
        return sqSum;
    }
};