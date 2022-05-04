#include <iostream>
using namespace std;
int main(){
    int n,k,a;
    int counter=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>a;
        if(a>k)
        {
            counter++;
        }

    }
    cout<<counter;  
    return 0;

}