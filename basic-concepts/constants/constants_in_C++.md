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

#### How it works internally?
- Before compilation, the preprocessor replaces every `PI` with `3.14159`.
- So the compiler actually sees:
<pre>
double area = 3.14159 * radius * radius;
</pre>

### 4. Key Points about #define Constants
1. No memory is allocated for the constant - it's just text replacement.
2. Constants are global by default (accessible anywhere after definition).
3. They don't have a type (compiler just replaces text).
    - Example: #define VALUE 10.5 --> This could behave like float or double depending on usage.
4. If you make a typo, compiler won't catch it easily.
<pre>
#define MAX 100
cout << MEX;  // Error, but compiler won’t warn “did you mean MAX?”
</pre>
5. Convention: write #define constants in UPPERCASE (e.g., MAX, PI, SIZE).

### 5. Example with Multiple Constants

<pre>
#include<iostream>
using namespace std;

#define MAX_STUDENTS 50
#define PASS_MARKS 33
#define SCHOOL_NAME "ABC International School"

int main() {
    cout << "School: " << SCHOOL_NAME << endl;
    cout << "Maximum Students Allowed: " << MAX_STUDENTS << endl;
    cout << "Passing Marks: " << PASS_MARKS << endl;
    return 0;
}
</pre>

<pre>
Output:
School: ABC International School
Maximum Students Allowed: 50
Passing Marks: 33

</pre>

### 6. Why use #define for Constants?
- Historically used in C language (before `const` keyword was added in C++).
- Still used for:
    - Global constants (like PI, MAX_SIZE).
    - Conditional compilation (#ifdef, #ifndef).
- But in modern C++, `const`, `constexpr` and `enum` are preferred because they are type-safe.


### Summary
- `#define` is preprocessor directive used to create constants by text replacement.
- Syntax: #define NAME value
- Example: #define PI 3.14159
- Fast and memory efficient (no storage required).
- Not type-safe, no error checking if mistyped.
- Common in C programs and older C++ code, but modern style prefers `const` or `constexpr`.