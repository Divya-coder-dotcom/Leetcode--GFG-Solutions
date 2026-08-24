class Solution {
public:

 string num_to_string(int n){
        string num="";
        while(n>=1){
            int digit=n%10;
            num=char(digit+'0')+num;
            n/=10;
        }
        return num;
    }
    int string_to_num(string s){
        int n=s.size();
        int digit=0;
        for(int i=0;i<=n-1;i++){
            int last_digit=int(s[i]-'0');
            if((digit)>(INT_MAX-last_digit)/10) return -1;
            digit=(digit*10)+last_digit;
        }
        return digit;
    }

    int nextGreaterElement(int n) {
        string str=num_to_string(n);
        int len=str.length();
        int i=len-2;
        while(i>=0 && str[i]>=str[i+1])
        {
            i--;
        }
        if(i<0)
        {
            return -1;
        }
        int j=len-1;
        if(i>=0){
        while(j>i && str[j]<=str[i])
        {
            j--;
        }
        swap(str[i],str[j]);
        }
        reverse(str.begin()+i+1,str.end());
        int ans=string_to_num(str);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna