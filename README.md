# Printf

## Synopsis

This is an implementaion of printf function that format and prints data to stdout 🖨️.
The _printf() function returns the total number of characters printed to the stdout(excluding the null byte at the end of strings) after a successful execution.
If an output error is encountered, a negative value of -1 is returned.

The prototype of this function is: int _printf(const char format, ...);

This means that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

Each conversion specification is introduced by the character % and ends with a conversion specifier. In between there may be (in this order):

> Zero or more flags
> An optional field width
> An optional precision modifier
> An optional length modifier

## The flag characters

| Flag | Description |
| ---- | ------------|
|  #   |For o conversions the first character of the output string is made zero (by prefixing a 0 if it was not zero already). For x and X conversions, a nonzero result has the string "0x" or "0X" respectively added.|
