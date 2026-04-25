#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int lowerbond(vector<int> arr ,int key){
    int n= arr.size();
     int low =0 ,high =n-1;
     int ans = n;
     while(low<=high){
       int mid =(low+high)/2;
        if(arr[mid]>=key){
            ans=mid;
            high=mid-1;
        }else{
            low =mid+1;
        }
     }
     // time complexity O(log(n))
return ans;
}
// predefined function in c++
// lb = lower_bound(arr.begin(),arr.end(),x) - arr.begin();

int higherBond()(vector<int> arr ,int key){
    int n= arr.size();
     int low =0 ,high =n-1;
     int ans = n;
     while(low<=high){
       int mid =(low+high)/2;
        if(arr[mid]>key){
            ans=mid;
            high=mid-1;
        }else{
            low =mid+1;
        }
     }
     // time complexity O(log(n))
return ans;
    } 
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    // arr.push_back(2);
    // arr.push_back(4);
    int n=arr.size();
    int low =0,high=n-1;
    cout << lowerbond(arr,5)<< endl; 
    return 0;
}