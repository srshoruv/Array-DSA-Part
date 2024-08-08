#include <iostream>
using namespace std;

void trappedWater(int *heights, int n) {
    int leftMax[20000], rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];
    int trapped = 0;

    for (int i = 1; i < n; i++ ) {
        leftMax[i] = max(heights[i-1], leftMax[i-1]);
    }

    for (int i = n-2; i >= 0; i--){
        rightMax[i] = max(heights[i+1], rightMax[i+1]);
    }

    for (int i=0; i<n; i++){
        int currTrap = min(leftMax[i], rightMax[i]) - heights[i];
        if (currTrap > 0){
            trapped += currTrap;
        }
    }

    cout << "The trapped water is = " << trapped << endl;
}

int main(){
    int heights[] = {4,2,0,6,3,2,5};
    int n = sizeof(heights) / sizeof(heights[0]);

    trappedWater(heights, n);
}