# **📝 TODO Manager in C**  

A lightweight command-line task manager written in **C**. Perfect for tracking daily tasks with minimal dependencies.  

---

## ✨ **Features**  
- ✅ **Add tasks**  
- ❌ **Delete tasks**  
- 📋 **List all tasks**  
- ✔️ **Mark tasks as complete**  
- 💾 **Save/Load tasks** (persistent storage)  

---

## 🛠️ **Installation**  

### **Requirements**  
- GCC compiler  
- GNU Make  

### **Steps**  
1. Clone the repo:  
   ```bash
   git clone github.com/skinwalker3654/todo-program.git
   ```
2. Compile & run
   ```bash
   cd todo-program
   make && make run
   ```

# FILE STRUCTURE
todo-manager/
├── src/
│   ├── main.c        # Program entry point
│   ├── todo.c        # Core functionality
│   └── todo.h        # Header file
├── bin/
│   ├── main          # Compiled binary
│   └── tasks.txt     # Task database
├── Makefile          # Build configuration
├── LICENSE           # MIT License
└── README.md         # This file
