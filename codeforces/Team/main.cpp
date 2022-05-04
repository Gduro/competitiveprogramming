#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    int counter=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a == 1 && b == 1)
        {
            counter++;
        }
        else if (b == 1 && c==1)
        {
            counter++;
        }
        else if(a == 1 && c==1)
        {
            counter++;
        }

    }
    cout<<counter;  
    return 0;

}