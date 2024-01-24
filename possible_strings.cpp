/*Given a string str your task is to complete the function spaceString which takes only one argument the string str and  finds all possible strings that can be made by placing spaces (zero or one) in between them. 

For eg .  for the string abc all valid strings will be
                abc
                ab c
                a bc
                a b c

Example 1:

Input:
str = abc
Output: abc$ab c$a bc$a b c$
Example 2:

Input:
str = xy
Output: xy$x y$

Your Task:
Complete the function spaceString() which takes a character array as an input parameter and returns list of all possible answers in lexographically reverse order(largest String first then smaller). The driver code will print the all possible answer '$' separated.

Expected Time Complexity: O(N * 2N)
Expected Auxiliary Space: O(N)


Constraints:
1<= length of string str <=10

Note:The Input/Ouput format and Example given are used for system's internal purpose, and should be used by a user for Expected Output only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/
void solve(string& str, vector<string>&ans,int i, string temp)
{
int n = str.size();
if(i>=n)
{
if(find(ans.begin(),ans.end(),temp) == ans.end())
ans.push_back(temp);
return ;
}

temp += str[i];
solve(str,ans,i+1,temp);

if(i!=n-1)
temp +=' ';

solve(str,ans,i+1,temp);
}

vector<string>spaceString(char str[])
{
//Your code here
vector<string>ans;
string s(str);
solve(s,ans,0,"");
sort(ans.begin(),ans.end());
reverse(ans.begin(),ans.end());
return ans;
}