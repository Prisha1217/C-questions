/*
A
BB
CCC
DDDD
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        char A= 'A'+i-1;
        for(int j=1; j<=i; j++)
        {
            cout<<A;
        }
        cout<<endl;
    }
}