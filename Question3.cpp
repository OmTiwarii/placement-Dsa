#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    char colon;

    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

   int h3,m3;
   if(h1>=24||h2>=24||m1>=60||m2>=60){
    cout<<"invaid time";
   }
   
   h3=h1-h2;
   m3=m1-m2;
   if(h3==0){
    h3=h3-1;
   }

   if(h3<0){
     h3=h3+24;
   }
   if(m3<0){
    m3=m3+60;
   }
cout<<h3<<":"<<m3;
}