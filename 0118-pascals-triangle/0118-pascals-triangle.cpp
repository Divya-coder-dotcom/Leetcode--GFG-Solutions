class Solution {
public:
vector<int> row(int r)
{
    long long anss=1;
    vector<int> ans;
    ans.push_back(1);
    for(int i=1;i<r;i++)
    {
        anss=anss*(r-i);
        anss=anss/i;
        ans.push_back(anss);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> triangle;
        vector<int> temp;
        for(int i=1;i<=numRows;i++)
        {
            temp=row(i);
            triangle.push_back(temp);
        }
        return triangle;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna