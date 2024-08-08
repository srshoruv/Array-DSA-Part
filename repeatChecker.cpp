#include <iostream>
using namespace std;

bool checker(int *nums, int n){
    bool isRepeat = false;

    for (int i = 0; i < n; i++){
        for (int j=0; j<n; j++){

            if (nums[i]==nums[j] && i != j){
                isRepeat = true;
            }
    }
        
    } return isRepeat;
   
}

int main(){
    int nums[] = {1,3,4,6};
    int n = sizeof(nums) / sizeof(int);

    cout << checker(nums, n);
}