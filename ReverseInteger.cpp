class Solution {
public:
    int reverse(int x) {
        
        // converting the number to string (in reverse order) for better accessility
        string digit = "";
        while(x != 0) {
            digit += char(x % 10 + 48);
            x = x / 10;
        }
        
        long int ans = 0;
        int po = 0;
        // converting the string to number back
        for(int i=digit.length()-1;i>=0;i--) {
            ans += ((digit[i] - 48) * pow(10, po));
            // if the ans goes less than INT_MIN or greater then INT_MAX return 0 else return the reverse ans
            if(ans > INT_MAX || ans < INT_MIN ) return 0;
            po++;
        }
        
        return ans;
    }
};
