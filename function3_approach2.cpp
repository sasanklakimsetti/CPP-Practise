#include <iostream>
using namespace std;
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int ans = (a>b)?((a>c)?((a>d)?a:d):(c>d?c:d)):
    ((b>c)?((b>d)?b:d):((c>d)?c:d));
    
    return ans;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);
    return 0;
}
-

