class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int h=n-1;
        vector<int> ans;
        while (l<h)
        {
            if(numbers[l]+numbers[h]==target)
            {
                ans.push_back(l+1);
                ans.push_back(h+1);
                break;
            }
            else if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna