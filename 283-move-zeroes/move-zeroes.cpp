class Solution {
public:
   void moveZeroes(vector<int>& nums) {
	int pushIndex = 0, zeroCounter = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			nums[pushIndex++] = nums[i];
		}
		else {
			zeroCounter++;
		}
	}
	for (int i = nums.size() - 1; i >= 0; i--) {
		zeroCounter--;
		if (zeroCounter < 0) {
			break;
		}
		nums[i] = 0;
		
	}

	for (int i = 0; i < nums.size(); i++) {
		cout << nums[i] << " ";
	}
}
};