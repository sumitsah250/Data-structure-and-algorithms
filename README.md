<h1 align="center">📚 Data Structures & Algorithms Practice</h1>
<p align="center">
  By Sumit Sah | Android Developer & AI Enthusiast<br>
  Collection of DSA problems and implementations in C++ and Python
</p>

<p align="center">
  <a href="https://github.com/sumitsah250/dsa-practice"><img src="https://img.shields.io/badge/GitHub-View%20Code-black?logo=github"></a>
  <a href="https://www.linkedin.com/in/your-linkedin"><img src="https://img.shields.io/badge/LinkedIn-Connect-blue?logo=linkedin"></a>
</p>

---

<h2 align="center">🚀 Overview</h2>

This repository contains **Data Structures and Algorithms (DSA) practice problems** implemented in C++ and Python.  
It covers **core DSA concepts** such as **arrays, linked lists, stacks, queues, trees, recursion, sorting, and HashMaps**.  
The repository serves as a **learning hub for problem-solving and algorithmic thinking**.

---

<h2 align="center">📂 Project Structure</h2>

| Folder/File | Description |
|-------------|-------------|
| **.vscode/** | VSCode workspace configuration |
| **HashMaps/** | Problems and implementations using hash maps, e.g., number of paths |
| **Trees/** | Tree-based problems and solutions |
| **linked_list/** | Linked list concepts and practice problems |
| **recursion/problem/** | Recursion exercises and problem-solving |
| **sorting/** | Sorting algorithms and exercises |
| **stack and queue/** | Stack and queue implementation and practice |
| **no_of_paths.cpp** | Example problem: counting number of paths |
| **q24_balanced_parenthesis.cpp** | Balanced parenthesis problem |
| **q25_single_number.py** | Single number problem |
| **q8_infix_to_postfix_expressions.cpp** | Infix to postfix conversion, recursion, and time complexity analysis |
| **tempCodeRunnerFile.cpp** | Miscellaneous practice code |
| **visual_no_of_paths.cpp** | Visualization for number of paths problem |

---

<h2 align="center">🛠️ Concepts Covered</h2>

- **Arrays & HashMaps:** Counting paths, frequency mapping  
- **Linked Lists:** Conceptual understanding and implementation  
- **Stacks & Queues:** Standard operations and problem-solving  
- **Trees:** Traversals, path counting, and tree-based problems  
- **Recursion:** Recursive problem-solving and time complexity analysis  
- **Sorting:** Implementations and algorithm comparisons  
- **Miscellaneous:** Balanced parenthesis, infix-to-postfix, single number problems  

---

<h2 align="center">📊 Example Usage</h2>

```cpp
// Example: Balanced Parenthesis
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(') s.push(c);
        else if (c == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string expr = "((())())";
    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
