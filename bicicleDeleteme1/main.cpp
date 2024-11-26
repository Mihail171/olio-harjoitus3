#include <iostream>

using namespace std;

class Roof {
private:
    string material;
public:
    void setMaterial(string value){
        material=value;
    }
    string getMaterial(){
        return material;
    }
};

//kirjoita tähän House-luokan koodi
class House{
    Roof roof;
public:
    void setRoof(string material){
        roof.setMaterial("pelti");
    }
    void printData(){
        cout<<roof.getMaterial()<<endl;
    }

};




int main(){
    //täydennä tähän main-funktion koodi
    House b;
    b.setRoof("pelti");
    b.printData();
    return 0;
}

