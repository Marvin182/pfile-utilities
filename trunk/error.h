/*
    $Header: /u/drspeech/repos/pfile_utils/error.h,v 1.1.1.1 2002/11/08 19:47:06 bdecker Exp $
  
    Simple fatal error function.
    Jeff Bilmes <bilmes@cs.berkeley.edu>
*/



#ifndef ERROR_H
#define ERROR_H

// Bool doesn't belog here, but it avoids putting it in other files
#ifndef HAVE_BOOL
#ifndef BOOL_DEFINED
enum bool { false = 0, true = 1 };
#define BOOL_DEFINED
#endif
#endif

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS (0)
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE (1)
#endif

void error(char *format, ...);

#endif
