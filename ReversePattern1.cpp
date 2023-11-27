#include <iostream>
using namespace std;


/*
4
   *
  **
 ***
****

*/
int main()
{
    int n;
     cin>>n;
     int i=1;
     while(i<=n)
     {
        int j=1;
        while(j<= (n-i))
        {
            cout<<" ";
            j++;
        }
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    
     }
}