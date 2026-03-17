#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
vector<int> OptimaltwoSum(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int b = 0, e = nums.size()-1;
    while(b<=e){
        if(nums[b]+nums[e]== target){
            return vector<int>{b,e};
        }
        else if(nums[b]+nums[e]>target){
            e--;
        }else{
            b++;
        }
    }
return vector<int>{-1,-1};
}
vector <int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a =nums[i];
            int rem = target -a;
            if(mpp.find(rem)!=mpp.end()){
              return vector<int>{mpp[rem],i};
            }

            mpp[rem]=i;
        }
        return vector<int>{-1,-1};
    }
bool Twosum(vector <int> arr,int k){
    bool find =false;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==k){
                find =true;
                break;
            }
        }
        if(find == true){
            break;
        }
    }
  if(find == false){
    return false ;
  }
  return find;
}
string betterTwosum(vector <int> arr,int k){
    map<int ,int> mpp;
    for(int i=0;i<arr.size();i++){
    int a = arr[i];
    int rem = k-arr[i];
    if(mpp.find(rem)!= mpp.end()){
        return "YESS";
    }
    mpp[a]=i;
    }
    return "NOO";
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(4);
   vector<int> ans =OptimaltwoSum(arr,9);
    cout<< ans;
    return 0;
}