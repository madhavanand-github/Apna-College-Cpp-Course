# Pointers

## Quick Recap

1. **What are pointers ? Define Pointers.** <br>
Pointers are variables that stores the address of other variables. <br>

2. **Which Number System is used to identify the pointer's address** <br>
Hexadecimal. `0x` is a prefix that tells the compiler that the value written is in hexadecimal.

3. **How would you like to explain memory ?** <br>
I would like to explain memory with four components
> 1. Name - which is a variable name
> 2. Type - which is datatype
> 3. Value - which is stored data
> 4. Address - which is its location
> 5. Its analogy can be our home where Name: Bungalow, Type: Human/Pet, Value: Everything Inside, Address: Physical Location

4. **How would you declare a pointer ?** <br>
`{datatype} *{pointerName};` Or `{datatype}* {pointerName};` Star/Asterisk Symbol `*` just indicates that this is a special variable, technically a pointer.

5. **How to get the address of a variable ?** <br>
By using `referencing` or `address of` operator, which is denoted by ampersand symbol `&`, e.g. `&{variableName}`

6. **How to get the value of the address stored in the pointer ?** <br>
By using `de-referencing` or `value at address` operator, which is denoted by ampersand symbol `*`, e.g. `*{pointerName}`

7. **Why do we use `*` while declaring pointer ?**
The asterisk (*) tells to the compiler that the identifier/variable should be declared as pointer of that datatype rather than normal variable.

8. **List the operations that can be performed in Pointer Arithmetic** <br>
`++`, `--`, `+`, `-`

9. **Can you do arr++, if arr is an array of any datatype ?** <br>
No, `arr` is constant or not a variable. So, you can't change. //Illegal

10.  **What do you think of `arr+i` ?** <br>
`arr` can be thought of an indexing pointer, so whenever we increment we are incrementing its index.

11. **What is the best advantage and use case of pointers ?** <br>
Pass/Call by Reference/Address over Pass/Call by value. With this we can easily access the values in any function. The Best example is Swap Function

12. **Why does a memory address start with 0x?** <br>
The `0x` is just a notation to let you know the number is in hexadecimal form. <br>
Same as you'd write `042` for an octal number, or `42` for a decimal one. <br>
So - `42 == 052 == 0x2A`. <br>

13. **Why we use `0` and `x` to represent hex number ?** <br>
The `0` helps the parser(part of Compiler Design) know that it is dealing with a **(constant) number** and the `x` stands for **hex**. <br>
....then how parser know in case of Decimal number because it is not preceded by 0. <br>
It knows by exclusion. If it's not 0 or 0x, it's decimal :) <br>

14. How would you like to generalize the expression `VariableAddress + N` ? <br>
`VariableAddress + N = base address + (N * sizeOf(dataType))`

## Programs

1. **Get Started**
2. **Pointers Arithmetic**
3. **Pointers Array**
4. **Pointer to Pointer**
5. **Swap Function**

## Extra Resources
[Why does a memory address start with 0x?](https://stackoverflow.com/questions/11467715/why-does-a-memory-address-start-with-0x) <br>
[Why are hexadecimal numbers prefixed with 0x?](https://stackoverflow.com/questions/2670639/why-are-hexadecimal-numbers-prefixed-with-0x) <br>
[Address of a Variable in C++](https://youtu.be/2-JtIawbaTw)
