class Solution {
public:


    void perm( vector<vector<int>> &ans , vector<int> &nums , int idx ){

        if( idx == nums.size() ){

            ans.push_back(nums);               

            return;
        }


        for( int i = idx ; i < nums.size() ; i++ ){

            swap( nums[i] , nums[idx] );
            perm( ans , nums , idx+1 );
            swap( nums[i] , nums[idx] );
          }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        int idx = 0;


        perm( ans , nums , idx );

         return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna