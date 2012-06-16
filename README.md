# Delta Scripting Language

Visit [the Wiki](https://github.com/rcrmn/delta-script/wiki) for syntax and language information.


## Compiling

To compile, you need [CMake](http://www.cmake.org/) and [Flex](http://flex.sourceforge.net/)

Only tested under mac. Should work under linux. No promises under windows. For [windows Flex try here](http://gnuwin32.sourceforge.net/packages/flex.htm).


To only create the lexer engine c file, run:
```
$ cd /path/to/the/root/dir
$ cmake .
$ make lexerc
```

Now, to compile, run:
```
$ cd /path/to/the/root/dir
$ cmake .
$ make
```

This should create an executable named `delta` in the same directory.


In the future the ability to create static and dynamic libraries (and dlls) will be added, but for now only the executable-product compilation works.


## TODO

 * Create the parser/semantic analyzer. Using Bison or hardcoding?

 * Create the optimizer. This will be, at first, skipped over.

 * Define a bytecode for the compiled executable.

 * Create the code generator.


In the future, the lexer will probably be implemented without the Flex library. Just for fun.


## Contributors

 * [rcrmn](https://github.com/rcrmn) (Roc)


