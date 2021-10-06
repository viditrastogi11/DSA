#include<bits/stdc++.h>
using namespace std;
void subsequence(char *in,char*out, int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    out[j]=in[i];
    subsequence(in,out,i+1,j+1);
    subsequence(in,out,i+1,j);

}
int main()
{
    char i[1000],o[1000];
        cin>>i;
    subsequence(i,o,0,0);
}
