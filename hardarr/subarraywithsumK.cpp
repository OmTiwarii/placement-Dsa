#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int subaraaysum(vector<int> &arr,int k){
    int count =0;
  for(int i =0;i<arr.size();i++){
    int sum =0;
    for(int j=i;j<arr.size();j++){
        sum =sum+arr[j];

        if(sum==k){
            count++;
        }
    }
  }
  return count;
}
int OPsubaraaysum(vector<int> &arr,int k){
map<int,int> mpp;
mpp[0]=1;
int premSum =0,count =0;
for(int i=0;i<arr.size();i++){
    premSum +=arr[i];
    int remove = premSum -k;
    count += mpp[remove];
    mpp[premSum] +=1;
}
return count;
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(-3);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(4);
    cout <<subaraaysum(arr,3) << endl; 
    return 0;
}