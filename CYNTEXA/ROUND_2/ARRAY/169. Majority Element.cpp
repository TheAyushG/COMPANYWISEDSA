--------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)
--------------------------------------------

class Solution {
public:
    int majorityElement(vector<int>& nums) {

    int n = nums.size();

    int count = 1;
    int maj = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i] == maj){
            count++;
        }

        else if(nums[i] != maj){
            count--;
        }

        if(count == 0){
            maj = nums[i];
            count = 1;
        }
    }

        return maj;
    }
};
