#include <bits/stdc++.h>
#define endl '\n'

#include <stack>

using namespace std;

stack <int> s;

signed main(void) {

    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(2);

    s.pop();
    cout << s.empty();
    
    return 0;
}




// #include <bits/stdc++.h>
// #define endl '\n'
// using namespace std;

// const int N = 1000;
// int a[N];
// int pos = -1;

// // push 
// // pop
// // top
// // size

// void push(int x) { // them 1 gia tri vao stack
//     pos++;
//     a[pos] = x;
// }

// void pop() {
//     if (pos < 0) return;

//     a[pos] = 0; // xoa phan tu o dinh stack
//     pos--;
// }

// int top() {
//     return a[pos];
// }

// int size() {
//     return pos + 1;
// }

// signed main(void) {

//     // 5 3 6 7 9

//     push(5);
//     push(3);
//     push(6);
//     push(7);
//     push(9);

//     while (size() > 0) {
//         cout << top() << endl;
//         pop();
//     }

//     pop();
//     pop();
//     pop();

//     push(100);
//     push(101);


//     cout << endl;
//     while (size() > 0) {
//         cout << top() << endl;
//         pop();
//     }
    
//     return 0;
// }