## 📌C++ Parameter Passing Cheat Sheet

Use this guide to decide how to pass variables to functions efficiently and correctly in interviews and competitive programming.

--- 

### 🔹String
| Type | Usage | Notes |
| ---- | ----- | ----- |
| `const string& s` | ✅ Best practice | No copy, read-only |
| `string& s` | 🔄 Modify original | Only if you want to change `s` |
| `string s` | ❌ Avoid copying | Makes a full copy (slow) |

### vector<T>
| Type | Usage | Notes |
| ---- | ----- | ----- |
| `const vector<T>& v` | ✅ Best practice | No copy, read-only |
| `vector<T>& v` | 🔄 Modify original | Only if changes needed |
| `vector<T> v` | ❌ Avoid copying | Copies entire vector |
