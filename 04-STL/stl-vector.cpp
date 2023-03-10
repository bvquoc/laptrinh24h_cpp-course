#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

signed main(void) {

    // vector: cấu trúc dữ liệu được xây dựng trong thư viện STL
    
    // vector: mảng động
    
    vector <int> a;

    // a.size(): trả về số lượng phần tử của vector
    // a.empty(): kiểm tra mảng rỗng

    // a.push_back(value): thêm phần tử vào cuối mảng
    // a.emplace_back(value): thêm phần tử vào cuối mảng 

    a.emplace_back(20);
    a.push_back(15);
    a.push_back(21);
    a.push_back(19);
    a.push_back(7);
    a.push_back(35);
    
    for (int x : a) { // range-for loop: >= C++11
        cout << x << ' ';
    }
    cout << endl;

    a.pop_back(); // xóa phần tử cuối cùng
    cout << a.back() << endl; // trả về phần tử cuối cùng của vector

    

    // resize()
    // a.resize(10, 100);
    // for (int x : a) { // range-for loop: >= C++11
    //     cout << x << ' ';
    // }
    // cout << endl;

    // a.resize(3); // thay đổi kích thước mảng
    // for (int x : a) { // range-for loop: >= C++11
    //     cout << x << ' ';
    // }
    // cout << endl;

    // assign(): thay đổi kích thước mảng, với tham số mặc định mới
    // a.assign(13, 10);
    // for (int x : a) { // range-for loop: >= C++11
    //     cout << x << ' ';
    // }
    // cout << endl;

    // sắp xếp toàn bộ vector
    sort(a.begin() + 1, a.begin() + 4);
    for (int x : a) { 
        cout << x << ' ';
    }
    cout << endl;


    vector <int> b(10, 19);
    for (int x: b) cout << x << ' '; cout << endl;
    /*
    logic
    */

    // b(a.begin(), a.begin()+3);
    // b.assign(a.begin(), a.begin() + 3);
    b = vector<int>(a.end() - 3, a.end());
    for (int x: b) cout << x << ' '; cout << endl;

    return 0;
}