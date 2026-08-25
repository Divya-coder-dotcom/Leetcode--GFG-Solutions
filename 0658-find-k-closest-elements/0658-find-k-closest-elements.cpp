class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size()-1;
        while(right-left >=k)
        {
            if(x-arr[left] > arr[right] -x)
                left++;
            else
                right--;
        }
        vector<int> ans;
        for(int i = left; i<=right; i++)
            ans.push_back(arr[i]);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna