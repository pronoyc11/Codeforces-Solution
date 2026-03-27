#include<bits/stdc++.h>

using namespace std;


int main(){

int n,valueX=0;

cin>>n;

for(int i=0;i<n;i++){
    string statement;
    cin>>statement;
    if(statement == "X++" || statement == "++X"){
        valueX++;
    }else{
        valueX--;
    }
}


cout<<valueX<<endl;

return 0;
}
