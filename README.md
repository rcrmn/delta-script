# Delta Scripting Language

Visit [the Wiki](https://github.com/rcrmn/delta-script/wiki) for syntax and language information.


## Compiling

To compile, you need [CMake](http://www.cmake.org/) and [Flex](http://flex.sourceforge.net/)

Only tested under mac. Should work under linux. No promises under windows. For [windows Flex try here](http://gnuwin32.sourceforge.net/packages/flex.htm).

Theoretically the Flex library is not needed in the system to build if the lexer c file is already provided.

To create only the lexer engine c file, run:
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

 * Finish the language syntax definition.

 * Finnish the lexer.

 * Create the parser/semantic analyzer 
([Bison](http://www.gnu.org/software/bison/) / [Berkeley Yacc](http://invisible-island.net/byacc/byacc.html) ?).

 * Create the optimizer. This will be, at first, skipped over.

 * Define a bytecode for the compiled executable.

 * Create the code generator.

 * Create the virtual machine.


## Contributors

 * [rcrmn](https://github.com/rcrmn) (Roc)

## Interesting links

 * [FLEX Manual](http://flex.sourceforge.net/manual/)
 * [BISON Manual](http://www.gnu.org/software/bison/manual/html_node/index.html)
 * [BYACC Manual]() <-- Search for this.
 * [Create Your own Prog. Lang.](http://createyourproglang.com/)

