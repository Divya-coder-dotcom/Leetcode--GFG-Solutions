class Solution {
public:
    void duplicateZeros(vector<int>& arr){
        int count = 0;
        for(int &ele:arr) if(ele==0) count++;
        int n = arr.size();
        for(int i=n-1; i>=0; i--){
            if(arr[i]==0) count--;
            int j = i+count;
            if(j<n) arr[j]=arr[i];
            if(arr[i]==0 && j+1<n) arr[j+1]=0;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna