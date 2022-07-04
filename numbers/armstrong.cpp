#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum = 0;
    int orignaln = n;

    while (n>0)
    {
        int last_digit = n%10;
        sum = sum + pow(last_digit,3);
        n = n/10;
    }

    if(sum == orignaln){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not an Armstrong number"<<endl;
    }
    
}