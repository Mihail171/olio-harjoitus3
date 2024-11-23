#include <iostream>
using namespace std;

class GrandFather {
private:
    string Grandname;

public:
    GrandFather() {}

    void setGrandName(string name) {
        Grandname = name;
    }

    string getGrandName() const {
        return Grandname;
    }
};

class Father : public GrandFather {
private:
    string Fathername;

public:
    Father() {}

    void setFatherName(string name) {
        Fathername = name;
    }

    string getFatherName() const {
        return Fathername;
    }
};

class Son : public Father {
private:
    string name;

public:
    Son(string value) {
        name = value;
        setFatherName("Father of " + value);
        setGrandName("GrandFather of " + value);
    }

    void setName(string n) {
        name = n;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Son objectSon("Kari");
    cout << objectSon.getName() << endl;         // Выводит: Kari
    cout << objectSon.getFatherName() << endl;   // Выводит: Father of Kari
    cout << objectSon.getGrandName() << endl;    // Выводит: GrandFather of Kari

    return 0;
}


