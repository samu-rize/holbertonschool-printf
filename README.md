# ASR Software Enginering Printf Team Project 💻

## Printf 

### Synopsis
<h3 style="color:red;">Not all features is implemented 🚧</h3>
This is an implementaion of printf function that format and prints data to stdout 🖨️.
The _printf() function returns the total number of characters printed to the stdout(excluding the null byte at the end of strings) after a successful execution.
If an output error is encountered, a negative value of -1 is returned.

The prototype of this function is: int _printf(const char format, ...);

This means that it has one mandatory format argument, and an extra number of arguments that can be none, or many.

Each conversion specification is introduced by the character % and ends with a conversion specifier. In between there may be (in this order):

> Zero or more flags.
> 
> An optional field width.
> 
> An optional precision modifier.
> 
> An optional length modifier.

### The flag characters

| Flag | Description |
| :---- | :------------:|
|  `#`   |For o conversions the first character of the output string is made zero (by prefixing a 0 if it was not zero already). For x and X conversions, a nonzero result has the string "0x" or "0X" respectively added.|
|  `0`   | (Not implemented yet) The value should be zero padded. For d, i, o, u, x, and X the converted value is padded on the left with zeros. If the 0 and - flags both appear,the 0 flag is ignored. If a precision is given with a numeric conversion, the 0 flag is ignored.|
|  `-`   |The converted value is to be left adjusted on the field boundary, (Default is right justification) and padded with blanks in the right rather than on the left .|
|  `''`  | (Blank Space) The argument is padded with a single blank space before a positive number or empty string produced by a signed conversion. |
|  `+`   | A sign (+ or -) should always be placed before a number produced with a signed conversion. By default, only negative numbers have this sign. |


