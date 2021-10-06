#include<iostream>
using namespace std;
int main()
{
    string instr;
    int flag=0;
    getline(cin,instr);
    for(int i=0;i<instr.length();i++)
    {
        if(instr[i]=='a'||instr[i]=='e'||instr[i]=='i'||instr[i]=='o'||instr[i]=='u'||instr[i]=='A'||instr[i]=='E'||instr[i]=='I'||instr[i]=='O'||instr[i]=='U')
        {
            flag=1;
            int outnum=i*5;
            if(outnum%2==0)
            {
                outnum=outnum/2;
            }
            else
            {
                outnum=(outnum/2)+1;
            }
             outnum=outnum*outnum;

            int sum=0;
             while(outnum!=0)
             {
                 sum=(outnum%10)+sum;
                 outnum=outnum/10;
                 if(sum>9 && outnum==0)
                 {
                     outnum=sum;
                     sum=0;
                 }
             }

             instr[i]='0'+sum;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
    else{
        cout<<instr;
    }
}
