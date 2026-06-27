#include <stdio.h>
#include <stdlib.h>
#include "erabox.h"

int run_calc(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: era calc [num1] [num2]\n");
        return 1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int result = num1 + num2;

    printf("簡易電卓を起動します。\n");
    printf("結果: %d\n", result);
    return 0;
}