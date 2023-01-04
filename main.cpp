
#include<iostream>
using namespace std;


const int maxn = 100005;

int deg[maxn];

int main()
{
   int ver;
   cin >> ver;

   for(int i = 0 ; i < ver - 1; i++)
   {
      int u , v;
      cin >> u >> v;
      deg[u]++;
      deg[v]++;


   }

   for(int i = 1 ; i <= ver ; i++)
   {
      if(deg[i] == 2)
      {
         cout << "NO" << '\n';
         return 0;

      }
   }

   cout << "YES" << '\n';
}
