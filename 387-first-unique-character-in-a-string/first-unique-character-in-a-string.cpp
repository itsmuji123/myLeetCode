class Solution {
public:
    int firstUniqChar(string s) {
	unordered_map<char, int> mapCounter; // to count each char
	long long i = 0;
	for (char c : s) {
		if (mapCounter.find(c) != mapCounter.end()) {
			mapCounter[c]++;
		}
		else {
			mapCounter[c] = 1;
		}
	}

	long long j = 0;
	for (char c : s) {
		if (mapCounter[c] <= 1) {
			cout << j;
			return j;
		}
		j++;
	}
	return -1;
}
};