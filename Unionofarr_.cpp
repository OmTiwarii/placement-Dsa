#include <iostream>
#include <vector>
#include <set>
using namespace std;
//union of two sorted array
vector<int> OPUnion(vector<int> a, vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    int i =0;
    int j =0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
         if(a[i]<b[j]){
            if( unionArr.size()== 0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
         }else if(b[j]<a[i]){
            if(unionArr.size()== 0 || unionArr.back()!=b[j]){
                 unionArr.push_back(b[j]);
            }
            j++;

         }else{   // a[i] == b[j]
    if(unionArr.size()==0 || unionArr.back()!=a[i]){
        unionArr.push_back(a[i]);
    }
    i++;
    j++;
}
}
    

    while(i<n1){
        if( unionArr.size()== 0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
        i++;
    }
    while(j<n2){
         if(unionArr.size()== 0 || unionArr.back()!=b[j]){
                 unionArr.push_back(b[j]);
            }
        j++;

    }
    return unionArr;
}

// vector<int> UUnion(vector<int> a, vector<int> b)
// {
//     int n1 = a.size();
//     int n2 = b.size();
//     set<int> st;
//     for (int i = 0; i < n1; i++)
//     {
//         st.insert(a[i]);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         st.insert(b[i]); 
//     }
// vector<int> temp;
//     for(auto it :st){
//         temp.push_back(it);
//     }
//     return temp;
// }

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    // arr.push_back(8);
    // arr.push_back(15);
   
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(5);
    // arr.push_back(8);
    // arr.push_back(8);
    // arr.push_back(15);
  

 vector<int> Union =  OPUnion(arr, arr2);
    for (int i = 0; i < Union.size(); i++)
    {
        cout << Union[i] << " ";
    }
}