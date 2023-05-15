#include <iostream>

using namespace std;


class Polygon{
    public:
        virtual void makeSound(){
            cout << "IT is polygon !!!\n";
        }
};

class Hexagon: public Polygon{
    public:
        void makeSound(){
            cout << "6 sided polygon!!\n";
        }
};


class Pentagon: public Polygon{
    public:
        void makeSound(){
            cout << "5 sided polygon\n";
        }
};


int main(){
    Polygon *P;

    Hexagon h;
    Pentagon p;

    P = &h;
    P -> makeSound();

    P = &p;
    P -> makeSound();
}