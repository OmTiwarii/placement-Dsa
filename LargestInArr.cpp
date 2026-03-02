#include <iostream>
#include <vector>
using namespace std;
int SecondLargestElementOP(vector <int> &arr,int n){
    int largest =arr[0];
    int slargest =INT_MIN;
    for(int i=1;i<n;i++){
       if(arr[i]>largest){
        slargest =largest;
        largest=arr[i];
       }else if (arr[i]<largest && arr[i]>slargest){
        slargest=arr[i];
       }
    } 

    return slargest;

}
int SecondSmallestElementOP(vector <int> &arr,int n){
int smallest = arr[0];
int Ssmallest = INT_MAX;
for(int i=1;i<n;i++){
if(arr[i]<smallest){
    Ssmallest =smallest;
    smallest=arr[i];

}else if( arr[i]>smallest && arr[i]<Ssmallest){
    Ssmallest = arr[i];
}
}
return Ssmallest;
}
int Largestelement(vector <int> &arr,int n){
    int largest =arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int SecondElement(vector <int> &arr,int n){
 int largest =arr[0];
 int smalest = arr[0];
 int secondLargest =INT_MIN;
 int secondsmalest =INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smalest){
            smalest=arr[i];
        }
    }
   for(int i=0;i<n;i++){
    if(arr[i]>secondLargest && arr[i]!=largest){
        secondLargest = arr[i];
    }
    if(arr[i]<secondsmalest && arr[i]!=smalest){
        secondsmalest = arr[i];
    }
   }
//    return smalest;
 return secondsmalest;
}
int main(){
vector <int> arr ;
arr.push_back(4);
arr.push_back(12);
arr.push_back(6);
arr.push_back(9);
arr.push_back(8);
arr.push_back(15);
int n = arr.size();
// int largest = Largestelement(arr,n);
int Second =SecondSmallestElementOP(arr,n);
cout<<Second;
}
