/*
n= 4

1
23
345
4567
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int m=i;
        for(int j=1; j<=i; j++)
        {
            cout<<m;
            m++;
        }
        cout<<endl;
    }
}