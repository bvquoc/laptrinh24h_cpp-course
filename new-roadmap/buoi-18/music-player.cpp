#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int menu() {
    cout << "MENU: \n";
    cout << "1. Nhap danh sach bai hat\n";
    cout << "2. In danh sach bai hat\n";
    cout << "3. Phat bai hat tai thu ...\n";
    cout << "4. Chuyen bai (next)\n";
    cout << "5. Xoa bai hat\n";
    cout << "0. Thoat chuong trinh\n\n";

    int option = -1;
    while (option < 0 || option > 4) {
        cout << "Lua chon cua ban la: ";
        cin >> option;
    }
    return option;
}

signed main(void) {

    

    for (int option = menu(); option != 0; option = menu()) {
        switch (option)
        {
        case 1:
            /* code */
            break;
        
        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        case 4:
            /* code */
            break;
        
        case 5:
            /* code */
            break;
        
        default:
            exit(0);
            break;
        }
    }
    
    return 0;
}