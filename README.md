# pstyle

simple c library for formatting print statements

```cmd
git submodule add git@github.com:abschill/pstyle.git pstyle
```

```c
#include "pstyle/pystyle.h"

int main() {
    fmtsln(*yellow, "Hello World");
}

```

## Functions

`fmts(color, msg)`

prints styled `char*` msg in the specified style/color

`fmtsln(color,msg)`

prints styled `char*` msg in the specified style/color + line breaks

`fmtn(color, code)`

prints styled `int` msg in the specified style/color

`fmtnln(color, code)`
prints styled `int` msg in the specified style/color + line breaks

## Colors Available

- red
- green
- yellow
- blue
- purple
- cyan
