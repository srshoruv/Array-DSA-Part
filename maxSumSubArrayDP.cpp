#include <iostream>
#include <climits>
using namespace std;

void printSubArraySum(int *arr, int n){
    int currSum =0;
    int maxSum = INT_MIN;
    for (int i=0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0) {
            currSum = 0;
        }
    } cout << "The MAX sum is: " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubArraySum(arr,n);
}