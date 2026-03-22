#include<iostream>
#include<vector>
using namespace std;

// Function to remove duplicates from a sorted array
// Returns the number of unique elements
int removeDuplicate(vector<int>& nums){
    
    int n = nums.size();
    
    // j will point to position where next unique element should go
    int j = 1;

    // Start from i = 1 (because we compare with previous element)
    for(int i = 1; i < n; i++){
        
        // If current element is different from previous
        if(nums[i] != nums[i - 1]){
            nums[j] = nums[i];  // place unique element
            j++;                // move pointer
        }
    }

    return j;  // number of unique elements
}

// Function to print first k elements
void print(vector<int>& nums, int k){
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    
    //  Test Case
    vector<int> nums = {1,1,2,2,3,3,4,4,5};

    cout << "Original array: ";
    print(nums, nums.size());

    int k = removeDuplicate(nums);

    cout << "After removing duplicates: ";
    print(nums, k);

    cout << "Number of unique elements = " << k << endl;

    return 0;
}