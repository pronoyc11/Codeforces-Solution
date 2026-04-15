#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<long long> uniq;

    for(int i=0;i<4;i++){
        long long x;
        cin>>x;
        uniq.insert(x);
    }


    cout<<(4-uniq.size())<<endl;


    return 0;
}
