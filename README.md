# mini-fmt

simple c library for formatting print statements

```cmd
git submodule add git@github.com:abschill/mini-fmt.git minifmt
```

```c
#include "minifmt/minifmt.h"

int main() {
    fmts(*yellow, "Hello World\n");
}

```

## Functions

`fmts(color, msg)`

prints x-formatted `char*` msg in the specified style/color

`fmtsln(color,msg)`

prints x-formatted `char*` msg in the specified style/color + line breaks

`fmtn(color, code)`

prints x-formatted `int` msg in the specified style/color

`fmtnln(color, code)`
prints x-formatted `int` msg in the specified style/color + line breaks

## Colors Available

- red
- green
- yellow
- blue
- purple
- cyan
