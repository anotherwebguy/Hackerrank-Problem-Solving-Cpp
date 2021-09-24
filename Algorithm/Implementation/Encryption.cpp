#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word){
        count+=word.size();
    }
    int n=floor(sqrt(count));
    int m=ceil(sqrt(count));
    string ans="";
    for(int i=0;i<m;i++){
        for(int j=i;j<s.size();j+=m){
            ans+=s[j];
        }
        ans+=" ";
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
