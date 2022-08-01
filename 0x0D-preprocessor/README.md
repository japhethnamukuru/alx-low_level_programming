## 0x0D. C - Preprocessor

### Code compilation stages

**preprocessing**

`CPP` i.e the C preprocessor perfoms all the preprocessing steps including removing comments from the code, fetching code in th `#include` directive and expading `macros`.
The `gcc` compiler can stop at the preprocessing stage when the `-E` option is passed to it i.e `gcc -E main.c` produces the prepeocessed code of the file `main.c`

**Combling**

The `combiler` produces the assembly code  during the combiling stge. Achieved by passing the `-S` option to `gcc`.

**Assembling**

The Assembly code is then fed into the combiler to generate the `object` code. Achievd by pass the `-c` option to `gcc`.

**Linking**

This is the final stage where the `object code` from the assembleris then linked with necessary libraries and files to generate an `executable` file.

