#include <iostream>
#include <vector>
#include <set>
#include <map>
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
int BetterLongestSubarrayofk(vector <int> arr,long long  k){
 map<long long ,int> preSumMap;
 long long sum ;
 int maxLen =0;
 for(int i=0;i<arr.size();i++){
    sum+= arr[i];
    if(sum ==k){
        maxLen = max(maxLen,i+1);
    }
    long long rem = sum-k;
    if(preSumMap.find(rem)!=preSumMap.end()){
        int len = i -preSumMap[rem];
        maxLen =max(maxLen,len);
    }
    if(preSumMap.find(sum) == preSumMap.end()){
        preSumMap[sum] = i;
    }
 }

return maxLen;
}
int optimalLongestSubarrayofk(vector <int> arr,long long  k){
    int left =0 ,right =0;
    long long sum =arr[0];
    int n= arr.size();
    int MaxLen =0;
    while(right<n){
        right ++;
        if(right<n){
            sum +=arr[right];
        }
        if(sum == k ){
            MaxLen = max(MaxLen,(right-left )+1);
        }
        while(left <= right && sum>k){
            sum -= arr[left];
            left++;
        }
    }
return MaxLen;
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
    cout <<optimalLongestSubarrayofk(arr,6) << endl; 
    return 0;
}