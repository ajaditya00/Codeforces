#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    bool flag=true;
    while(1){
        a*=3;
        b*=2;
        if(a>b){
            count++;
            break;
        }
        else{
            count++;
        }
    }
    cout<<count;
return 0;
}