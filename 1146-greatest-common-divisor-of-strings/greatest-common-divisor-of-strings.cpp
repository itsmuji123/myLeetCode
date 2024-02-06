class Solution {
public:
   // Function to return gcd of a and b 
int gcd(int a, int b)
{
	// Find Minimum of a and b 
	int result = min(a, b);
	while (result > 0) {
		if (a % result == 0 && b % result == 0) {
			break;
		}
		result--;
	}

	// Return gcd of a and b 
	return result;
}
string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return ""; // If strings can't be divided evenly, return empty string
    }
    // If they can be divided evenly, return substring up to the gcd of their lengths
    return str1.substr(0, gcd(str1.size(), str2.size()));
}

};