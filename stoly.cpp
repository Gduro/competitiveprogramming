/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const int MAXN = 100*1000+10;

//naLewo[i] = kogo chce miec osoba i po lewej stronie
int naLewo[MAXN];
boold sprawdzony[MAXN]

int main()
{
    
    int n;
    cin>>n;
    for(int i =1; i<= n; i++)
    {
        cin>> naLewo[i];
    }
    
    int liczbaStolow = 0;
    for(int i=1; i<=n; i++)
    {
        //jezeli nie sprawdzilismy jeszcze osoby o indeksie i
        if(sprawdzony[i] == false)
        {
            int aktIndeks = i;
            //chodzimy po sasiadach na lewo dopoko nie zrobimy cyklu
            while(sprawdzony[aktIndeks] ==false)
            {
                sprawdzony[aktIndeks]= true;
                //przechodzimy na indeks sasiadach
                aktIndeks = naLewo [aktIndeks]
            }
            
            //mamy o jeden stół wiecej
            ++liczbaStolow;
            
        }
    }    return 0;
}
