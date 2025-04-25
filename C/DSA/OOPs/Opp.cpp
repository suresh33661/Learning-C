#include <iostream>

class empolyee {
    public:
    std::string name;
    std::string company;
    int age;
    
    void introduce() {
        std::cout << "Hello, my name is " << name  << ", I work at " << company  << " and I am " << age << " years old " << std:: endl;
    }


};

int main() {
    empolyee emp1;
    emp1.name = "John wick";
    emp1.company = "Google";
    emp1.age = 30;
    emp1.introduce();

    empolyee emp2;
    emp2.name = "holland";
    emp2.company = "microsoft";
    emp2.age = 24;
    emp2.introduce();


    
}