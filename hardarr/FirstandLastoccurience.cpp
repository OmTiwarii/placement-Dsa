#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
    vector<int> simpleOproach(vector<int> arr,int key){
    int first =-1,last =-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            if(first==-1){
                first =i;
            }
            last = i;
        }
    }
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(last);
    return ans ;
}
// solving using upperbound and lower bound.
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
pair <int ,int> firstAndLastPosition(  vector<int> arr,int k,int n){
    
}


int main(){
    // vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    // arr.push_back(2);
    // arr.push_back(4);

  
       vector<int> ans =simpleOproach(arr,2);
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
       }
    return 0;
}