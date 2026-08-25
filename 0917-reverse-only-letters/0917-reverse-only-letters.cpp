class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str=s;
        int n=s.length();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(isalpha(str[l]) && isalpha(str[r]))
            {
                swap(str[l],str[r]);
                l++;
                r--;
            }
            else if(!isalpha(str[l]))
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return str;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna