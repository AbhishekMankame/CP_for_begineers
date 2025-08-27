#include <iostream>
#include <string>
using namespace std;

class Shape // Jis bhi class ke andar pure virtual function hota hai, woh automatically abstract class ban jaati hai
{
    virtual void draw() = 0; // Pure virtual function
};