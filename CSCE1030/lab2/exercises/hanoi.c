
// Tower of Hanoi Recursive Function Example

#include <stdio.h>

void move(int ndisks,
          int start, int finish, int temp) {
          
  // base case
  if (ndisks <= 0) return;
  
  // recursive steps
  move (ndisks-1,start,temp,finish);
  printf ("Move a disk from needle %d to needle %d\n",
              start,finish);
  move (ndisks-1,temp,finish,start);
} // move


int main() {
  int ndisks;
  
  printf ("Tower of Hanoi Recursive Function Example\n\n");
  
  do {
    printf ("Enter the number of disks (1-8): ");
    scanf ("%d",&ndisks);
    if (ndisks >= 0 && ndisks <= 8) break;
    printf ("Please enter a value 1 to 8.\n");
  } while (1);
  
  move (ndisks,1,3,2);
  
  return 0;
}
    
