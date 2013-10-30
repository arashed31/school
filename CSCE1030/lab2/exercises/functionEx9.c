
// Function Example 9
// NFL Quarterback Rating Formula

#include <stdio.h>

float max(float a, float b) {
  if (a >= b) return a;
  return b;
} // max


float min(float a, float b) {
  if (a <= b) return a;
  return b;
} // max


float calcQuarterbackRating (float Comp, float Att,
                    float TDs, float Int, float Yards) {
  float a,b,c,d;

  a = (((Comp/Att) * 100.0F) -30.0F) / 20.0F;
  b = ((TDs/Att) * 100.0F) / 5.0F;
  c = (9.5F - ((Int/Att) * 100.0F)) / 4.0F;
  d = ((Yards/Att) - 3.0F) / 4.0F;

  // a, b, c and d can not be greater
  //   than 2.375 or less than zero.
  a = min(max(a,0.0F),2.375F);
  b = min(max(b,0.0F),2.375F);
  c = min(max(c,0.0F),2.375F);

  return (a + b + c + min(max(d,0.0F),2.375F)) / .06F;
  
} // calcQuarterbackRating



int main() {
  float Comp, Att, TDs, Int, Yards;
  char Quarterback[30+1];
  
  printf ("Function Example 9\n"
          "NFL Quarterback Rating Calculation\n\n");

  printf ("Enter Quarterback Name: ");
  scanf ("%s",Quarterback);
  printf ("Enter Completions: ");
  scanf ("%f",&Comp);
  printf ("Enter Attempts: ");
  scanf ("%f",&Att);
  printf ("Enter TDs: ");
  scanf ("%f",&TDs);
  printf ("Enter Interceptions: ");
  scanf ("%f",&Int);
  printf ("Enter Passing yards: ");
  scanf ("%f",&Yards);

  printf ("\n%s's rating is: %2.2f\n\n",Quarterback,
    calcQuarterbackRating(Comp, Att, TDs, Int, Yards));

  return 0;
} // main

