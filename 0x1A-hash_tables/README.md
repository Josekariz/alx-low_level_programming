Great! In that case, please replace `[Your Name]` in the README with "Jos". Here's the updated consolidated README:

```
# C - Hash Tables

In this project, we implement hash functions and hash tables in C. Hash tables are data structures that provide efficient key/value pair storage and retrieval. We'll be implementing various operations on hash tables, including creating a hash table, adding elements, retrieving values, printing the contents, and deleting the hash table.

## Files and Functions

### 1. hash_tables.h

This header file contains the definitions and prototypes for all the types and functions used in the project.

### Implementation Files

- `0-hash_table_create.c`: Implements the `hash_table_create` function.
- `1-djb2.c`: Implements the `hash_djb2` function.
- `2-key_index.c`: Implements the `key_index` function.
- `3-hash_table_set.c`: Implements the `hash_table_set` function.
- `4-hash_table_get.c`: Implements the `hash_table_get` function.
- `5-hash_table_print.c`: Implements the `hash_table_print` function.
- `6-hash_table_delete.c`: Implements the `hash_table_delete` function.
- `100-sorted_hash_table.c`: Implements functions for the sorted hash table.

## Functions

- `hash_table_create`: Creates a hash table.
- `hash_djb2`: Implements the djb2 hashing algorithm.
- `key_index`: Returns the index for a given key in the hash table.
- `hash_table_set`: Adds an element to the hash table.
- `hash_table_get`: Retrieves the value associated with a key in the hash table.
- `hash_table_print`: Prints the contents of the hash table.
- `hash_table_delete`: Deletes the hash table.
- `shash_table_create`: Creates a sorted hash table.
- `shash_table_set`: Adds an element to the sorted hash table.
- `shash_table_get`: Retrieves the value associated with a key in the sorted hash table.
- `shash_table_print`: Prints the contents of the sorted hash table.
- `shash_table_print_rev`: Prints the contents of the sorted hash table in reverse order.
- `shash_table_delete`: Deletes the sorted hash table.

## Getting Started

To compile the program, you can use the following command:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```

To run the program, use:
```
./hash_table
```

Make sure to include all the necessary files and functions in your compilation.

## Testing

The project includes a `tests` folder with test files to verify the correctness of the implemented functions. To run the tests, compile the test file along with the implementation files:
```
gcc -Wall -Werror -Wextra -pedantic tests/test_file.c *.c -o test_hash_table
```

Then, run the test executable:
```
./test_hash_table
```

Make sure to update the file name in the command with the appropriate test file you want to run.

## Contributors

This project was implemented by Jos.
```

Feel free to copy and use this consolidated README for your project.