#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);   
    char op = argv[2][0]; 
    int b = atoi(argv[3]);
    int result = 0;

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
	case 'X':
        case 'x': result = a * b; break;
        case '/':
            if (b == 0) {
                printf("0으로 나눌 수 없습니다!\n");
                return 1;
            }
            result = a / b;
            break;
        default:
            printf("지원하지 않는 연산자입니다: %c\n", op);
            return 1;
    }

    printf("%d\n", result);
    return 0;
}

