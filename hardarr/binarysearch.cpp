#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int binarysearch( vector<int> arr ,int key){
    int n=arr.size();
    int low =0,high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            return mid;
        }else if(key>arr[mid] ){
            low =mid+1;
        }else{
            high =mid-1;
        }

    }
        return -1;
}

int recursivebinarysearch(vector<int> arr ,int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid]){
return recursivebinarysearch(arr,mid+1,high,key);
    }else{
        return recursivebinarysearch(arr,low,mid-1,key);
    }
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
    cout << recursivebinarysearch(arr,low,high,5)<< endl; 
    return 0;
}