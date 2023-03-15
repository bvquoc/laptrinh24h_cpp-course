#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Student {
private:
    string name = "unnamed";
    int id = -1;
    double mark = -1;

public:
    
    // getter
    string getName() {
        return this->name;
    }
    int getId() {
        return this->id;
    }
    double getMark() {
        return this->mark;
    }
    void getInfo() {
        cout << id << " " << name << " " << mark << "\n";
    }

    // setter
    void setName(string newName) {
        name = newName;
    }
    void setId(int id) {
        this->id = id;
    }
    void setMark(double mark) {
        this->mark = mark;
    }


    Student() {
        cout << "1 thuc the Student duoc khai bao\n";
    }
    Student(string name, int id, double mark) {
        cout << "mot doi tuong Student duoc khai bao voi day du thong tin\n";
        this->name = name;
        this->id = id;
        this->mark = mark;
    }
    Student(string name) {
        cout << "mot doi tuong Student duoc khai bao voi ten\n";
        this->name = name;
    }
    ~Student() {
        cout << "1 doi tuong Student bi huy\n";
    }
};


// getter/setter


signed main(void) {
    
    Student a = { "Nam", 2, 7.5 };
    
    Student b = { "Nguyen Van A", 3, 9.3 }; 
    a.getInfo();
    
    return 0;
}