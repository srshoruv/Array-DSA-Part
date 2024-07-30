#include <iostream>
using namespace std;

void printArr(int nums[], int n){
    for (int i=0; i<=n-1; i++){
        cout << nums[i] << ",";
    } cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n-1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    printArr(arr, n);

}