class Solution {
public:
    vector<int> diStringMatch(string s) {
        int less=0;
        int n=s.length();
        int more=n;
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                ans.push_back(less);
                less++;
            }

            else
            {
                ans.push_back(more);
                more--;
            }
        }
        ans.push_back(more);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna