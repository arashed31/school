
// Array Example 5 - Sorting an array

#include <stdio.h>
#include <stdlib.h> // for srand() & rand()
#include <time.h> // for time()


// perform Bubble Sort on passed array
void sort (int array[], int size) {
  int x,y, temp;

  for (x = 0; x < size; x++)
   for (y = 0; y < size-1; y++)
     if (array[y] > array[y+1]) {
       // swap the two array elements
       temp = array[y+1];
       array[y+1] = array[y];
       array[y] = temp;
       }
} // sort


void print (int array[], int size) {
  int i;

  for (i=0; i < size; i++)
    printf ("%d ",array[i]);
  printf ("\n\n");
} // print


int main() {
  int Data1[5] = {5,10,2,6,3},
      Data2[10], Data3[30], i;

  sort (Data1,5);
  printf ("Sorted: ");
  print (Data1,5);

  printf ("Read 10 values: ");
  for (i=0; i < 10; i++)
    scanf ("%d",&Data2[i]);

  sort (Data2,10);
  printf ("\nSorted: ");
  print (Data2,10);

  srand(time(NULL));
  for (i=0; i < 30; i++)
    Data3[i] = rand() % 100;

  printf ("Unsorted: ");
  print (Data3,30);

  sort (Data3,30);
  printf ("Sorted: ");
  print (Data3,30);

  return 0;
} // main


