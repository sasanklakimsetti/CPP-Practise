#include<iostream>
using namespace std;
int main() 
{
    int a[100],n,x,i;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    cout<<count;
}

/*gfg code
//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	/*int findFloor(int v[], int n, int x){
int l=0,r=n-1,mid,ans=-1;
while(l<=r)
{
mid = (l+r)/2;
if(v[mid] <= x)
{
ans = max(ans,mid);
l=mid+1;
}
else
{
r=mid-1;
}
}
return ans;
}

int count(int arr[], int n, int x) {
int p= findFloor(arr,n,x-1);
int q = findFloor(arr,n,x);
int ans = q-p;

if(ans==0) return 0;
return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
*/
// } Driver Code Ends