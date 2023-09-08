# Rot_13

Write a program named rot_13 that takes a character string as argument and
displays that string by replacing every alphabetical character by the one
13 positions further.

Obviously an alphabetical is replaced by another one and 'z' -> 'm' and
'Z' -> 'M'.

The program always ends with a newline.

If the number of arguments != 1, the program ends with a newline and nothing
else.

## Examples

"abc" -> "nop\n"
"My horse is Amazing." -> "Zl ubefr vf Nznmvat.\n"
"AkjhZ zLKIJz , 23y " -> "NxwuM mYXVWm , 23l \n"
""	-> "\n"
(no param) -> "\n"

## Constraints

Only `write` from `unistd.h` is allowed.