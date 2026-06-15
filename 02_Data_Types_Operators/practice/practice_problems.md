# Practice Problems — Data Types, Variables & Operators

---

## Problem 01: RideShare Bonus Points

### Description
A ride-sharing company provides reward points to its drivers every year at a fixed bonus rate. Each driver starts with an initial number of points. Every year, the points increase by a certain percentage (bonus rate).

### Input
1. Initial reward points
2. Annual bonus rate (percentage)
3. Number of years `n`

### Output
1. Points after one year
2. Points after two years
3. Points after `n` years

### Example

**Input:**
```
Enter initial points: 1000
Enter annual bonus rate (%): 10
Enter number of years: 3
```

**Output:**
```
Points after 1 year: 1100.00
Points after 2 years: 1210.00
Points after 3 years: 1331.00
```

---

## Problem 02: ASCII Name Puzzle

### Description
Take the first and last letters (uppercase) of your name as input. Add your lucky number to their combined ASCII value, then subtract your unlucky number from the result.

### Example

**For name "Badhon" (B, N), lucky = 22, unlucky = 25:**
```
B + N = 66 + 78 = 144
144 + 22 - 25 = 141
Output: BN->141
```

**For name "Senorita" (S, A), lucky = 78, unlucky = 77:**
```
S + A = 83 + 65 = 148
148 + 78 - 77 = 149
Output: SA->149
```

---

## Problem 03: Wi-Fi Signal Strength

### Description
A Wi-Fi router is at coordinates `(x1, y1)` in a building. A device is at coordinates `(x2, y2)`. The signal strength decreases at a rate of **8.12 Mb per unit distance**. Calculate the final speed when the receiver gets the network.

### Formula
```
distance = sqrt((x2-x1)^2 + (y2-y1)^2)
speed    = initial_speed - 8.12 * distance
```

### Input
- Coordinates of router `(x1, y1)` and device `(x2, y2)`

### Output
- Speed of the network (3 decimal places)
