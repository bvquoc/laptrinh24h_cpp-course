#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s = "Lap trinh fullhouse!";
    cout << s << endl;

    // length
    cout << "Do dai: " << s.length() << endl;

    // substr(pos, k): ->substr có k phần tử, bắt đầu từ vị trí pos
    // substr(pos): -> substr từ vị trí pos đến cuối string
    cout << s.substr(10) << endl;

    // s.find(x) -> vị trí đầu tiên của xâu x trong s. [0-> s.length()-1]
    // s.find(x, pos) -> vị trí đầu tiên kể từ vị trí pos của xâu x trong s. [0-> s.length()-1]
    // s.rfind(x) -> vị trí đầu tiên từ phải sang của xâu x trong s. [0-> s.length()-1]
    cout << s.find("u") << endl;

    // s.erase(pos, k) -> xoá k kí tự kể từ vị trí pos
    // s.erase(pos) -> xoá các kí tự kể từ vị trí pos
    s.erase(4, 6);
    cout << s << endl;

    // s.replace(pos, k, str): Thay thế k kí tự từ vị trí pos bằng xâu str
    s.replace(0, 3, "CLB");
    cout << s << endl;
    s.replace(3, 0, " lap trinh");
    cout << s << endl;

    // s.compare(str): so sánh 2 chuỗi có bằng nhau hay ko
    cout << s.compare("CLB lap trinh fullhouse!") << endl;
    cout << (s == "CLB lap trinh fullhouse!") << endl;

    // s.swap(str): đổi giá trị của 2 string s và str.
    string str = "ABC";
    swap(s, str);
    s.swap(str);

    // s.insert(pos, str): chèn chuỗi str vào vị trí pos của chuỗi s.
    s.insert(14, "C++ ");
    cout << s << endl;

    // reverse(s.begin(), s.end()): Dao chuoi
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}