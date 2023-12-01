/*
6
8
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    int b=1;
    for(int i=2; i<n; i++)
    {
        int c=a+b;
        b=a;
        a=c;
    }
    cout<<a;
}