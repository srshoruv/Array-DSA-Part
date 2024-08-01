#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    int start = 0;
    int end = n -1;

    while (start <= end) {
        int mid = (start + end) / 2;
        // writing this code in
        if (arr[mid] == key) 
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << search(arr, n, 19);

}