## Constants in C++ using `#define` Preprocessor

In C++, we often want some values to never change in our program.<br>
For example, the value of pi = 3.14159 should always remain the same.<br><br>

To achieve this, we use <b>constants</b>.<br>
One way is by using the `#define` preprocessor directive.

### 1. What is #define?
- `#define` is a preprocessor directive.
- It tells the preprocessor (the tool that runs before actual compilation) to replace a word with a fixed value everywhere in the code.
<br>

Important:
- `#define` is not a C++ keyword -> It's handled before compilation.
- It creates something like a 'text replacement rule'.

### 2. Syntax
<pre> #define CONSTANT_NAME value </pre>

- CONSTANT_NAME -> the identifier (usually written in UPPERCASE for clarity).
- value -> the fixed value to replace it with.

### 3. Example: Defining a Constant with #define

<pre>
#include<iostream>
using namespace std;

#define PI 3.14159 // PI is now a constant

int main(){
    int radius = 5;

    // Using PI
    double area = PI * radius * radius;

    cout << "Radius: " << radius << endl;
    cout << "Area of Circle: " << area << endl;

    return 0;
}

</pre>