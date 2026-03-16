#include <iostream>
#include <vector>
#include <set>
#include <bit/stdc++.h>
using namespace std;
int LongestSubarrayofk(vector <int> arr,int k){
    int length =0;
    for(int i=0;i<arr.size();i++){
        int s =0;
    for(int j=i;j<arr.size();j++){
        s+=arr[j];
        if(s==k){
            length = max(length,(j-i)+1);
        }
    }
    }
    return length;
}
int BetterLongestSubarrayofk(vector <int> arr,int k){
 map<long long ,int> preSumMap;
 long long sum ;
 int maxLen =0;
 for(int i=0;i<arr.size())

return maxLen;
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(40);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(4);
    cout << LongestSubarrayofk(arr,6) << endl; 
    return 0;
}