#include <iostream>
#include <vector>
#include <limits>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int size1 = nums1.size();
    int size2 = nums2.size();
    int i = 0; 
    int j = 0;
    int m1 = 0;
    int m2  = 0;
    while (i + j <= (size1 + size2)/2) {
        m2 = m1;
        if (i < size1 and j < size2) {
            if (nums1[i] < nums2[j]) {
                m1 = nums1[i];
                ++i;
            }
            else {
                m1 = nums2[j];
                ++j;
            }
        }
        else if (i < size1) m1 = nums1[i++];
        else if (j < size2) m1 = nums2[j++];       
    }

    if ((size1+size2)%2 == 0)
        return (m1 + m2)/2.0;
    else 
        return m1;
}



int main() {
 vector<int> v1;
 v1.push_back(1);
 //v1.push_back(2);
 v1.push_back(3);
 vector<int> v2;
 v2.push_back(2);
 //v2.push_back(5);
 std::vector<int> nums1 = {2, 2, 4, 4};
 std::vector<int> nums2 = {2, 2, 4, 4};

 cout << findMedianSortedArrays(nums1, nums2) << endl;
}