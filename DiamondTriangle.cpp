/*

5
  *
 ***
*****
 ***
  *

*/
#include <iostream>
using namespace std;
int main(){
    int n;
     cin>>n;
     int i=1;
     int n1= n/2+1;
     while(i<=n1)
     {
        int j=1;
        int space=1;
        while(space<=(n1-i))
        {
            cout<<" ";
            space++;
        }
        while(j<=(i*2-1))
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
     }
     int total_space=1;
     while(i<=n)
     {
        int j=1;
        
        int space=1;
        while(space<=total_space)
        {
            cout<<" ";
            space++;
        }
        while(j<=((n-i+1)*2)-1)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        total_space++;
        i++;
     }
}