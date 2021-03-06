/* ******************************************************************** */
/*                                                                      */
/* Set.c --- this is the .c file associated with the (major 2) Set      */
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

#include "set.h"

char names[320][30];   // our array of names that represent the "universe"


void setUnion(Set set1, Set set2, Set result)
{
    int i;
    for( i = 0; i < 10; i++ )
        result[i] = set1[i] | set2[i];
    return;
}

void setIntersection(Set set1, Set set2, Set result)
{
    int i;
    for( i = 0; i < 10; i++ )
        result[i] = set1[i] & set2[i];
    return;
}

void clearSet(Set set)
{
    int i;
    for( i = 0; i < 10; i++ )
        set[i] = 0;
}

void add2Set(Set set, int value)
{
    int word; 
    unsigned int mask;

    assert( value >= 0 && value <= 319 );
    mask = 1 << value % 32;
    word = value / 32;
    set[word] |= mask;
}

void deleteFromSet(Set set, int value)
{
    int word; 
    unsigned int mask;

    assert( value >= 0 && value <= 319 );
    mask = 1 << value % 32;
    word = value / 32;
    set[word] |= mask;
    set[word] ^= mask;
}

int isMember(Set set, int element)
{
    int word; 
    unsigned int mask;

    assert( element >= 0 && element <= 319 );
    mask = 1 << element % 32;
    word = element / 32;
    return set[word] & mask;
}

void printSet(Set set)
{
    int i;
    int firstElement = 1;   // "true"
    printf("{ ");

    for( i = 0; i < 320; i++ )
        if( isMember(set,i) )
        {
            if( firstElement )
            {
               printf("%s",names[i]);
               firstElement = 0;  // "false"
            }
            else
               printf(", %s",names[i]);
        }
    printf(" }\n");

}


int nameIsMember(Set set, char *name)
{
    int searchResult;
    searchResult = binarySearch(names,name,0,319);
    assert(searchResult != -1);
    return isMember(set,searchResult);;
}

void addName2Set(Set set, char *name)
{
    int searchResult;
    searchResult = binarySearch(names,name,0,319);
    assert(searchResult != -1);
    add2Set(set,searchResult);
}

void deleteNameFromSet(Set set, char *name)
{
    int searchResult;
    searchResult = binarySearch(names,name,0,319);
    assert(searchResult != -1);
    deleteFromSet(set,searchResult);
}

