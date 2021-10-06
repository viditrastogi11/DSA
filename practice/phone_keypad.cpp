#include<bits/stdc++.h>
using namespace std;
char keypad[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypads(char in[],char out[],int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';
    if(digit==0||digit==1)
    {
        keypads(in,out,i+1,j);
    }
    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        out[j]=keypad[digit][k];
        keypads(in,out,i+1,j+1);
    }
}
int main()
{
    char n[1000],out[1000];
    cin>>n;
    keypads(n,out,0,0);
}
