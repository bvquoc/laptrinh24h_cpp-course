#include <bits/stdc++.h>
using namespace std;

bool isLower(char c) {
    return ('a' <= c && c <= 'z');
}

bool isUpper(char c) {
    return ('A' <= c && c <= 'Z');
}

bool isAlpha(char c) {
    return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

bool isDigit(char c) {
    return ('0' <= c && c <= '9');
}

char toLower(char c) {
    if (isUpper(c)) {
        return c - 'A' + 'a';
    }
    return c;
}

char toUpper(char c) {
    if (isLower(c))
        return c - 'a' + 'A';
    return c;
}

string toLower(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        res = res + toLower(s[i]);
    }
    return res;
}

string toUpper(string s) {
    string res = "";
    for (int i = 0; i < s.length(); i++) {
        res = res + toUpper(s[i]);
    }
    return res;
}

string strRev(string s) {
    string res = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        res += s[i];
    }
    return res;
}

long long toLongLong(string s) {
    if (s == "") return 0;

    if (s[0] == '-') {
        return -1 * toLongLong(s.substr(1));
    }

    long long res = 0;
    for (char c : s) { // ranged-base loop
        res = res * 10 + c - '0';
    }
    return res;
}

signed main(void) {

    cout <<  toLongLong("-0000123456") << endl;
    cout <<  toLongLong("3456") << endl;
    
    return 0;
}