#include <iostream>
#include <algorithm>
using namespace std;
int getM( bool a[],int n){
    int c=0;
    int r=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
             ++c;
            r= max(r,c);
        }
        else {
            c=0;
        }
    }
    return r;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int t,n,k,i,j;
    cin>>t;

    for(i=0;i<t;i++){
        
        cin>>n;
         bool a[n];
         for(j=0;j<n;j++){
        cin>>a[i];
         }
        k=0;
    k= getM(a,n);
        if(k<=n-2)
        cout<<k<<endl;
        else if(k==n)
            cout<<k-2<<endl;
        else if( k==n-1)
            cout<<k-1<<endl;
        else if(k==0)
            cout<<k<<endl;
        }
    return 0;
}

