#include <iostream>
using namespace std;

int main(){
    int key;
    int arr[] = {1,2,3,4,5,6,7,8,10,11,12,13,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The current array is ";
    for (int i=0; i<=n-1; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    
    cout << "Please input a KEY to search: ";
    cin >> key;
    
    
    for (int i = 0; i <= n; i++){
        if (arr[i] == key) {
            cout << "The index of the Key " << " is " << i << endl;
            break;
        }
    }
}