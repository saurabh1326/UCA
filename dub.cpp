#include <iostream>
#include <complex>
using namespace std;
int main()
{
   int a[]={1,2,3,2,4};
   for(int i=0;i<5;i++)
   {


  int x=abs(a[i]);
     //cout<<i;
     if(a[x]<0)
       cout<<abs(a[i]);
      else
        a[x]*=-1;

   }

}
