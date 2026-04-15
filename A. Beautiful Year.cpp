#include<bits/stdc++.h>
using namespace std;

int main()
{

   long y;

   cin>>y;
   long ny = y+1;
   while(ny>y){

      vector<long> newArr(20,0);
      bool flag = false;
      long nny = ny;
      while(nny>0){
        int lastDigit = nny%10;
        newArr[lastDigit]++;
        nny /= 10;
        if(newArr[lastDigit]>1){
            flag = true;
            break;
        }
      }
      if(flag){
        ny++;
      }else{
        break;
      }
   }

   cout<<ny<<endl;

    return 0;
}
