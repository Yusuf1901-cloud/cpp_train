#include <iostream>

using namespace std;


class Polygon{
    public:
        virtual void makeSound(){
            cout << "animal sound \n";
        }
};

class Cat: public Polygon{
    public:
        void makeSound(){
            cout << "cat sound\n";
        }
};


class Dog: public Polygon{
    public:
        void makeSound(){
            cout << "dog sound\n";
        }
};

void playWithAnimals(Polygon& animal){
    animal.makeSound();
}


int main(){
    Cat myCat;
    Dog myDog;

    playWithAnimals(myCat);
    playWithAnimals(myDog);

}