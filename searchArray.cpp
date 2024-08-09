#include <iostream>
using namespace std;

int search(int *nums, int n, int key){
    int start = 0;
    int end = n-1;

    while ( start <= end ) {

    int mid = (start + end) / 2;

    if (nums[mid] == key) {
        return mid;
    }

    if(nums[start] <= nums[mid] ){
        if (nums[start] <= key && key < nums[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    } else {
       if (nums[mid] < key && key <= nums[end]) {
        start = mid + 1;
       } else {
        end = mid -1;
       }
    }
    
}
    return -1;
}

int main(){
    int nums [] = {4,5,6,7,0,1,2,3};
    int n = sizeof(nums)/sizeof(int);

    cout << search(nums, n, 5);
    
}