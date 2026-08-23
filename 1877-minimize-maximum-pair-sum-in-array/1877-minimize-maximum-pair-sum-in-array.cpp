class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n%2!=0 || n==1)
        {
            return 0;
        }
        int low=0;
        int high=n-1;
        int maxi=0;
        while(low<high)
        {
            maxi=max(nums[low]+nums[high],maxi);
            low++;
            high--;
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna