class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int low=0;
        int high=n-1;
        int ans=0;
        sort(people.begin(),people.end());
        while(low<=high)
        {
            
             if(people[low]+people[high]>limit)
            {
            
                high--;
            }
            else
            {
        
                low++;
                high--;
            }
            ans++;
            }

        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna