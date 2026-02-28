#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  int totalsum=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    totalsum+=arr[i];
  }
    sort(arr, arr + n, greater<int>());

 for(int i=0;i<n;i++){
cout<<arr[i];

  }
    int takensum=0;
    int count=0;
     for(int i=0;i<n;i++){
        takensum+=arr[i];
   count++;
   if(takensum>totalsum-takensum){
    break;
   }
  }
  cout<<count;





}

