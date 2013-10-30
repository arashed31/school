#include "sortAndSearch.h"


int binarySearch(char A[][30], char *key, int low, int high)
{
   int mid;
   int result;

   if( low > high ) return -1;  // failure

   mid = (high + low) / 2;
   
   result = strcmp(A[mid], key);

   if( result == 0 ) return mid;
   else if( result > 0 ) return binarySearch(A,key,low,mid-1);
   else return binarySearch(A,key,mid+1,high); 
}
