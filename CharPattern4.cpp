/*
5
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        char A= n+'A'-i;
        for(int j=1; j<=i; j++)
        {
            cout<<A;
            A++;
        }
        cout<<endl;
    }
}