class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        int ptr1 = 0;
        int ptr2 = 0;
        int n = s.size();
        while (ptr1 < n && s[ptr1] != c)
            ptr1++;
        int idx = 0;
        for (; idx <= ptr1; idx++)
            ans.push_back(abs(idx - ptr1));

        while (ptr2 < n) {
            while (ptr1 < n && s[ptr1] != c)
                ptr1++;
            ptr2 = ptr1 + 1;
            while (ptr2 < n && s[ptr2] != c)
                ptr2++;

            while (idx < n && idx <= ptr2) {
                int mn = min(abs(idx - ptr1), abs(idx - ptr2));
                if (ptr2 < n)
                    ans.push_back(mn);
                else
                    ans.push_back(abs(idx - ptr1));
                idx++;
            }
            ptr1 = ptr2;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna