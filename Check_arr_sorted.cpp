#include <iostream>
#include <vector>
using namespace std;

int sortedornot(vector <int> &arr,int n){
   bool SortORNot = false;
   int count =1;
   for(int i=0;i<n-1;i++){
   if(arr[i]<=arr[i+1]){
    count ++;

   }
   }
   
   if(count==n){
    SortORNot =true;
   }else{
     SortORNot =false;
   }
   return SortORNot;
}
int main(){
    vector <int> arr ;
arr.push_back(4);
arr.push_back(12);
arr.push_back(13);
arr.push_back(14); 
arr.push_back(15);
arr.push_back(16);
int n = arr.size();
// int largest = Largestelement(arr,n);
int Second =sortedornot(arr,n);
cout<<Second;
}
