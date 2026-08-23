class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0 || n<4)
        {
            return {};
        }
        int low;
        int high;
        vector<vector<int>> ans;
        long long sum;
        long long ntarget=target;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {  
             if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1] )
                {
                    continue;
                }
                low=j+1;
                high=n-1;
                while(low<high)
                {
                     sum=(long long)nums[i]+nums[j]+nums[low]+nums[high];
                    if(sum==ntarget)
                    {
                        ans.push_back({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                        while(low<high && nums[low]==nums[low-1])
                        {
                            low++;
                        }
                        while(low<high && nums[high]==nums[high+1])
                        {
                            high--;
                        }
                    }
                    else if(sum>ntarget)
                    {
                        high--;
                    }
                    else
                    {
                        low++;
                    }
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna