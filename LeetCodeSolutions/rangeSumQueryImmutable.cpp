class NumArray {
public:
vector<int> a;
    NumArray(vector<int>& nums) {
        a = nums;
    }
    
    int sumRange(int left, int right) {
        int answer = 0;
        for(int i = left; i <= right; i++)
        {
            answer+=a[i];
        }
        return answer;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */