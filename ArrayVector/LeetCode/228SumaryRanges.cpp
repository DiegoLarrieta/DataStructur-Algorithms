#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int i = 0;

        while (i < nums.size()){
            int start = nums[i];

            while ((i < nums.size()-1) && (nums[i] + 1 == nums [i+1])){
                i += 1;
            }

            if (start != nums[i]){
                ans.push_back(to_string(start) + "->" + to_string(nums[i]));
            }
            else{
                ans.push_back(to_string(nums[i]));
            }
            i += 1;
        }
        return ans;
    }
};