#include<bits/stdc++.h>
using namespace std;

bool check_func(int x) {
    // Kiem tra so chan
    if (x % 2 == 0) return true;
    return false;
}

void handle_function(int x) {
    cout << x << " " << x*x << endl;
}

int main()
{
	
    int a[] = { 3, 5, 2, 102, 15, 8, 7, 102, 9 };
    int n = 9;

    cout << "Arr a:\n";
    for (int i = 0; i < n; i++)
        cout << i << " " << a + i << " " << a[i] << endl;
    cout << endl;

    int *max_pointer = max_element(a, a + n);
    cout << "Gia tri cua phan tu lon nhat: " << *max_pointer << endl; // -> [a+0, a+n) <-> [a+0, a+n-1]
    cout << "Dia chi cua phan tu lon nhat: " << max_pointer << "\n\n";
    
    cout << "Sum of all element: " << accumulate(a, a + n, 0) << endl;
    cout << "a[2] + a[3] + ... + a[7] = " << accumulate(a + 2, a + 8, 0) << "\n\n";

    // fill(a+2, a+5+1, 10);
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';

    cout << "Find 5: " << find(a, a+n, 5) << endl;
    cout << "Find 102: " << find(a, a+n, 102) << endl;
    cout << "Find 555: " << find(a, a+n, 555) << "\n\n";

    if (find(a, a+n, 15) == a+n) {
        cout << "15 khong ton tai\n\n";
    } else {
        cout << "15 co ton tai trong day, o vi tri " << find(a, a+n, 15) - a << "\n\n";
    }


    cout << "So chan dau tien trong mang: " << *find_if(a, a+n, check_func) << "\n\n";
    // for (int i = 0; i < n; i++) {
    //     if (check_func(a[i]) == true) {
    //         cout << i << ' ' << a[i] << endl;
    //         break;
    //     }
    // }

    // sort(a, a+n);
    // cout << "Sorted array: ";
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    // cout << endl;

    // reverse(a, a+n);
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    // cout << endl;

    cout << "Using for_each:\n";
    for_each(a, a+n, handle_function); // callback: truyền tham số là 1 hàm trong hàm

    // for (i = 0 -> n-1) handle_function(a[i]);
    

	return 0;
	
}
