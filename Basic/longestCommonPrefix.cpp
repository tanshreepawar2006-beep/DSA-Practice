#include <bits/stdc++.h>
using namespace std;

class Solution{

  public:  
    string longestCommonPrefix(vector<string>& strs){
        string ans = "";
        sort(strs.begin(),strs.end());

        int n = strs.size();

    string first = strs[0];
    string last = strs[n-1];

    for(int i=0; i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            return ans;
        }
         ans+=first[i];
    }
       
        return ans;

    }
};


int main() {

    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter strings: ";

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    Solution obj;

    string result = obj.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;

}