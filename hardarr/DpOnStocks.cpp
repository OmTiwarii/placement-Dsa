#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int MaxProfit( vector<int> arr){
    int mini =arr[0];
    int profit =0;
    for(int i=1;i<arr.size();i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(mini ,arr[i]);

    }

    return profit;
}
int main(){
// vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(4);
    cout<<MaxProfit(arr);
    return 0;


}