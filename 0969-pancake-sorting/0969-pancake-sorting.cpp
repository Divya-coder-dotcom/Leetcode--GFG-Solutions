class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) 
    {
        vector<int>ans;
        int r = arr.size()-1;
        while(r>0)
        {
            int maxi = 0;
            for(int i=0;i<=r;i++)
            {
                if(arr[maxi]<arr[i]) maxi = i;
            }
            if(maxi!=r)
            { 
                ans.push_back(maxi+1);
                reverse(arr.begin(),arr.begin()+maxi+1);
                ans.push_back(r+1);
                reverse(arr.begin(),arr.begin()+r+1);
            }
            r--;
        }
        return ans;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna