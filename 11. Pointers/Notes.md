# Pointers

## Quick Recap

1. **What are pointers ? Define Pointers.** <br>
Pointers are variables that stores the address of other variables. <br>

2. **Which Number System is used to identify the pointer's address** <br>
Hexadecimal

3. **How would you like to explain memory ?** <br>
Memory has the following components
> 1. Name - which is a variable name
> 2. Type - which is datatype
> 3. Value - which is stored data
> 4. Address - which is its location
> 5. Its analogy can be our home where Name:Bungalow, Type:Human or Pet, Value:Everything Inside, Address:Physical Location

4. **How would you declare a pointer ?** <br>
`{datatype} *{pointerName};` Or `{datatype}* {pointerName};`

5. **How to get the address of a variable ?** <br>
By using `referencing` or `address of` operator, which is denoted by ampersand symbol `&`, e.g. `&{variableName}`

6. **How to get the value of the address stored in the pointer ?** <br>
By using `de-referencing` or `value at address` operator, which is denoted by ampersand symbol `*`, e.g. `*{pointerName}`

7. **Why do we use `*` while declaring pointer ?**
The character asterisk (*) tells to the compiler that the identifier/variable should be declared as pointer of that datatype rather than normal variable.

8. **List the operations that can be performed in Pointer Arithmetic** <br>
`++`, `--`, `+`, `-`

9. **Can you do arr++ ?** <br>
No, its value is constant you can't change. //Illegal

10.  **How can you think of `arr+i` ?** <br>
`arr` can be thought of an indexing pointer, so whenever we increment we are incrementing its index.

11. **What is the best advantage and use case of pointers ?** <br>
Pass/Call by Reference/Address over Pass/Call by value. With this we can easily access the values in any function. Best example is Swap Function

## Programs

1. **Get Started**
2. **Pointers Arithmetic**
3. **Pointers Array**
4. **Pointer to Pointer**
5. **Swap Function**
