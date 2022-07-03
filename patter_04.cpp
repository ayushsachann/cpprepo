#include<iostream>
using namespace std;

// two methods for doing this

int main(){
    int n;
    cin>>n;
//     int i,j,k;
//     for(i = 1; i <= n; i++){
//         for(k = n; k > i; k--){
//             cout<<" ";
//         }
//         for(j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// or we can do it in thos way


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            if(j <= n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}