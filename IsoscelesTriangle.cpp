/*

4      
4
   1
  121
 12321
1234321
*/


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<= n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(j<=n)
        {
            cout<<k;
            k++;
            j++;
        }

        int l=i-1;
        while(j>n && l>0)
        {
            cout<<l;
            l--;
        }
        i++;
        cout<<endl;

    }
}