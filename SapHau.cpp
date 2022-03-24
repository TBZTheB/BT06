
#include<iostream>
#include<math.h>

using namespace std;
int a[100];
bool check(int x2, int y2){
    for(int i=1;i<x2;i++)
        if(a[i]==y2|| abs(i-x2)==abs(a[i]-y2))
        return false;
    return true;
}
void Xuat(int n)
{
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void Xep(int i,int n)
{
    for(int j=1;j<=n;j++){
        if(check(i,j)){
            a[i]=j;
            if(i==n) Xuat(n);
            Xep(i+1,n);
        }
    }
}
int main(){
    int n;
    cin>>n;
    Xep(1,n);
    return 0;
}
