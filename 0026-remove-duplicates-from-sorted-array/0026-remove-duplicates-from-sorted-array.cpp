class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int i=1;
        int curr=1;
        while(i<n)
        {
            if(nums[i-1]==nums[i])
            {
            i++;
            }

            else
            {
                nums[curr++]=nums[i++];
            }
        }
        return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna