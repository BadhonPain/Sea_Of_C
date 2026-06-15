<div align="center">

  <img src="https://readme-typing-svg.demolab.com?font=Consolas&size=26&duration=2800&pause=800&color=EB104B&background=D6BAC6&center=true&vCenter=true&width=500&lines=Student_Login%3A+Badhon;Accessing+First_Semester_Archive...;Loading+C_Programs+++++++++++++++%5B100%25%5D;printf(%22Hello%2C+World!%22)%3B" alt="Typing SVG" />

  <br>
  <img src="https://visitor-badge.laobi.icu/badge?page_id=BadhonPain.C_Journey" alt="Visitor Count">

</div>

<h1 align="center">Sea of C — Programming Journey</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language C" />
  <img src="https://img.shields.io/badge/Compiler-GCC%20%2F%20MinGW-orange?style=for-the-badge&logo=gnu&logoColor=white" alt="Compiler GCC" />
  <img src="https://img.shields.io/badge/IDEs-Code::Blocks%20%7C%20VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white" alt="IDEs" />
</p>

---

> **"The only way to learn a new programming language is by writing programs in it."** — *Dennis Ritchie*

Welcome to the digital archive of my C programming journey! This repository contains a structured, modular log of my 1st-semester coding progress, ranging from the fundamental `printf("Hello, World!");` to advanced system concepts like memory management, file handling, and custom macros.

This project has been restructured to offer a clean, educational roadmap for anyone exploring the foundations of computer science and C systems programming.

---

## 🗺️ Curriculum Roadmap

The codebase is organized chronologically and conceptually into 11 modules:

```
Sea of C/
│
├── 01_Introduction/                          # First C Program & Structure
├── 02_Data_Types_Operators/                  # Variables, Operators, Precedence
├── 03_Control_Flow/                          # Conditionals, Loops, & Pattern Printing
├── 04_Functions/                             # Scope, Modular Code, & Recursion
├── 05_Arrays_and_Strings/                    # 1D/2D Arrays, Sorting, & Safe String Handling
├── 06_Pointers/                              # Addresses, Pointer Arithmetic, & Void/Dangling Pointers
├── 07_Structures_Unions_Enums/               # Custom Structs, Unions, & Enum Types
├── 08_Dynamic_Memory_Allocation/             # Heap Allocation (malloc, calloc, realloc, free)
├── 09_File_Handling/                         # File I/O Operations (Text & Binary)
├── 10_Preprocessors_and_Macros/              # Preprocessors, Macros, Header Guards, & CLA
└── 11_Mini_Projects/                         # Interactive Console Games
```

---

## 📁 Repository Breakdown

### 1. [01_Introduction](./01_Introduction)
- **Concepts**: C program skeleton, headers (`#include`), entry point (`main`), return status codes, and standard output (`printf`).
- **Theory**: [Basic Structure Explanation](./01_Introduction/basic_structure_explanation.md).
- **Core Files**: [basic_structure.c](./01_Introduction/basic_structure.c).

### 2. [02_Data_Types_Operators](./02_Data_Types_Operators)
- **Concepts**: Format specifiers (`%d`, `%f`, `%c`), type qualifiers, variable scoping, arithmetic/bitwise/logical/relational operators, and associativity.
- **Theory**: 
  - [Data Types and Variables](./02_Data_Types_Operators/theory/data_types_and_variables.md)
  - [Operators](./02_Data_Types_Operators/theory/operators.md)
  - [Order of Precedence](./02_Data_Types_Operators/theory/order_precedence.md)
- **Practice**: [Practice Problems](./02_Data_Types_Operators/practice/practice_problems.md) (RideShare Bonus Points, temperature conversion, and arithmetic challenge).

### 3. [03_Control_Flow](./03_Control_Flow)
- **Concepts**: Decision making (`if`, `else if`, `switch-case`, ternary operator) and iterative execution (`for`, `while`, `do-while`, nested loops).
- **Sub-folders**:
  - `branching/`: Conditionals and calculators. [Theory: Branching Basics](./03_Control_Flow/branching/theory/branching_basics.md).
  - `loops/`: Loop syntax, input validation, digit sum, and loop exercises.
  - `pattern_printing/`: Multi-loop grid printing, star/number triangles, and diamond grids.

### 4. [04_Functions](./04_Functions)
- **Concepts**: Modular program design, parameters passing, call-by-value vs. call-by-reference, function prototypes, and recursion.
- **Theory**: [Recursion Explanation & Call Stack Diagrams](./04_Functions/recursion/recursion_explanation.md).
- **Core Files**: [recursion_basics.c](./04_Functions/recursion/recursion_basics.c), [writing_functions.c](./04_Functions/examples/writing_functions.c).

### 5. [05_Arrays_and_Strings](./05_Arrays_and_Strings)
- **Concepts**: Continuous memory storage, array traversal, Selection Sort, string manipulation, and safe buffer handling.
- **Sub-folders**:
  - `arrays/`: 1D & 2D arrays, finding min/max, duplicates tracking, reversing arrays, and sorting.
  - `strings/`: Safe input handling via `fgets()` (avoiding buffer overflows), string library functions (`strlen`, `strcpy`, `strcat`, `strcmp`).

