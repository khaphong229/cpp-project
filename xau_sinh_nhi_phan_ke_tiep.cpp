#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

string s;

void sinh(string s){
    int i=s.length()-1;
    while(i>=0 && s[i]=='1'){
        s[i]='0';
        --i;
    }
    if(i!=-1){
        s[i]='1';
    }
    cout << s << endl;
}

int main()
{
    cin >> s;
    sinh(s);
    return 0;
}
