#include <iostream>
using namespace std;
int main(){
    int spaces=0,digits=0,chars=0;
    char ch;
    ch= cin.get();
    while(ch!='$'){
        if(ch<='9' && ch>='0')
        {
            digits++;
        }
        else if((ch>='A' && ch<='Z') ||  (ch>='a' && ch<='z'))
        {
            chars++;
        }
        else if(ch!='$'){
            spaces++;
            cout<<'1';
        }
        ch=cin.get();
    }
    cout<<chars<<" "<<digits<<" "<<spaces;
}
