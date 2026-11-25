class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int cnt=0;
        while(low<high)
        {
            if(nums[low]==0 && nums[high]!=0)

            {
                swap(nums[low],nums[high]);
                cnt++;
                low++;
                high--;
            }
            if(nums[low]!=0)
            {
                low++;
            }
            if(nums[high]==0)
            {
                high--;
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna