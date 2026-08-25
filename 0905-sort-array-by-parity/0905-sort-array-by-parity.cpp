class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        while(l<h)
        {
            while(l<h && nums[l]%2==0)
            {
                l++;
            }
            while(l<h && nums[h]%2!=0)
            {
                h--;
            }
            swap(nums[l],nums[h]);
            l++;
            h--;
            
            
        }
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna