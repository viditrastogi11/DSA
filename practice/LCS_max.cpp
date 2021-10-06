#include<iostream>
#include<vector>
using namespace std;
int max_length_subsequence(string s1, string s2, int i, int j)
{
    if(i==s1.length() || j==s2.length())
    {
        return 0;
    }
    if(s1[i]==s2[j])
    {
        return 1+max_length_subsequence(s1,s2,i+1,j+1);
    }
    int op1=max_length_subsequence(s1,s2,i+1,j);
    int op2=max_length_subsequence(s1,s2,i,j+1);
    return max(op1,op2);
}
int max_lenght_lcs_subseq(string s1, string s2, int i, int j, vector<vector<int> > &dp)
{
    if(i==s1.length() || j==s2.length())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(s1[i]==s2[j])
    {
        return dp[i][j]=1+max_lenght_lcs_subseq(s1,s2,i+1,j+1,dp);
    }
    int op1=max_lenght_lcs_subseq(s1,s2,i+1,j,dp);
    int op2=max_lenght_lcs_subseq(s1,s2,i,j+1,dp);
    return max(op1,op2);

}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1,n2;
    n1=s1.length();
    n2=s2.length();
    vector<vector<int>> dp(n1,vector<int>(n2,-1));
    cout<<max_lenght_lcs_subseq(s1,s2,0,0,dp);
}
