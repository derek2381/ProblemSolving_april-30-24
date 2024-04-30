// problem link
// https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk1, stk2;
        vector<int> res;


        for(int i : nums2){
            stk1.push(i);
        }
        int max;
        for(int i : nums1){
            max = -1;
            while(stk1.top() != i){
                if(stk1.top() > i){
                    max = stk1.top();
                }
                stk2.push(stk1.top());
                stk1.pop();
            }


            while(stk2.size() > 0){
                stk1.push(stk2.top());
                stk2.pop();
            }

            if(max == -1){
                res.push_back(-1);
            }else{
                res.push_back(max);
            }
        }
        return res;
    }
};
