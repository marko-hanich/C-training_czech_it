// #include <stdio.h>
// int main () {
//     int num = 12, res;
//     float x;
//     x = 23.3;
//     res = x - num;
//     printf("Result is %d, x is %.1f\n", res, x);
//     return 0;

// }



// #include <stdio.h>
// int main () {
//     int age;

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age > 18) {
//     printf("Congratulation, you can visit our site! Your age is: %d\n", age);
//     }
//     else if (age < 18)
//     {
//         printf("You are too small. Your age is: %d\n", age);
//     }
//     else {
//         printf("Happy birthday! Your age is: %d\n", age);
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int x = 2, y = 4;
    int c;
    c = x > y ? 23 : 45;
    if (x>y) {
        c = 23;
    }
    else {
        c = 45;
    };
    printf("%d\n",c);
    return 0;
}

// #include <stdio.h>
// #include <stdbool.h>
// int main(void) {
//     int a;
//     float b;
//     printf("Insert two numbers, integer and float, delimiter between numbers is space: ");
//     scanf("%d %f", &a, &b);
//     if (scanf("%d %f", &a, &b) == true)
//     {
//         printf("Integer is %d;\nFloat is %.3f\n;", a, b);
//     }
//     else
//     {
//         printf("You write wrong numbers! Please, try again.");
//         printf("Insert two numbers, integer and float, delimiter between numbers is space: ");
//         scanf("%d %f", &a, &b);
//     }

//     return 0;
// }