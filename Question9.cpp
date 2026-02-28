#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[10005];
    for(int i=0;i<n;i++){
        cin>>i;
        if(i>0){
            a[i]=a[i]+a[i-1];
        }
    }
    int m;
    cin>>m;
    while(m--){
        long long q;
        cin>>q;
        int left =0,right =n-1;
        while(left<right){
            int mid =(left+right)/2;
            if(a[mid]>=q){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        cout<<left+1<<endl;
    }


}