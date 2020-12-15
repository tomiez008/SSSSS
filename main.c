#include <stdio.h>
void printToN(int n);
void printToNR(int i, int n);

int main(void) {
  printToN(5); printf("\n");
  printToNR(5,10);

}

void printToN(int n)
{
    for(int i =1;i<=n;i++)
      printf("%d",i);
}
void printToNR(int i, int n)
{
  if (i<=n)
  {
    printf("%d",i);
    printToNR(i+1,n);

  }
}


