#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
void rearrange(vector<int>& nums){
    int count0= 0, count1= 0, count2= 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            count0++;
        }else if(nums[i]==1){
            count1++;
        }else{
            count2++;
        }
    }

    for(int i=0;i<count0;i++){
        nums[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        nums[i]=1;
    }
    for(int i=count0+count1;i<nums.size();i++){
        nums[i]=2;
    }

}
//dutch national flag algoithm 
void Arrayrearrange(vector<int>& arr){
    int low =0;
    int mid  =0;
    int high = arr.size()-1;
    //100120
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==2){
            swap(arr[high],arr[mid]);
            high--;
        }else{
            mid++;
        }
    }
}
int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(0);
   Arrayrearrange(arr);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}