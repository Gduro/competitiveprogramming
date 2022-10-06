

#include <iostream>

using namespace std;

int main ()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  int n,a,b;
  cin >> n;
  while(n--)
  {
      cin>>a>>b;
      while(a!=b)
      {
          if(a>b)
          {
              a-=b;
          }
          else if(a<b){
              b-=a;
          }
      }
      cout<<a + b<<'\n';
  }
  return 0;
}
