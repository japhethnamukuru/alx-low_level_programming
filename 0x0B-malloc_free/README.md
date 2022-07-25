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

> `Valgrind` - a utility used for validating memory allocation and analyze memory leaks.
