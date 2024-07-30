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
    int revArr[n];

    for (int i = 0; i <= n-1; i++){
        int j = n-1-i;
        revArr[i] = arr[j];
    }

    for (int i=0; i<=n-1; i++){
        arr[i] = revArr[i];
    }

    printArr(arr, n);

}