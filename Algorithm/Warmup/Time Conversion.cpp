#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string h,ans="";
    int hr;
    cin>>s;
    hr = ((s[0]-'0')*10)+(s[1]-'0');
    if(s[8]=='P'&&s[9]=='M'&& hr ==12) ans+=to_string(hr);
    else if(s[8]=='P'&&s[9]=='M') ans+=to_string(hr+12);
    else if(s[8]=='A'&&s[9]=='M'&&hr==12) ans+="00";
    else ans+=s.substr(0,2);
    for(int i=2;i<8;i++){
        ans+=s[i];
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
