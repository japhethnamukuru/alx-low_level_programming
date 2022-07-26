## 0X0B. C - malloc, free

### Atomatic and Dynamic memory allocation

**Automatic** memory allocation is implicit to the compiler. The compiler computes the amount of memory resource required for program execution.
The memory is allocated from the `stack segment` of the memory block. 

**Dynamic** memory allocation is explicit to the program however. The programmer specifies the amount of memoery to allocate to the program from the `heap` segment of the memory block.

#### malloc and free

---

`malloc` - This is a C routine for dynamically allocating memory to programm during execution. The memory is requested from the `heap` segment of the memory block.
If access is granted, the host `OS` reserves the requested memory and `malloc`  returns a `pointer` to the reserved space.

`free` - C routine for freeing the dynamically allocated memory using `malloc`.

---

> `Valgrind` - a utility used for validating memory allocation and analyze memory leaks is useful for such tasks.

---
- [x] [o-create_array.c](0-create_array.c) - Creates and dynamically assigns memory to an array from given characters.

- [x] [1-strdup.c](1-strdup.c) - Returns a pointer to a duplicated pointer.

- [x] [2-str_concat.c](2-str_concat.c) - concatenates a strings.

- [x] [3-alloc_grid.c](3-alloc_grid.c) - Returns a pointer to a 2d array of integers

- [x] [4-free_grid.c] (4-free_grid.c) - Frees memory previously allocated to 2D array in `3-alloc_grid.c`.
