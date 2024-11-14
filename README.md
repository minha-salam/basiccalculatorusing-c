# basiccalculatorusing-c

## Overview

This is a simple calculator program written in C that performs basic arithmetic operations like addition, subtraction, multiplication, and division. The program prompts the user to input two integer values and then an operator. Based on the operator provided, it computes the result and displays it.

## Features

- Performs addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`) operations.
- Handles division by zero by checking if the divisor is zero and displays a custom error message.
- Outputs the result of the operation based on user input.

## How to Use

1. **Input the values**:  
   The program will first ask the user to enter two integer values.  
   Example:  
   ```
   enter the value
   10 5
   ```

2. **Input the operator**:  
   Next, the user will be prompted to enter an operator (`+`, `-`, `*`, or `/`).  
   Example:  
   ```
   enter the operator
   +
   ```

3. **View the result**:  
   Based on the input, the program will compute and display the result of the operation.  
   Example:  
   ```
   sum of numbers 15
   ```

4. **Handle invalid input**:  
   If an invalid operator is entered, the program will display an error message:  
   ```
   invalid operator
   ```

5. **Handle division by zero**:  
   If division is attempted with the second number as zero, the program will display an error message:  
   ```
   enter a number less than first number
   ```

## Example Usage

```
enter the value
5 3
enter the operator
+
sum of numbers 8
```

```
enter the value
10 2
enter the operator
/
quotient of numbers 5
```

```
enter the value
10 0
enter the operator
/
enter a number less than first number
```

```
enter the value
5 2
enter the operator
#
invalid operator
```

## Code Explanation

1. **Input Handling**:  
   The program uses `scanf` to take input for two integers (`a` and `b`) and a character (`operator`) from the user.

2. **Switch-Case for Operations**:  
   The `switch` statement checks the value of `operator` and performs the corresponding operation:
   - For `+`, the program adds `a` and `b`.
   - For `-`, the program subtracts `b` from `a`.
   - For `*`, the program multiplies `a` and `b`.
   - For `/`, the program checks if `b` is not zero before performing the division. If `b` is zero, it prints an error message.
   
3. **Error Handling**:  
   The program checks for invalid operators and division by zero, ensuring that appropriate messages are displayed in such cases.

## Requirements

- A C compiler (e.g., GCC) to compile and run the code.
