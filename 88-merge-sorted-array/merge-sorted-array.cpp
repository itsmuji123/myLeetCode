
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int num1 = -1;
        int num2 = -1;
        int j = 0;
        int i1 = 0;
        int k = 0;
        vector<int> numm(m);
        for (int i = 0; i < m; i++) {
            numm[i] = nums1[i];
            //cout << numm[i] << endl;
        }
        if (nums2.size() == 0) {
            return;
        }
        else if (numm.size() == 0) {
            nums1 = nums2;
            return;
        }
        
        for (int i = 0; i < m + n; i++) {

            if (i1 > m-1) {
                while (j <= n - 1) {
                    nums1[k] = nums2[j];
                    k++;
                    j++;
                    i++;
                }
                return;
           }
            else if (j > n-1) {
                while (i1 <= m - 1) {
                    nums1[k] = numm[i1];
                    k++;
                    i1++;
                    i++;
                }
                return;
            }

            int num1 = numm[i1];
            int num2 = nums2[j];

            if (num1 < num2) {
                nums1[k] = num1;
                i1++;
                k++;
            }
            else if (num2 < num1) {
                nums1[k] = num2;
                j++;
                k++;
            }
            else {
                nums1[k] = num1;
                i1++;
                k++;
                nums1[k] = num2;
                j++;
                k++;
                i++;
            }
        }
    }
};