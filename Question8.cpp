#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[100005];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long min = arr[0];
    int count = 1;
    int index = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            index = i;
            count = 1;
        } 
        else if(arr[i]==min){
            count++;
        }
    }
    if(count == 1)
    {
        cout<<index+1;
    }
    else
    {
        cout<<"Still Rozdil";
    }
    
}