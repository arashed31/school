/*  This file shows the basic things needed in any C program.
    I will include the C program basics below and the comments
    on those basics as C comments, delimited by slash-star and
    star-slash.  So what you're reading now is a comment */

/*  First off, every C program starts with some number of 
    header files, that are "included" in the program.  We'll
    start with the basic include, stdio.h  which stands for the
    standard input/output (I/O). header.  A "header" file is
    one that tells the C compiler what functions, in addition to
     what is written in this file, are needed for the program. */

#include <stdio.h>   /* the brackets < and > are used to 
                        indicate that stdio.h is a standard
                        header file  */

/* Next, a C program consists of one or more functions.  Each
   C program must have a single function called "main".  Below
   is a very simple main function, with comments for each line  */

int main() { /*  int means, in this case, that main "returns" an integer.
                 We'll discuss return values later.  For now just start
                 your main function just like this.  The () is where
                 we would put arguments to the function.  We'll discuss
                 that later as well.  */

  /* each function includes a definition, as above, and some
     "code" enclosed in matched curly braces { }.  So, this
     '{' indicates the start of the code.  */
   

	printf("Hello World\n");   /* This command, within the program,
                                will cause "Hello World" to be printed
	                              on the terminal in front of you */

	return 0;  /* Since main (above) says it will return an integer
                our program needs to do that.  This statement specifies
                that the integer to return is 0.  */
 
}	// And here's the curly brace to end the program.

// Note that each "executable" line (the printf and return statements) within
// the function ends with a ';'.

