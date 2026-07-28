# What is Big Integer in C++?
In C++, a Big Integer (or arbitrary-precision integer) refers to a way of handling integers larger than the built-in types can store.

## 🧠Why do we need it?
C++'s built-in integer types have fixed limits:
| Type | Size (bits) | Max Value |
| ---- | ----------- | --------- |
| `int` | 32 | ~2.1 billion (`2^31 - 1`) |
| `long long` | 64 | ~9.2 quintillion (`2^63 - 1`) |
If you want to work with numbers larger than this, you need a custom implementation of Big Integer.

## 🛠️How is Big Integer implemented in C++?
You can either:
1. Use existing libraries, or
2. Implement your own using strings or vectors.