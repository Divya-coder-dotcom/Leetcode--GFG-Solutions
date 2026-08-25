class Solution {
public:
    string reverseWords(string s) {
        string str=s;
        int n=s.length();
        int start=0;
        int end=0;
        while(end<n)
        {
            while(end<n && s[end]!=' ')
            {
                end++;
            }

        
        reverse(str.begin()+start,str.begin()+end);
        start=end+1;
        end=start;

        
        }
        return str;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna