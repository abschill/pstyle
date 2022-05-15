# pstyle

simple c library for formatting print statements

```cmd
git submodule add git@github.com:abschill/pstyle.git pstyle
```

```c
#include "pstyle/pystyle.h"

int main() {
    printf("%s%s", red.text, "Hello in Red")
}

```

## Colors Available

- red
- green
- yellow
- blue
- purple
- cyan
- black

## Color Constants

- text - apply color to text
- bg - apply color to bg
- bold - bolden the text with the given color
- underline - underline the text with the given color
- hi - text with high intensity
- bhi - bold text with high intensity