### 6. [06_Pointers](./06_Pointers)
- **Concepts**: Memory addresses, pointer arithmetic, double pointers (`int**`), character pointer arrays, null pointers, void pointers, and dangling pointers.
- **Core Files**:
  - [basic_of_pointer.c](./06_Pointers/examples/basic_of_pointer.c)
  - [pointer_arithmetic.c](./06_Pointers/examples/pointer_arithmetic.c)
  - [null_and_dangling_pointers.c](./06_Pointers/examples/null_and_dangling_pointers.c)
  - [void_pointer.c](./06_Pointers/examples/void_pointer.c)

### 7. [07_Structures_Unions_Enums](./07_Structures_Unions_Enums)
- **Concepts**: User-defined complex types, structure sizing (padding & packing), struct arrays, unions (sharing memory), and enums (named integer constants).
- **Theory**:
  - [Unions in C](./07_Structures_Unions_Enums/theory/union_basics.md)
  - [Enumerations (enums)](./07_Structures_Unions_Enums/theory/enum_basics.md)
- **Core Files**: [struct_basic.c](./07_Structures_Unions_Enums/examples/struct_basic.c), [union.c](./07_Structures_Unions_Enums/examples/union.c).

### 8. [08_Dynamic_Memory_Allocation](./08_Dynamic_Memory_Allocation)
- **Concepts**: Heap memory lifecycle, runtime allocation, memory leak prevention, and dynamic multi-dimensional arrays.
- **Theory**: [Why Dynamic Memory Allocation (DMA)](./08_Dynamic_Memory_Allocation/theory/why_dma.md).
- **Core Files**:
  - [malloc / calloc / free / realloc demos](./08_Dynamic_Memory_Allocation/examples)
  - [dynamic_2d_array.c](./08_Dynamic_Memory_Allocation/examples/dynamic_2d_array.c) (dynamic double-pointers).

### 9. [09_File_Handling](./09_File_Handling)
- **Concepts**: Stream files, character/string I/O (`fgetc`, `fputc`, `fgets`, `fputs`), block binary I/O (`fread`, `fwrite`), and EOF marker detection.
- **Core Files**:
  - [01_basic.c](./09_File_Handling/examples/01_basic.c)
  - [struct_file_io.c](./09_File_Handling/examples/struct_file_io.c) (writing records to binary files).
- **Data**: All read/write files are stored inside the centralized `/data` directory.

### 10. [10_Preprocessors_and_Macros](./10_Preprocessors_and_Macros)
- **Concepts**: Macro expansion, stringification, token pasting, header guards, and arguments passed to `main` (`argc`, `argv`).
- **Theory & Guides**:
  - [Macros and Preprocessors](./10_Preprocessors_and_Macros/theory/what_is_macro.md)
  - [Command Line Arguments Overview](./10_Preprocessors_and_Macros/command_line_args/readme.md)
- **Core Files**:
  - [header_guards_demo.h](./10_Preprocessors_and_Macros/examples/header_guards_demo.h) & [header_guards_demo.c](./10_Preprocessors_and_Macros/examples/header_guards_demo.c)
  - [buet_tf.c](./10_Preprocessors_and_Macros/command_line_args/buet_tf.c)

### 11. [11_Mini_Projects](./11_Mini_Projects)
- **Guess the Number**:
  - **Path**: [guess_the_number.c](./11_Mini_Projects/guess_the_number/guess_the_number.c)
  - **Rules**: The computer selects a random number, and the player tries to guess it. The game records the number of attempts and gives hints ("higher" or "lower").
- **Snake Water Gun (Rock Paper Scissors Variant)**:
  - **Path**: [snake_water_gun.c](./11_Mini_Projects/snake_water_gun/snake_water_gun.c)
  - **Rules**: An interactive round-based game played against the computer. Evaluates choices (Snake beats Water, Water beats Gun, Gun beats Snake) and counts scores.

---

## 🛠️ How to Compile & Run

To compile any program in this repository, make sure you have `gcc` (MinGW for Windows) installed.

### 1. Terminal / Command Prompt
Open a terminal in the folder containing the source file and run:
```bash
# Compile
gcc program_name.c -o program_name.exe

# Run
./program_name.exe
```

### 2. VS Code Setup
1. Install the **C/C++** extension by Microsoft.
2. Open the directory in VS Code.
3. Use `Ctrl + Shift + B` to build, or run using the terminal.

### 3. Code::Blocks Setup
1. Open Code::Blocks.
2. Select **File** -> **Open...** and select the `.c` file.
3. Click the **Build and Run** button (or press `F9`).

---

## 📚 Acknowledgements & References
- **Badhon Pain** — Repository owner and Maintainer.
- **"The C Programming Language" (K&R)** by *Brian W. Kernighan* and *Dennis M. Ritchie* — served as the foundational textbook guide for learning standard C programming practices, concepts, and conventions.
- **Prof. Dr. AKM Ashikur Rahman** (Department of CSE, BUET) — who instructed our class and whose lectures and course slides provided the core curriculum, educational framework, and structured examples followed throughout this journey.