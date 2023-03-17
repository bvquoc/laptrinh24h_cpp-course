#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define MALE 1
#define FEMALE 0

class Animal {

protected:
    int age;
    string name;
    bool gender;

    void eat() {
        cout << "eating...\n";
    }
    void sleep() {
        cout << "sleeping...\n";
    }
    void info() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << (this->gender == MALE ? "male" : "female") << "\n";
    }

    void input() {
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Gender (1/0): ";
        cin >> gender;
        cin.ignore();
    }

};

class Cat : public Animal {
private:
    string featherColor;

public:
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

    void input() {
        Animal::input();
        cout << "Feather color: ";
        cin >> featherColor;
    }
    void info() { 
        Animal::info();
        cout << "Feather Color: " << this->featherColor << "\n\n";
    }
};

class Dog:public Animal
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

};

signed main(void) {

    Cat a;
    a.input();
    a.info();

    Dog b;
    b.input();
    b.info();
    return 0;
}