# Pointers in C

Pointers are variables that store the address of another variable in memory.

Consider the following block of code:

```c
int a = 5;
int *p;
p = &a;
print p; // prints the address of a stored in p 
print &a; // prints the address of a
print &p; // prints the address of p
print *p; // dereferences p printing the value of a
```

| Symbol | Meaning |
| -------------- | --------------- |
| `&`| References the memory address |
| `*`| Follows the memory address to reach the actual value (dereferences) |



## Working with pointers

You can declare pointers with the `*` Symbol
```c
int a = 5
int *p = &a; // creates a pointer p that points to the address of a 
```
The `&` symbol refers to the memory address of a variable.

### Pointers and arrays
Consider the following code:
```c 
int *ptr, arr[5] = {10,20,30,40,50}; 
ptr = arr;
```
We initialize an integer pointer and array of 5 integers. The line `ptr = arr;`
makes the pointer point to the first element in the array. Now, dereferencing
the pointer `*ptr` will retrieve the value at index `0`. Incrementing the
pointer will increment by 4 bytes, leading to the next value, index `1`.

Furthermore, every element in the array is a pointer to the same data type in
arrays of pointers.

`int *ptr_array[5];  // Array of 5 integer pointers`

So each index is a pointer to an int, for example:
```c 
ptr_array[0] = 0x7ffd1234, *ptr_array[0] = 10
ptr_array[1] = 0x7ffd1238, *ptr_array[1] = 20
ptr_array[2] = 0x7ffd123c, *ptr_array[2] = 30
ptr_array[3] = 0x7ffd1240, *ptr_array[3] = 40
ptr_array[4] = 0x7ffd1244, *ptr_array[4] = 50
```

We mainly use arrays of pointers to form an array of strings, referred to as a
string array. Each string is an array itself. So, for this array:

```c 
const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"}; 
// array of pointers to strings
```
This array stores the memory addresses of each element of the array at each
index. So `suit[0]` would retrieve the pointer to `"Hearts"`, but remember
since strings are arrays, we can dereference with `*` to retrieve `"H"`.
