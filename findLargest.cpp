#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,7,2,9,12,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i=0; i<=n-1; i++){
        
        if( arr[i] > max ) {
            max = arr[i];
        }
    }

    cout << "The LARGEST number in this array is " << max << endl;
}