#include <stdio.h>

#define BLUE   "\033[1;34m"
#define GREEN  "\033[1;32m"
#define RED    "\033[1;31m"
#define RESET  "\033[0m"

int main() {
    while(1) {
        double a, b, result; char op;
        printf(GREEN "Enter expression (e.g., 3 + 4): " RESET);
        if(scanf("%lf %c %lf", &a, &op, &b) == 3) {
            result = (op == '+') ? (a + b) :
                     (op == '-') ? (a - b) :
                     (op == '*') ? (a * b) :
                     (op == '/') ? (a / b) : 0;
            printf(BLUE "%.2lf %c %.2lf = %.2lf\n" RESET, a, op, b, result);
        } else {
            break;
        }
    }
    printf(RED "Exiting...\n" RESET);
    return 0;
}