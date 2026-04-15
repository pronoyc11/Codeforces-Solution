#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> freq(101,0);

    for(int i=0;i<n;i++){
        freq[arr[i]] = freq[arr[i]] + 1;
    }

    int x;
    cin>>x;

    cout<<freq[x]<<endl;
    return 0;
}
