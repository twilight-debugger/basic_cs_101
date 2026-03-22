#include<iostream>
#include<vector>
using namespace std;

// Function to merge nums2 into nums1
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    
    // Pointer to last position in nums1 (including extra space)
    int last = m + n - 1;

    // Merge from the back while both arrays have elements
    while(m > 0 && n > 0){
        if(nums1[m - 1] > nums2[n - 1]){
            nums1[last] = nums1[m - 1];  // place larger element from nums1
            m--;                         // move nums1 pointer
        }else{
            nums1[last] = nums2[n - 1];  // place element from nums2
            n--;                         // move nums2 pointer
        }
        last--;  // move position pointer (IMPORTANT)
    }

    // If nums2 still has elements left, copy them
    while(n > 0){
        nums1[last] = nums2[n - 1];
        last--;
        n--;
    }
}

// Helper function to print array
void print(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    //  Test Case
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // size = m + n
    vector<int> nums2 = {2, 5, 6};

    int m = 3;  // valid elements in nums1
    int n = 3;  // elements in nums2

    cout << "Before merge: ";
    print(nums1);

    merge(nums1, m, nums2, n);

    cout << "After merge: ";
    print(nums1);

    return 0;
}