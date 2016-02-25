PFile Utilities
===============

PFile is a binary file format used to store training examples as they occur in machine learning task and is mainly used by researchers in automatic speech recognition.
This package provides a collection of utilities for manipulating "PFiles".  
A short introduction to PFiles can be found at [What are PFiles](https://martin-thoma.com/what-are-pfiles/) (thanks Martin)


Copyright
---------
Written by Jeff Bilmes <bilmes@icsi.berkeley.edu>, 1997

pfile_utils is Copyright (c) 1997-2005 The International Computer Science Institute. All rights reserved.  
See the file [LICENSE](https://github.com/Marvin182/pfile-utilities/blob/master/LICENSE) in the sourcge directory for more details.


Install
-------

### OS X
There is a homebrew formula in [my personal tap](https://github.com/Marvin182/homebrew-zapfhahn). You can use it by:
```
brew tap Marvin182/zapfhahn
brew install pfile-utils
```

### Linux
See Build from Source section

### Windows
See Build from Source section


Prerequisites
-------------

Pfile_utils needs the QuickNet3 MLP library. You can get it from http://www1.icsi.berkeley.edu/Speech/qn.html.

Build from Source
-----------------

Pfile_utils is configured under GNU Autoconf for ease of installation.  
It does, however, depend on several other pieces.  Hence, ./configure 
accepts the following specific options:


--with-quicknet=DIR  
	Where to find the QuickNet library.	This should point to the "lib" directory. The configure script will look in lib/pkgconfig for the quicknet3.pc package config file.

Once you've located these, it should just be
```
./configure
make
make install
```
