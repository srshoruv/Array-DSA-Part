#include <iostream>
#include <climits>
using namespace std;

void maxProfit(int *arr, int n) {
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for (int i = 1; i <=n; i++){
        bestBuy[i] = min(arr[i-1], bestBuy[i-1]);
    }
    int profit = 0;
    for (int i = 0; i <= n; i++) {
        int currProfit = arr[i] - bestBuy[i];
        profit = max(profit, currProfit);
    }
    cout << "The MAX Profit is = " << profit << endl;
}

int main(){
    // change array from here
    int prices[] = {5,7,2,1,8,6,3};

    // DO NOT change these lines
    int n = sizeof(prices) / sizeof(prices[0]);
    maxProfit(prices, n);
}