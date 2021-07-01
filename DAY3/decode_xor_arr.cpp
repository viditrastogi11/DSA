class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
         encoded.insert(encoded.begin(),first);
        for(int i=0;i<encoded.size()-1;i++)
        {

            encoded[i+1]=encoded[i]^encoded[i+1];
        }

        return encoded;
    }
};
