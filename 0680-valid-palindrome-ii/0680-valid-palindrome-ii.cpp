class Solution {
public:
bool palindrome(string s, int st, int e)
{
    while(st<e)
    {
        if(s[st]==s[e])
{
         st++;
         e--;
}
        else 
        {
            return false;
        }

    }

    return true;
}
    bool validPalindrome(string s) {
        
         int n=s.length();
         if(n==1)
         {
            return true;
         }

         
         int start=0;
         int end=n-1;
         while(start<end)
         
         {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else if(s[start]!=s[end])
            {
                return palindrome(s,start,end-1) || palindrome(s,start+1,end);
            }
         }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna