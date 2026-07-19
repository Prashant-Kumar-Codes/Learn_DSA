#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// subarray is a countinuous part of an array
// total number of subarray in an array = n*(n+1)/2

// find all subarrays
void subarray(vector<int> nums){
    int n = nums.size();

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                cout << nums[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// find maximun subarray sum: Method 1
// time complexity: O(n^3)
int subArrSum1(vector<int> nums){
    int n = nums.size();
    int max_sum = INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sub_arr_sum = 0;
            for(int i=start; i<=end; i++){
                sub_arr_sum += nums[i];
            }
            max_sum = max(max_sum, sub_arr_sum);
        }
    }
    cout << "Successfully found the maximum sum of subarray" << endl;

    return max_sum;
}


// find maximun subarray sum: Method 2 - by BruteFore 
// time complexity: O(n^2)
int subArrSum2(vector<int> nums){
    int n = nums.size();
    int max_sum = INT_MIN;

    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n; end++){
            currSum += nums[end];
            max_sum = max(currSum, max_sum);
        }
    }
    cout << "Successfully found the maximum sum of subarray" << endl;

    return max_sum;
}

// find maximun subarray sum: Method 3 - by Kadane's Algorithm
// Most Optimised approach 
// time complexity: O(n^2)
int kadane(vector<int> nums){
    int max_sum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<nums.size(); i++){
        currSum += nums[i];
        max_sum = max(max_sum, currSum);

        if(currSum<0){currSum=0;}
    }
    cout << "Successfully found the maximum sum of subarray" << endl;
    return max_sum;
}


int main(){
    vector<int> nums = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
    
    // call subarray function
    subarray(nums);


    // call subArrSum1 function
    cout << "\tMaximum subarray sum (sumArrSum1) with time complexity O(n^3) is: " << 
    subArrSum1(nums) << endl << endl;

    // call subArrSum2 function
    cout << "\tMaximum subarray sum (sumArrSum2) with time complexity O(n^2) is: " << 
    subArrSum2(nums) << endl << endl;

    // call kadane function
    cout << "\tMaximum subarray sum (kadane) with time complexity O(n) is: " << 
    kadane(nums) << endl;

    cout << INT8_MIN << endl;
    cout << INT_MIN << endl;

    cout << endl << "Successful run\n0 code out"; return 0;
}