#include <stdio.h>

void chap1ex1() {}
void chap1ex2() {}

void chap1ex3() 
{
  /* Modify the temperature conversion program to print a heading above
  ** the table.
  */
  float fahr, celsuis;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  printf("%3s %6s\n","F","C");
  printf("=== ======\n");
  while (fahr <= upper) {
    celsuis = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n",fahr, celsuis);
    fahr = fahr + step;
  }
}
void chap1ex4() 
{
  /* Modify the temperature conversion program to print a heading above
  ** the table.
  */
  float fahr, celsuis;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 5;

  celsuis = lower;

  printf("%6s %3s\n","C","F");
  printf("====== ===\n");
  while (celsuis <= upper) {
    fahr = (9.0/5.0) * celsuis + 32;
    printf("%6.1f %3.0f\n", celsuis,fahr);
    celsuis += step;
  }

}
void chap1ex5() 
{
  /* Modify the temp conversion program to print the table in reverse order
  ** from 300 to 0.
  */
  int fahr;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

}
void chap1ex6() {}
void chap1ex7() {}
void chap1ex8() {}
void chap1ex9() {}
void chap1ex10() {}
void chap1ex11() {}
void chap1ex12() {}
void chap1ex13() {}
void chap1ex14() {}
void chap1ex15() {}
void chap1ex16() {}
void chap1ex17() {}
void chap1ex18() {}
void chap1ex19() {}
void chap1ex20() {}
void chap1ex21() {}
void chap1ex22() {}
int main()
{
  chap1ex3();
  chap1ex4();
  chap1ex5();
}
