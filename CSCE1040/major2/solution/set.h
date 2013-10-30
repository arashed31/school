/* ******************************************************************** */
/*                                                                      */
/* Set.h --- this is the .h file associated with the (major 2) Set      */
/*           implementation used in Spring 2012's CSCE 1040 class.      */
/*                                                                      */
/*           This assignment includes 10 functions to be implemented    */
/*           in Set.c, namely                                           */
/*                                                                      */
/*                 clearSet                                             */
/*                 add2Set                                              */
/*                 deleteFromSet                                        */
/*                 isMember                                             */
/*                 printSet                                             */
/*                 setUnion                                             */
/*                 setIntersection                                      */
/*                                                                      */
/*  And new for major 2                                                 */
/*                 nameIsMember                                         */
/*                 addName2Set                                          */
/*                 deleteNameFromSet                                    */
/*                                                                      */
/*                                                                      */
/*  Author:  Philip Sweany                                              */
/*  No rights reserved                                                  */
/*                                                                      */
/* ******************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// defining new type(s)
typedef unsigned int Set[10];

// declaring global variable(s)
extern char names[320][30];   // we need (for major 2 anyway) a global array of
			      // character strings (names) that we can consider
                              // our database.  You should put the actual 
                              // declaration of this database in set.c. In
                              // In fact, to make sure that we all do this,
			      // I've included a set.c file in this directory.
			      // Use it to start you set.c.  Do NOT remove
			      // anything from the set.c I provide BUT, you'll
			      // have to add to it significantly.
                               

extern void setUnion(Set set1, Set set2, Set result);
extern void setIntersection(Set set1, Set set2, Set result);
extern void clearSet(Set set);
extern void add2Set(Set set, int value);
extern void deleteFromSet(Set set, int value);
extern int isMember(Set set, int element);


extern void printSet(Set);		    // this time printSet should
					    // print the character string
                                            // names rather than just the
					    // integer values of the bit
                                            // position.

extern int nameIsMember(Set set, char *);   // find the array index associated
                                            // with the name passed as a 2nd
                                            // argument and call isMember 
                                            // to see if that index is in the
                                            // set.

extern void addName2Set(Set set, char *);   // find the array index associated
                                            // with the name passed as a 2nd
                                            // argument and call add2Set 
                                            // with that index to add to 
                                            // the set.

extern void deleteNameFromSet(Set set, char *); // find the array index 
                                                // associated with the name 
                                                // passed as a 2nd argument and
						// call add2Set with that index
						// to remove it  from the set.
