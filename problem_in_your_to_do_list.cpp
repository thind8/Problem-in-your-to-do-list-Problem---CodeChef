#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int prob[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>prob[i];

        }
        for(int i=0;i<n;i++){
            if(prob[i]>=1000){
                count++;

            }
        }
        cout<<count<<"\n";
    }
}