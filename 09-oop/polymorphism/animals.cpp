#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define MALE 1
#define FEMALE 0

class Animal {
private:
public:
    int age;
    string name;
    bool gender;

    void eat() {
        cout << "eating...\n";
    }
    void sleep() {
        cout << "sleeping...\n";
    }

    virtual void info() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << (this->gender == MALE ? "male" : "female") << "\n";
    }

    virtual void input() {
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Gender (1/0): ";
        cin >> gender;
        cin.ignore();
    }

    virtual void hunt() = 0;
    

};

class Cat : public Animal {
private:

public:
    string featherColor;
    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    void setGender(bool gender) {
        this->gender = gender;
    }
    void setFeatherColor(string color) {
        this->featherColor = color;
    }

    void eat() {
        cout << "Cat ";
        Animal::eat();
    }
    void input() {
        Animal::input();
        cout << "Feather color: ";
        cin >> featherColor;
    }
    void info() { 
        Animal::info();
        cout << "Feather Color: " << this->featherColor << "\n\n";
    }
    void hunt() {
        cout << "Bat chuot\n";
    }
};

class Dog: public Animal
{
private:
    string featherColor;
    string species;
public:
    void setAge(int age){
        this->age=age;
    }
    void setName(string name){
        this->name=name;
    }
    void setGender(bool gender){
        this->gender=gender;
    }
    void setFeatherColor(string color){
        this->featherColor=color;
    }
    void setSpecies(string species){
        this->species=species;
    }

    void eat() {
        cout << name << ' ';
        Animal::eat();
        
    }
    void input() {
        Animal::input();
        cout << "Feather color: ";
        cin >> featherColor;
        cout << "Species: ";
        cin >> species;
    }
    void info() { 
        Animal::info();
        cout << "Feather Color: " << this->featherColor << endl;
        cout << "Species: " << this->species << "\n\n";
    }

    void hunt() {
        cout << "Khong co kha nang\n";
    }

};

signed main(void) {

    // Quan li thong tin cac con vat trong so thu

    int n;
    vector <Animal*> arr;

    cout << "So luong con vat: ";
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin con vat " << i + 1 << endl;

        cout << "Giong loai:\n1. Cho\n2. Meo\nNhap: ";
        int t; cin >> t;

        if (t == 1) arr[i] = new Dog;
        else arr[i] = new Cat;

        arr[i]->input();

    }

    for (auto x : arr) {
        x->info();
    }
    return 0;
}