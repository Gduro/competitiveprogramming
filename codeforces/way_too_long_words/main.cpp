#include <iostream>
using namespace std;
int main(){
    int n;
    string name;
    cin>>n;
    while(n--)
    {
        cin>>name;
        if(name.length() > 10)
        {
            cout<<name[0]<<name.length()-2<<name[name.length()-1]<<endl;
        }
        else
        {
            cout<<name<<endl;
        }

    }
    return 0;

}