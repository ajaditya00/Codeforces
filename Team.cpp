/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    int count=0;
    int p=0;
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
        count++;
    }
    }
    cout<<count;
return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    int count=0;
    int take=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==1){
            count++;
        }
         if(b==1){
            count++;
        }
         if(c==1){
            count++;
        }
         if(count>=2){
            take++;
            count=0;
        }
        else{
            count=0;
        }
    }
    cout<<take;
return 0;
}