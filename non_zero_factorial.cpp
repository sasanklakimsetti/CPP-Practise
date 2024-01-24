/*Given a number n, find the last non-zero digit in n!.


Examples:

Input  : n = 5
Output : 2
5! = 5 * 4 * 3 * 2 * 1 = 120
Last non-zero digit in 120 is 2.

Input  : n = 33
Output : 8
Your Task:  
You don't need to read input or print anything. Your task is to complete the function lastNon0Digit() which takes the integer N as input parameters and returns the last non-zero digit in n!.

Expected Time Complexity: O(N^2)
Expected Auxiliary Space: O(1)

 

Constraints:
1 ≤ N ≤ 100*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
public:
    int lastNon0Digit(int n)
    {
        // Code Here
        long long fact=1,mod=1e5;
        for(long long i=1;i<=n;i++)
        {
            fact*=i;
            while(fact%10==0)
            {
                fact/=10;
                
            }
            fact%=mod;
        }
        return fact%10;
    }
    
};

//{ Driver Code Starts.


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<< ob.lastNon0Digit(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends