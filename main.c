#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "erabox.h"

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(65001);

    if (argc < 2) {
        printf("Usage: era [command] [options]\n");
        printf("Commands:\n");
        printf("  calc    - 簡易電卓\n");
        printf("  todo    - TODOリスト\n");
        return 1;
    }

    if (strcmp(argv[1], "calc") == 0) {
        run_calc(argc, argv);
    } else if (strcmp(argv[1], "todo") == 0) {
        run_todo();
    } else {
        printf("Unknown command: %s\n", argv[1]);
        return 1;
    }

    return 0;
}