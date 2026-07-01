#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() { //virtual func
            cout << "Drawing Shape\n";
        }
};

class Circle : public Shape {
    public:
        void draw() override {  //overriding
            cout << "Drawing Circle\n";
        }
};

int main()
{
    Shape *s = new Circle();
    s->draw();      //calls circle's draw
    delete s;
    return 0;
}
