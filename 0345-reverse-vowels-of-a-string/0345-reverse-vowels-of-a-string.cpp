class Solution {
public:
  bool isvowel(char c)
  {
    if(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return true;
    }
    else 
    {
        return false;
    }
  }
    string reverseVowels(string s) {
        int n=s.length();
        int l=0;
        int r=n-1;
        string temp=s;
        while(l<r)
        {
          if(isvowel(s[l]) && isvowel(s[r]))
          {
            swap(temp[l],temp[r]);
            l++;
            r--;
          }
          else if(isvowel(s[l]))
          {
            r--;
          }
          else
          {
            l++;
          }
        }
        return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna