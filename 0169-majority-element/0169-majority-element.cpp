class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0;
        int cnt = 0;

        for (int x : nums) {
            if (cnt == 0)
                ele = x;

            if (x == ele)
                cnt++;
            else
                cnt--;
        }

        return ele;
    }
};