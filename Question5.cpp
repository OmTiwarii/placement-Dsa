#include <iostream>
using namespace std;

int main(){
int n, m, a, b ;
cin>>n>>m>>a>>b;

int c1,c2,c3;
c1=n*a;
c2=((n/m)*b) + ((n%m)*a);
c3=n*b;

// if(c1<c2 && c1<c3){
//     cout<<c1;

// }else if(c2<c1 && c2<c3){
//     cout<<c2;

// }else{
//     cout<<c3;
// }
cout << min(c1, min(c2, c3));


}