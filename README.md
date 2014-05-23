CMake tutorial
==============

This git repository contains the source code used during my [presentation on
CMake](https://docs.google.com/presentation/d/19Vkkcrx80SnIhjYH1SMDKR7k1UZ0dnjEm3rVNiFZA4s/edit?usp=sharing)

Each tag represents a different stage during the tutorial and are numbered.

Building project
================

List the tags

```
$ cd /SOMEPATH/
$ git clone https://github.com/delcypher/cmake-tutorial source
$ cd source
$ git tag -l
```

pick the stage of the project you're interested in

```
$ git checkout <tagname>
```

Now let's build. We'll do an out of source build of course!

```
$ cd /SOMEPATH/
$ mkdir build
$ cd build
$ cmake ../source
$ make
```

Note the 0th tag doesn't build because there is no CMake build
system present at that time.

Tips
====

- Remember you can use ``ccmake`` or ``cmake-gui`` instead of
the ``cmake`` command. These commands make it easier to discover
and set available build options.

- Remember you don't have to use ``make``. You can use
  many different build systems (e.g. Ninja) by setting the
  generator using the ``-G`` flag or by using the GUI in
  ``cmake-gui``.
