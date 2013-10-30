
// Simple Function Example 1

#include <stdio.h>

void programHeader1(void) {
  printf ("Student Assignment Number 1\n"
          "Student: Don Retzlaff donr@unt.edu\n\n");
} // programHeader1


void programHeader2(int assignmentNumber) {
  printf ("Student Assignment Number %d\n"
          "Student: Don Retzlaff donr@unt.edu\n\n",
          assignmentNumber);
} // programHeader2


void programHeader3(int assignmentNumber,
                    char *studentInfo) {
  printf ("Student Assignment Number %d\n"
          "Student: %s\n\n",
              assignmentNumber,studentInfo);
} // programHeader3


void programHeader4(int assignmentNumber,
                    char studentName[],
                    char studentEmail[]) {
  printf ("Student Assignment Number %d\n"
          "Student: %s %s\n\n",
      assignmentNumber,studentName,studentEmail);
} // programHeader4


int main() {
  char Student[] = "Jeff Jeffries";
  int Assignment = 1;
  
  printf ("Simple Function Example 2\n\n");

  programHeader1();
  
  programHeader2(3);
  programHeader2(6);
  
  programHeader3(2,"Fred Jones fred@fred.com");
  programHeader3(Assignment,"Sammy Sams sams@sams.com");
  
  programHeader4(5,"Don Retzlaff","donr@unt.edu");
  programHeader4(10,Student,"");
  programHeader4(Assignment,Student,"jeff@jeffry.com");
  
  return 0;
} // main

