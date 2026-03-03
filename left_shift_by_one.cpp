#include <iostream>
#include <vector>
using namespace std;
void leftshift(vector <int> &arr,int n){
    int temp =arr[0];
    for(int i =1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
}
void ForDShiftOP(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);


}
void ForDShift(vector <int> &arr,int n,int d){
    d =d%n;
 vector <int> temp;
 for(int i=0;i<d;i++){
temp.push_back(arr[i]);
 }
 for(int i=d;i<n;i++){
    arr[i-d]=arr[i];

 }
 int j=0;
 for(int i=n-d;i<n;i++){
    arr[i]=temp[j];
    j++;
 }

}
int main(){
//     vector<int> arr ;
// arr.push_back(4);
// arr.push_back(4);
// arr.push_back(6);
// arr.push_back(6);
// arr.push_back(8);
// arr.push_back(15);
// int n= arr.size();
// leftshift(arr,n);
int arr[]={4,6,6,8,15,18};
int n=6;
ForDShiftOP(arr,n,3);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}