#include <iostream>
#include <string>
using namespace std;

class Shape // Jis bhi class ke andar pure virtual function hota hai, woh automatically abstract class ban jaati hai
{
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle\n";
    }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}