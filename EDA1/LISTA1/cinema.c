#include <stdio.h>
#include <stdlib.h>

#define MAX_F 20
#define MAX_L 25

int main() {
    int F, L;
    scanf("%d %d", &F, &L);
    getchar();

    int occupied[MAX_F][MAX_L] = {0};
    char line[10];
    while (fgets(line, sizeof(line), stdin) != NULL) {
        if (line[0] == '\n') continue;
        int row = 'A' + F - 1 - line[0];
        int col = atoi(line + 1) - 1;
        if (row >= 0 && row < F && col >= 0 && col < L) occupied[row][col] = 1;
    }

    printf("   ");
    for (int j = 0; j < L; j++) printf("%02d ", j + 1);
    printf("\n");
    for (int i = 0; i < F; i++) {
        printf("%c ", 'A' + F - 1 - i);
        for (int j = 0; j < L; j++) printf(occupied[i][j] ? "XX " : "-- ");
        printf("\n");
    }
    return 0;
}