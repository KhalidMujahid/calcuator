#include <iostream>

int add(int x, int y);
int sub(int x, int y);
int mul(int x,int y);
int divs(int x, int y);
typedef int (*sums)(int,int);
int result(sums sum,int x, int y);

int main()
{

  int x,y,ops;

  std::cout << "Enter first number: ";
  std::cin >> x;
  std::cout << "Enter second number: ";
  std::cin >> y;

  std::cout <<"Select operation: \n 1 for Add \n 2 for Sub \n 3 for Mul \n 4 for Div: ";
  std::cin >> ops;

  if(ops == 1) printf("%d + %d = %d \n", x , y , result(add, x, y));
  else if(ops == 2) printf("%d - %d = %d \n", x , y , result(sub, x, y));
  else if(ops == 3) printf("%d * %d = %d \n", x , y , result(mul, x, y));
  else if(ops == 4) printf("%d / %d = %d \n", x , y , result(divs, x, y));
  else printf("Invalid operation.");



  return 0;
}

int add(int x, int y)
{
  return (x + y);
}

int sub(int x, int y)
{
  return (x - y);
}

int mul(int x, int y)
{
  return (x * y);
}

int divs(int x, int y)
{
  return (x / y);
}

int result(sums sum,int x, int y)
{
   return sum(x,y);
}



