#include <iostream>
#include <climits>
using namespace std;

void maxSumArray(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start < n; start++){
        for(int end=start; end < n; end++){
            int currSum = 0;
            for (int i = start; i <= end; i++){
                currSum += arr[i];
                maxSum = max(currSum,maxSum);    
                
            }cout << currSum << ",";
        } cout << endl;
    } cout << "The current MAX Sum is " << maxSum << endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxSumArray(arr, n);
}
