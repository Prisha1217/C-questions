/*
ABCD
BCDE
CDEF
DEFG
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        char A= 'A'+i-1;
        for(int j=1; j<=n; j++)
        {
            cout<<A;
            A++;
        }
        cout<<endl;
    }
}