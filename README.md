# ClawC-Basic-Module
The Basic module of **ClawC**

---

### Contents

This module contains Basic math (+-*/%^, factorial) and an extra feature, Quotorial, which is reversed factorial: Quotorial(5) = 5/4/3/2/1
This is the Alpha build so expect errors and bugs if any...

---

### Build

Building steps:

- Go to the main source code:
  ```sh
  cd src
  ```
- Build with GCC:
  ```sh
  gcc test_basic.c basic.c -O3 -lm -o test
  ```
- Run:
  ```sh
  ./test
  ```

- Full Command:
  ```sh
  cd src
  gcc test_basic.c basic.c -O3 -lm -o test
  ./test
  ```

---

### LICENSE

This is under MIT so do whatever you want!

### Sample

Output of `test_basic.c`

```sh
sum(3, 4) = 7
sub(10, 5) = 5
mul(6, 7) = 42
divide(10, 2) = 5       
divide(10, 0) = 0 (safe)
mod(10, 3) = 1
fac(5) = 120
fac(0) = 1
quo(5) = 0.208333       
ipow(2, 5) = 32
ipow(3, 0) = 1
root(16, 2) = 4.000000
root(27, 3) = 3.000000
```

Test program (not `test_basic.c`)

```c
#include <stdio.h>
#include "basic.h"

int main() {
    int x, y;

    printf("Enter numbers: ");
    scanf("%d %d", &x, &y);

    int res = sum(x, y);
    printf("Output: %d\n", res);

    return 0;
}
```

---
