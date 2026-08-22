class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0, p=1;
        for(int x=n; x>0; x/=10){
            const int r=x%10;
            s+=r;
            p*=r;
        }
        return n%(s+p)==0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna