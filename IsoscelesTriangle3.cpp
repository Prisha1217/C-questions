/*

4
   1
  232
 34543
4567654
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
        int elem=n-j+1;
        while(j<=n)
        {
            cout<<elem;
            elem++;
            j++;
        }
        int l=i-1;
        int elem2=(i-1)*2;
        while(j>n && l>0)
        {
            cout<<elem2;
            elem2--;
            l--;
        }
        i++;
        cout<<endl;

    }
}