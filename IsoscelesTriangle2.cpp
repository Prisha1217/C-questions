/*

4      
4
   *
  ***
 *****
*******
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
        while(j<=n)
        {
            cout<<"*";
            j++;
        }

        int l=i-1;
        while(j>n && l>0)
        {
            cout<<"*";
            l--;
        }
        i++;
        cout<<endl;

    }
}