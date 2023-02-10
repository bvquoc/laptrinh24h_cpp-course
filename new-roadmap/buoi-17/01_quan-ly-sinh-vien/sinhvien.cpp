#include<bits/stdc++.h>

using namespace std;

struct student
{
    int student_code;
    int year_of_birth;
    double mid_term_point, final_point;
    double average_point;
    char ranking;
} students[51];

// Nhập dữ liệu một sinh viên.
void input(student &S) 
{
    cin >> S.student_code >> S.year_of_birth;
    cin >> S.mid_term_point >> S.final_point;
}

// Kiểm tra một sinh viên có phải sinh năm 1999 trở về sau không.
int year_of_birth_1999(student S) 
{
    if (S.year_of_birth >= 1999)
        return 1;
    else
        return 0;
}

// Tính điểm trung bình cho một sinh viên.
void count_average_point(student &S) 
{
    S.average_point = S.mid_term_point * 0.3 + S.final_point * 0.7;
}

void set_rank(student &S) // Xếp hạng cho sinh viên.
{
    if (S.average_point < 4.0)
        S.ranking = 'D';
    else if (4.0 <= S.average_point && S.average_point <= 6.0)
        S.ranking = 'C';
    else if (6.0 <= S.average_point && S.average_point <= 8.0)
        S.ranking = 'B';
    else
        S.ranking = 'A';
}

int main()
{
    int N;
    cin >> N;

    // Số sinh viên có năm sinh lớn hơn 1999, xếp loại A và xếp loại D;
    int cnt_1999 = 0, cnt_A = 0, cnt_D = 0; 
    // Lưu số thứ tự các sinh viên có điểm tb lớn hơn 4.0 và nhỏ hơn 8.0.
    vector < int > index_list; 
    for (int i = 1; i <= N; ++i)
    {
        input(students[i]);

        cnt_1999 += year_of_birth_1999(students[i]);
        count_average_point(students[i]);
        set_rank(students[i]);


        if (students[i].ranking == 'A')
            ++cnt_A;
        else if (students[i].ranking == 'D')
            ++cnt_D;

        if (4.0 < students[i].average_point && students[i].average_point < 8.0)
            index_list.push_back(i);
    }

    // Xuất kết quả ra màn hình.
    cout << cnt_1999 << endl;
    cout << cnt_A << ' ' << cnt_D << endl;
    if (index_list.empty())
        cout << 0;
    else for (int index: index_list)
        cout << index << ' ';
}