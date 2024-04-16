#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,m,a;
    cin>>n;
    cin>>m;
    cin>>a;
    unsigned long long value= (ceil(double(n)/a)*ceil(double(m)/a));
    cout<<value<<endl;
return 0;
}