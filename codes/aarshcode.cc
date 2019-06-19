#include<iostream>
#include<string>
using namespace std;
int lcs(string s1, string s2, int m, int n, int** dp )
{int answer;
    if(m==0||n==0)
        return 0;
    if(dp[m][n]>-1)
        return dp[m][n];
    if(s1[0]==s2[0])
        answer = 1+lcs(s1.substr(1,m-1),s2.substr(1,n-1),m-1,n-1,dp);
 else{
     int option1 = lcs(s1,s2.substr(1,n-1),m,n-1,dp);
     int option2 = lcs(s1.substr(1,m-1),s2,m-1,n,dp);
     answer = max(option1,option2);
 }
dp[m][n] = answer;
 return answer;

}
int lcs(string s1, string s2){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */

int m = s1.length();
int n = s2.length();
int ** dp = new int*[m+1];
    for(int i=0;i<=m;i++)
        dp[i] = new int[n+1];
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
            dp[i][j] = -1;
    int length = lcs(s1,s2,m,n,dp);
    return length;
    
}
