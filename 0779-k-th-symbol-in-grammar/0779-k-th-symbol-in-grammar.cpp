class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1)
        {
            return 0;
        }
        int mid=pow(2,n-1)/2;
        if(mid>=k)
        {
            return kthGrammar(n-1,k);
        }
        else
        {
            return !kthGrammar(n-1,k-mid);
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna