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

    void info() { 
        Animal::info();
        cout << "Feather Color: " << this->featherColor << "\n\n";
    }
};

// class Dog: 

signed main(void) {

    Cat myCat;
    myCat.setAge(2);
    myCat.setName("My Dieu");
    myCat.setGender(FEMALE);
    myCat.setFeatherColor("yellow");

    myCat.info();

    return 0;
}
