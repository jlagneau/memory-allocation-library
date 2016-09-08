# libft_malloc

---

## How to use

### Linux

    make
    export LD_PRELOAD=./libft_malloc.so
    ...
    unset LD_PRELOAD # Once you're done.

### Mac OS

    make
    export DYLD_LIBRARY_PATH=.
    export DYLD_INSERT_LIBRARIES=libft_malloc.so
    export DYLD_FORCE_FLAT_NAMESPACE=1
    ...
    unset DYLD_* # Once you're done.

## Debug

You can compile a debug version with `make debug`.
