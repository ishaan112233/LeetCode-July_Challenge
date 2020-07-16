class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string> arr;
        istringstream a(s);
        do
        {
            string t;
            a>>t;
            arr.push_back(t);
        }while(a);
        reverse(arr.begin(), arr.end());
        string ans="";
        for(int i=1; i<arr.size(); i++)
        {
            ans += arr[i];
            if(i<arr.size()-1) ans += " ";
        }
        return ans;
    }
};