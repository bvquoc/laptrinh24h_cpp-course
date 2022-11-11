#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long Min = a; // Khai bao hop 'Min' -> bo a vao hop
    if (Min > b) {
        // nem so trong hop ra ngoai
        Min = b; // bo b vao hop
    }
    if (Min > c)
        Min = c;
    if (Min > d)
        Min = d;
    if (Min > e)
        Min = e;

    long long NhoNhi = a;
    if (NhoNhi == Min)
        NhoNhi = b;
    if (NhoNhi == Min)
        NhoNhi = c;
    if (NhoNhi == Min)
        NhoNhi = d;
    if (NhoNhi == Min)
        NhoNhi = e;
    
    if (a < NhoNhi && a > Min)
        NhoNhi = a;
    if (b < NhoNhi && b > Min)
        NhoNhi = b;
    if (c < NhoNhi && c > Min)
        NhoNhi = c;
    if (d < NhoNhi && d > Min)
        NhoNhi = d;
    if (e < NhoNhi && e > Min)
        NhoNhi = e;
    
    cout << NhoNhi;

    return 0;
}