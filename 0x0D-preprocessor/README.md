## 0x0D. C - Preprocessor

### Code compilation stages

---

**preprocessing**

`CPP` i.e the C preprocessor perfoms all the preprocessing steps including removing comments from the code, fetching code in th `#include` directive and expading `macros`.
The `gcc` compiler can stop at the preprocessing stage when the `-E` option is passed to it i.e `gcc -E main.c` produces the prepeocessed code of the file `main.c`

**Combling**

The `combiler` produces the assembly code  during the combiling stge. Achieved by passing the `-S` option to `gcc`.

**Assembling**

The Assembly code is then fed into the combiler to generate the `object` code. Achievd by pass the `-c` option to `gcc`.

**Linking**

This is the final stage where the `object code` from the assembleris then linked with necessary libraries and files to generate an `executable` file.
---

### Macros

---

#### Object-like Macros

`object-like` **macro** is a simple `identifier` which will e replaced by a code fagment. Commonly used to give symbolic names to numeric constants.
`macros` are created using the `#define` derective, which is followed by the `macro name` and the token sequence it should be an abbreviation for, as so:

```
#define BUFFER_SIZE 1024

```
The above defines a macro `BUFFER_SIZE` as an abbreviation for `1024`. If the above macro is invoked, the C preprocessor will recognize and expand the macro `BFFER_SIZE`.

---

**sample macros**

- [x] [#if]

- [x] [#ifdef]

- [x] [#ifndef]

- [x] [#elif]

- [x] [#undef]

- [x] [#undef]

- [x] [#...]

---

### task list

- [x] [0-object_like_macro.h](0-object_like_macro.h) - creates a macro named `SIZE` as an abbreviation for token `1024`.

- [x] [1-pi.h](1-pi.h) - defines a `macro` named `PI` which is an abbreviation of `3.141592...`.

- [x] [2-main.c](2-main.c) - prints the name of the file it was compiled from.

- [x] [3-function_like_macro.h](3-functio_like_macro.h) - Computes absolute value of a number x

- [x] [4-sum.h](4-sum.h) - function like macro that computes the `sum` of two `integers`.

---

Tada! :tada: :smile: :fire:
