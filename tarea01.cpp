
#include <iostream>

int main(void)
{
  std::cout <<"\n"<<"Suma de los inversos de los números impares entre 10 y 100\n";
  double sum=0;
  int n = 0;
  int NMIN = 10;
  int NMAX = 100;
  for(n = NMIN; n <= NMAX ; n = n+1) {
    if (n%2 != 0) {
      sum=sum+1.0/n;
    }
  }
  std::cout <<NMAX<<"\t"<<sum<<"\n"<<"\n";
  return 0;
}
