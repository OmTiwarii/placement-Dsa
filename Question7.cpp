#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin >> str;
  int  count = 0;

    for(int i=0;i<n;i++){
       char temp = str[i];
       char ttemp = str[i+1];
       if(temp == ttemp){
count++;
       }

    }
    cout<<count;


}