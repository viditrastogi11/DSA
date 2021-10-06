#include<iostream>
#include<cstring>
using namespace std;
char* mystrtok(char *s,char delim)
{
   static char *input=NULL;
   if(s!=NULL)
   {
       input=s;
   }

   if(input==NULL)
   {
       return NULL;
   }
   int i=0;
char *output=new char[strlen(input)+1];
   for(;input[i]!=NULL;i++)
   {
       if(input[i]!=delim)
       {
           output[i]=input[i];
       }
       else
       {
        output[i]='\0';
        input=input+i+1;
        return output;
       }
   }
    output[i]='\0';
    input =NULL;
    return output;
}
int main()
{
    char s[100];
    cin.getline(s,100);
    char* ptr=mystrtok(s,',');
    cout<<ptr<<endl;
    while(*ptr!=NULL)
    {
    ptr=mystrtok(NULL,',');
    cout<<ptr<<endl;
    }
}
