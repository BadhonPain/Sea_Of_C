# C Operator Precedence

When multiple operators appear in an expression, **precedence** determines which is evaluated first.  
When two operators share the same precedence, **associativity** determines the direction of evaluation.

---

## Precedence Table (Highest → Lowest)

| Level | Category             | Operators                                | Associativity |
|:-----:|----------------------|------------------------------------------|:-------------:|
| 1     | Primary              | `()` `[]` `.` `->`                       | Left → Right  |
| 2     | Unary                | `+ -` `! ~` `++ --` `* &` `sizeof`      | Right → Left  |
| 3     | Multiplicative       | `* / %`                                  | Left → Right  |
| 4     | Additive             | `+ -`                                    | Left → Right  |
| 5     | Shift                | `<< >>`                                  | Left → Right  |
| 6     | Relational           | `< <= > >=`                              | Left → Right  |
| 7     | Equality             | `== !=`                                  | Left → Right  |
| 8     | Bitwise AND          | `&`                                      | Left → Right  |
| 9     | Bitwise XOR          | `^`                                      | Left → Right  |
| 10    | Bitwise OR           | `\|`                                     | Left → Right  |
| 11    | Logical AND          | `&&`                                     | Left → Right  |
| 12    | Logical OR           | `\|\|`                                   | Left → Right  |
| 13    | Conditional (Ternary)| `? :`                                    | Right → Left  |
| 14    | Assignment           | `= += -= *= /= %= <<= >>= &= ^= \|=`    | Right → Left  |
| 15    | Comma                | `,`                                      | Left → Right  |

---

## Worked Examples

### 1. Multiplicative vs Additive
```c
int x = 2 + 3 * 4;   // * evaluated first → 2 + 12 = 14
```

### 2. Unary vs Multiplicative
```c
int y = -2 * 3;      // unary minus first → (-2) * 3 = -6
```

### 3. Relational vs Arithmetic
```c
int z = 5 + 3 > 7;   // + first → 8 > 7 → 1 (true)
```

### 4. Logical AND before OR
```c
int a = 1 && 0 || 1; // && first → (1 && 0) || 1 → 0 || 1 → 1
```

### 5. Assignment associativity (Right → Left)
```c
int b, c;
b = c = 5;           // right-to-left: c=5, then b=c → b=5
```

### 6. Conditional operator
```c
int m = 5;
int n = (m > 0) ? 1 : 2; // m>0? yes → n=1
```

### 7. Comma operator
```c
int p;
p = (1, 2, 3);       // evaluates left to right, result is 3 → p=3
```

### 8. Bitwise (AND before OR)
```c
int q = 5 | 2 & 3;   // & first → 2&3=2, then 5|2=7
```

---

> **Tip:** When in doubt, use parentheses `()` to make your intent explicit. It avoids bugs and makes code more readable!
