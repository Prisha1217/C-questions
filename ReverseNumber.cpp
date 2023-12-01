/*
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note: If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int new_num=0;
    if(n==0)
    {
        cout<<0;
    }
    else
    {
        while(n%10==0)
        {
            n=n/10;
        }
        for(int i=0; n>0; i++)
        {
            int elem=n%10;
            n=n/10;
            new_num= (new_num*10)+elem; 
        }
        cout<<new_num;
    }
    
}