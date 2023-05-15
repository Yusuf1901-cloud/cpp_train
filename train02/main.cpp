#include <iostream>
#include <string>
using namespace std;

class Polygon{

    public:
        int year;
        string color, name;
    
        void drive(){
            cout << "THe car is running "<< name;
        }
    protected:
        bool is_local;
};


class Cat: public Polygon{

    public:
        int id;

        void set_cat_id(){
            id = year + 1000;
        }

        int get_cat_id(){
            return id;
        }
};



int main(){
    Polygon ani;
    ani.year = 23;

    Cat cat01;
    cat01.year = 23;
    cat01.is_local = false;
    cat01.set_cat_id();
    cout << cat01.get_cat_id() << "\t";
    cout << cat01.year;

}

