#include <stdio.h>
int main() {

  char op;
  double a, b;
  printf("Enter an operator (+, -, *, /,%): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (op)
   {
    case '+':
      printf("%.3lf + %.3lf = %.5lf", a, b, a + b);
      break;
    case '-':
      printf("%.3lf - %.3lf = %.5lf", a, b, a - b);
      break;
    case '*':
      printf("%.3lf * %.3lf = %.8lf", a, b, a * b);
      break;
    case '/':
      printf("%.3lf / %.3lf = %.8lf", a, b, a / b);
      break;
    case '%':
	 printf("%0.0lf %% %0.0lf=%d", a, b, (int)a % (int)b);
     break;
    default:
     printf("Error! Enter a Valid Operation");
  }
  return 0;
}