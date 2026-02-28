#include <iostream>
using namespace std;
int main(){
//selection sort 

int arr[]= {100,20,19,18,17,16,15};
int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-2;i++){
      int min = i;
        for(int j=i;j<=n-1;j++){
       if(arr[j]<arr[min]){
        min=j;
       }
        }
        int temp =arr[min];
        arr[min]=arr[i];
        arr[i] =temp;

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }


}