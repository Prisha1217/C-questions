/*
Write a program to print first x terms of the series 3N + 2
which are not multiples of 4.

10
5 11 14 17 23 26 29 35 38 41
*/


#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count=0;
    for(int i=1; count<10; i++)
    {
        int term= 3*i+2;
        if(term%4==0)
        {
            continue;
        }
        count++;
        cout<<term<<" ";
    }
}