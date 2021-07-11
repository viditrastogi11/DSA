//https://leetcode.com/problems/add-strings/`
class Solution {
public:
    int add(int x,int y)
    {
        while (y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
    }
    string addStrings(string n1, string n2) {
        int n=n1.length(),m=n2.length();
        int i=n-1,j=m-1;
        string s="";
        int carry=0;
        while(i>=0||j>=0)
        {

           int x=i>=0 ? n1[i]-'0':0;
           int y=j>=0 ? n2[j]-'0':0;;
           x=add(x,y);
           x=add(x,carry);
            carry=0;
           if(x>9)
           {
               int r=x%10;
               s.insert(0,1,'0'+r);
               carry=x/10;
           }
            else
            {
              s.insert(0,1,'0'+x);

            }
           i--;
           j--;
        }
        if(carry>0)
        {
           s.insert(0,1,'0'+carry);
        }
        return s;
    }
};
