#include <iostream>

using namespace std;
class Person{
private:
    int age;
    string name;
public:
    int getAge() const {
        return age;
    }
    void setAge(int value){
        age=value;
    }
    string getName() const {
        return name;
    }
    void setName(string value){
        name=value;
    }
};
int main()
{
    cout << "class example" << endl;
    Person objectPerson1;
    objectPerson1.setAge(23);
    objectPerson1.setName("mihail");
    cout<<objectPerson1.getName()<<endl;
    cout<<objectPerson1.getAge();
    //pe.setAge(22);
   // pe.setName("Mihail Konstantinov");
    Person *objectPerson2;
    objectPerson2=new Person();

    return 0;
}
