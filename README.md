# pstyle

simple c library for formatting print statements

```cmd
git submodule add git@github.com:abschill/pstyle.git pstyle
```

```c
#include "pstyle/pystyle.h"

int main() {
    pstyles(*yellow, "Hello World\n");
}

```

## Functions

`pstyles(color, msg)`

prints styled `char*` msg in the specified style/color

`pstylesln(color,msg)`

prints styled `char*` msg in the specified style/color + line breaks

`pstylen(color, code)`

prints styled `int` msg in the specified style/color

`pstylenln(color, code)`
prints styled `int` msg in the specified style/color + line breaks

## Colors Available

- red
- green
- yellow
- blue
- purple
- cyan
