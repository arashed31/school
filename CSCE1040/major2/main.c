/* ****************************************************************** */
/*                                                                    */
/* main.c --- driver to test the set implementation                   */
/*                                                                    */
/* Author: Philip Sweany                                              */
/* No rights reserved                                                 */
/*                                                                    */
/* ****************************************************************** */

#include "set.h"
#include "sortAndSearch.h"

void print(char A[][30], int size);

int main()
{
    char buffer[80];
    int i, index;
    Set set1, set2, set3;

    i = 0;  
    while ( (scanf("%s",buffer)) != EOF )
    {
        strcpy(names[i],buffer);
        i++;
    }
    printf("The initial data is:\n");
    print(names,i);
    bubbleSort(names,i);
    printf("\n\nThe sorted data is:\n");
    print(names,i);

    clearSet(set1);
    clearSet(set2);
    clearSet(set3);

    printf("Adding Warner, Faulk and Pace to set1:\n");
    addName2Set(set1,"Warner");
    addName2Set(set1,"Faulk");
    addName2Set(set1,"Pace");
    printf("Set1 = ");
    printSet(set1);

    printf("Adding Snider, Robinson and Koufax to set2:\n");
    addName2Set(set2,"Snider");
    addName2Set(set2,"Robinson");
    addName2Set(set2,"Koufax");
    printf("Set2 = ");
    printSet(set2);

    setUnion(set1, set2, set3);
    printf("The union of sets 1 and 2 is: ");
    printSet(set3);
    
    printf("The intersection of sets 3 and 2 is: ");
    setIntersection(set3, set2, set3);
    printSet(set3);

    printf("Deleting Snider from set3:\n");
    deleteNameFromSet(set3,"Snider");    
    printf("Set3 = ");
    printSet(set3);
}

void print(char A[][30], int size)
{
    int i;
    for( i = 0; i < size; i++ )
    {
        printf("%s\n", A[i]);
    }
}

