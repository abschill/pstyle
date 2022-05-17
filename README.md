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

- `red`
- `green`
- `yellow`
- `blue`
- `purple`
- `cyan`
- `black`

## Color Constants

- `<color>.text` - apply color to text
- `<color>.bg` - apply color to bg
- `<color>.bold` - bolden the text with the given color
- `<color>.underline` - underline the text with the given color
- `<color>.hi` - text with high intensity
- `<color>.bhi` - bold text with high intensity

## Helper Macros

- `COLOR_RESET` - resets the terminal styles inline