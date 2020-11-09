# Character Array

## Quick Recap
1. Array of Characters is called Character Array.
2. Syntax for Declaration ```char {arrayName}[size+1];```
3. Note: "size+1" is to ensure **null character** at the end.

# Things to Learn from Programs

## 1. Check Null
1. **String Input** is always in between **“...”**
2. **Any Character** is always in between **‘...’**
3. **Null Character** is represented by **‘\0’**
4. **ERROR** Most Probably in condition of Loop.
5. **IMPORTANT**  Whenever we create a character array and pass string "GitHub" null is automatically added to the end.

## 2. Input And Output
1.  With ```cin``` function and input of "Microsoft GitHub", only Microsoft will be considered.

## 3. Palindrome Check
1. Cool Examples of Palindrome
"Racecar", "Nitin", "Level", "Madam", "Mom", "Noon".
2. Use Flag Approach, Initialize flag = True
3. You need one condition where characters are not equal then set flag = true and break
4. Last word check can be performed ```n-1-i```
5. In Highly Optimized Approach, you just need to traverse n/2 times irrespective of even or odd number of characters.

## 4. The Largest Word In Sentence - Output Size & Word
1. Using Function `cin.getline` and `cin.ignore` (alternative you can use flush function too)
2. 

## Doubts
1. Why don't we enter null character while giving input ? <br>
Compiler Automatically adds at the end.
2. How to take string input with spaces like "Microsoft GitHub" ? <br>
Use function ```cin.getline(arr,size);``` followed by ```cin.ignore;``` to clear the buffer
3. In Palindrome Question, what if word's input size < char array size ? How to determine the size ?
4. With only racecar as input, how to understand the outputs.
5. What the hell is buffer is now ? How it works ?
6. How to use flush function ?
7. Why Null Character by the way ?
...**[Pending]**