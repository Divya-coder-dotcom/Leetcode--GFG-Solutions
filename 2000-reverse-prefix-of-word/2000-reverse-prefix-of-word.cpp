class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int i=0;
        string ans=word;
        while(i<n && word[i]!=ch)
        {
            i++;
        }
        if(i==n)
        {
            return ans;
        }
        i++;
        reverse(ans.begin(),ans.begin()+i);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna