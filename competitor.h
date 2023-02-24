#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Competitor {
public:
    Competitor() {
        id = 0;
        name = "";
        age = 0;
        gender = "";
        score = 0.0;
    }
    
    Competitor(int _id, string _name, int _age, string _gender, double _score) {
        id = _id;
        name = _name;
        age = _age;
        gender = _gender;
        score = _score;
    }
    
    Competitor(const Competitor& other) {
        id = other.id;
        name = other.name;
        age = other.age;
        gender = other.gender;
        score = other.score;
    }
    
    Competitor& operator=(const Competitor& other) {
        if (this != &other) {
            id = other.id;
            name = other.name;
            age = other.age;
            gender = other.gender;
            score = other.score;
        }
        return *this;
    }
    
    bool operator==(const Competitor& other) const {
        return id == other.id && name == other.name && age == other.age && gender == other.gender && score == other.score;
    }
    
    friend istream& operator>>(istream& is, Competitor& c) {
        is >> c.id >> c.name >> c.age >> c.gender >> c.score;
        return is;
    }
    
    friend ostream& operator<<(ostream& os, const Competitor& c) {
        os << c.id << " " << c.name << " " << c.age << " " << c.gender << " " << c.score;
        return os;
    }
    
private:
    int id;
    string name;
    int age;
    string gender;
    double score;
};
