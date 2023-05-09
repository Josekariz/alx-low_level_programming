# 0x15. C - File I/O

This repository contains projects related to File Input/Output in C programming language.

## Requirements

All programs and functions are written in C and compiled using `gcc 4.8.4` on Ubuntu 14.04 LTS. They should be compiled with the flags `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, and `-std=gnu89`.

```sh
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <program-source-file.c> -o <program-name>
```

## Projects and Functions

### 0. Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

Prototype:
```C
ssize_t read_textfile(const char *filename, size_t letters);
```

where `letters` is the number of letters it should read and print. The function returns the actual number of letters it could read and print. If the file cannot be opened or read, it returns `0`. If `filename` is `NULL`, it returns `0`. If `write` fails or does not write the expected amount of bytes, it returns `0`.

### 1. Under the snow

Create a function that creates a file.

Prototype:
```C
int create_file(const char *filename, char *text_content);
```

where `filename` is the name of the file to create and `text_content` is a NULL-terminated string to write to the file. The function returns `1` on success and `-1` on failure (file cannot be created, file cannot be written, write "fails", etc.). The created file must have those permissions: `rw-------`. If the file already exists, the function does not change the permissions. If `filename` is `NULL`, it returns `-1`. If `text_content` is `NULL`, it creates an empty file.

### 2. Speak gently, she can hear

Write a function that appends text at the end of a file.

Prototype:
```C
int append_text_to_file(const char *filename, char *text_content);
```

where `filename` is the name of the file and `text_content` is the NULL-terminated string to add at the end of the file. The function returns `1` on success and `-1` on failure. It does not create the file if it does not exist. If `filename` is `NULL`, it returns `-1`. If `text_content` is `NULL`, it does not add anything to the file. It returns `1` if the file exists and `-1` if the file does not exist or if you do not have the required permissions to write the file.

### 3. cp

Write a program that copies the content of a file to another file.

Usage:
```sh
$ ./cp file_from file_to
```

If the number of arguments is not correct, the program exits with code `97` and prints "Usage: cp file_from file_to", followed by a new line, on the POSIX standard error. If `file_to` already exists, the program truncates it. If `file_from` does not exist, or if you cannot read it, the program exits with code `98` and prints "Error: Can't read from file NAME_OF_THE_FILE", followed by a new line, on the POSIX standard error, where `NAME_OF_THE_FILE` is the first argument passed to your program. If you cannot create or if write to `file_to` fails, the program exits with code `99` and prints "Error: Can't write to NAME_OF_THE_FILE", followed by a new