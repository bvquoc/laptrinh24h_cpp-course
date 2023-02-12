#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Movie
{
private:
    string name;
    string category;
    int time;
    vector <string> actors;
public:
    Movie() {
        name = "";
        category = "";
        time = 0;
    }
    Movie(string name, string category, int time, vector <string> actors) {
        this->name = name;
        this->category = category;
        this->time = time;
        this->actors = actors;
    }

    string getName() { return this->name; }
    string getCategory() { return this->category; }
    int getTime() { return this->time; }
    vector<string> getActors() { return this->actors; }

    void setName(string name) { this->name = name; }
    void setCategory(string category) { this->category = category; }
    void setTime(int time) { this->time = time; }
    void setActors(vector <string> actors) { this->actors = actors; }
};

class Actor
{
private:
    string name;
    int yearOfBirthday;
    string gender;
    vector <string> movies;
public:
    Actor() {
        name = "";
        yearOfBirthday = 0;
        gender = "";
    }
    Actor(string name, int yearOfBirthday, string gender, vector <string> movies) {
        this->name = name;
        this->yearOfBirthday = yearOfBirthday;
        this->gender = gender;
        this->movies = movies;
    }

    string getName() { return this->name; }
    int getYearOfBirthday() { return this->yearOfBirthday; }
    string getGender() { return this->gender; }
    vector<string> getActors() { return this->movies; }

    void setName(string name) { this->name = name; }
    void setYearOfBirthday(int yearOfBirthday) {  this->yearOfBirthday = yearOfBirthday; }
    void setGender(string gender) { this->gender = gender; }
    void setActors(vector<string> movies) { this->movies = movies; }
};

signed main(void) {
    #ifdef ziwok
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0); cin.tie(nullptr);

    
    
    return 0;
}