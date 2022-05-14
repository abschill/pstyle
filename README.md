# mini-fmt

simple c library for formatting print statements

```cmd
git submodule add git@github.com:abschill/mini-fmt.git minifmt
```

```c
#include "minifmt/minifmt.h"

int main() {
    prints(*yellow, "Hello World\n");
}

```

## Functions

`prints(color, msg)`

prints `char*` msg in the specified color

## Colors Available

- red
- green
- yellow
- blue
- purple
- cyan
