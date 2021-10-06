#include<iostream>
#include<string>
using namespace std;
int main()
{
    string plain,cipher;
    getline(cin,plain);
    getline(cin,cipher);
    for(int i=0;i<plain.length();i++)
    {
        char a=plain[i]>'Z'?(((plain[i])+5)%26):(((plain[i]-'A')+5)%26)+'A';
        for(int j=0;j<cipher.length();j++)
        {

            if(cipher[j]==a)
            {
                cipher.erase(j,1);
                break;
            }
        }
    }
     if(cipher.length()==0)
        {
            cout<<"yes";
        }
        else
        {
            cout<<"no";
        }

}
