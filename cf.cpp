#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    // int a,b,c;
    // cin>>a>>b>>c;
    // int sum=a+b+c;
    // if(sum%2==1 and (a+b)%2==0){
    //     cout<<"First"<<endl;
        
    // }
    // else if(sum%2==0 and (a+b)%2==1){
    //     cout<<"Second"<<endl;
    // }
    // else if((a+b)%2==0 and sum%2==0){
    //     cout<<"Second"<<endl;
    // }
     int t;
    cin>>t;
    while (t--)
    {
        int ans=0;
        int x,y,z;
        cin>>x>>y>>z;
        if (z%2!=0)
        {
            ans = x+1 > y ? 0:1;
        }
        else
        {
            ans = x> y ? 0:1;
        }
        if(!ans)
        {
            cout<<"First"<<endl;
        }
        else
        {
            cout<<"Second"<<endl;
        }


}

}
}