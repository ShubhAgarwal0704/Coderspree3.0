#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        if (n == 1) {
          cout<<"1";
          return 0;
        }
        int a=0;
        int b=1;
        int c;
        for(int i=1;i<n;i++){
                c=a+b;
                a=b;
                b=c;
        }
        cout<<c;
        return 0;
}