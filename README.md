# 🤖 learning-c

A bunch of examples I've decided to save while learning C.

## Pointers

Mostly derived from [A TUTORIAL ON POINTERS AND ARRAYS IN C](https://pdos.csail.mit.edu/6.828/2012/readings/pointers.pdf) by Ted Jensen

The easiest way to run examples is:

```bash
# substitute the number "2-1" to run other programs
gcc ./pointers/pointers2-1.c -o test && ./test
```

## Resources

- https://github.com/oz123/awesome-c

## Analyzing memory

```
gcc malloc-struct.c -o test && ./test | hexdump -d
``` 