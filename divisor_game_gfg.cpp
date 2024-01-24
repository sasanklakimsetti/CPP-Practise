/*Alice and Bob take turns playing a game, with Alice starting first.
Initially, there is a number N on the chalkboard. On each player's turn, that player makes a move consisting of:

Choosing any x with 0 < x < N  and  N % x == 0.
Replacing the number N on the chalkboard with N - x.
Also, if a player cannot make a move, they lose the game.
Return true if and only if Alice wins the game, assuming both players play optimally.

 

Example 1:

Input:
N = 2
Output: True
Explanation: Alice chooses 1, and Bob has no more moves.
 

Example 2:

Input:
N = 3
Output: False
Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function divisorGame() which takes an integer N as a parameter and returns true if Alice wins the game.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 103*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool divisorGame(int N) {
        // code here
        return N%2==0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N; 
        cin >> N;
        
        Solution obj;
        bool ans = obj.divisorGame(N);
        if(ans) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}
// } Driver Code Ends