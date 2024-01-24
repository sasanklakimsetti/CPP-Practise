/*You are given integer N, and return the Fibonacci Series till the Nth term.

Example:

Input:
5
Output:
0 1 1 2 3 5
Explanation:
0 1 1 2 3 5 is the Fibonacci series up to
the 5th term.(0-based indexing)
Your Task:
You don't need to read input or print anything. Your task is to complete the function Series() which takes an Integer N as input and returns a Fibonacci Series up to the Nth term.

Expected Time Complexity: O(n)
Expected Space Complexity: O(n)

Constraint:
1<=n<100*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long solve(vector<long long>&ans, int n)
{
if(n==0 || n==1)
{
ans[n] = n;
return n;
}
if(ans[n] !=0) return ans[n];

long long a = solve(ans,n-1) + solve(ans,n-2);
ans[n] = a;
return a;
}
vector<long long> Series(int N) {
vector<long long>ans(N+1,0);
solve(ans,N);
return ans;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends