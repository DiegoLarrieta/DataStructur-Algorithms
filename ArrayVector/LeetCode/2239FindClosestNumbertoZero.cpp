/*
Given an integer array nums of size n, return the number with the value closest to 0 in nums.
If there are multiple answers, return the number with the largest value.

Example 1:

Input: nums = [-4,-2,1,4,8]
Output: 1
Explanation:
The distance from -4 to 0 is |-4| = 4.
The distance from -2 to 0 is |-2| = 2.
The distance from 1 to 0 is |1| = 1.
The distance from 4 to 0 is |4| = 4.
The distance from 8 to 0 is |8| = 8.
Thus, the closest number to 0 in the array is 1.

Example 2:

Input: nums = [2,-1,1]
Output: 1
Explanation: 1 and -1 are both the closest numbers to 0, so 1 being larger is returned.
 

*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//O(Log n)

int findClosestNumber(vector<int> &nums){
  int closest = nums[0];

  for(int num : nums){
    if(abs(num) < abs(closest) || (abs(num) == abs(closest) && num > closest)){
      closest = num;
    }
  }
  return closest;
}

int main(){
  vector<int>nums;
  int n , num;

  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Enter the numbers: ";
  for (int i = 0; i < n; i++) {
      cin >> num;
      nums.push_back(num);
  }
  int result = findClosestNumber(nums);
  cout << "The number closest to 0 is: " << result << endl;
    
  return 0;

}

/*
Code for leetcode 

#include <iostream>
#include <vector>
#include <cmath>  // for std::abs

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];  // Initialize with the first number in the array ej -4
        
        for (int num : nums) {
            // Check if the absolute value of current num is smaller, or if it's the same but num is larger
            if (abs(num) < abs(closest) || (abs(num) == abs(closest) && num > closest)) { 
                closest = num;
            }
        }
        
        return closest;
    }
};
*/