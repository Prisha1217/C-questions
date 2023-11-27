#include <iostream>
using namespace std;

/*
4
   1
  12
 123
1234
*/



int main()
{
    int n;
     cin>>n;
     int i=1;
     while(i<=n)
     {
        int j=1;
        int k=1;
        while(j<= (n-i))
        {
            cout<<" ";
            j++;
        }
        while(j<=n)
        {
            cout<<k;
            j++;
            k++;

        }
        i++;
        cout<<endl;
    
     }
}