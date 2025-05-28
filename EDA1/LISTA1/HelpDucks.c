#include <stdio.h>

#define MAX 1005
#define MAXQ 2000005
#define INF 1000000000

char grid[MAX][MAX];
int dist[MAX][MAX];
int qx[MAXQ], qy[MAXQ];

int main() {
    int P;
    while (scanf("%d", &P) == 1) {
        getchar(); 

        int M = 0, N = 0;
        int break_flag = 0;

        while (1) {
            int c = getchar();
            if (c == EOF) { 
                break_flag = 1; 
                break; 
            }
            if (c >= '0' && c <= '9') {
                ungetc(c, stdin);
                break;
            }
            char line[MAX];
            int i = 0;
            line[i++] = c;
            while ((c = getchar()) != EOF && c != '\n') {
                line[i++] = c;
            }
            line[i] = '\0';
            
            for (int j = 0; j < i; j++) {
                grid[M][j] = line[j];
            }
            N = i;
            M++;
        }

        
        int sx = -1, sy = -1, ex = -1, ey = -1;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j] == 'S') {
                    sx = i; sy = j;
                } else if (grid[i][j] == 'E') {
                    ex = i; ey = j;
                }
                dist[i][j] = INF;
            }
        }

       
        int head = MAXQ/2, tail = MAXQ/2;
        dist[sx][sy] = 0;
        qx[tail] = sx; qy[tail] = sy; tail++;

        int dx[4] = { -1, 1, 0, 0 };
        int dy[4] = { 0, 0, -1, 1 };

        while (head < tail) {
            int x = qx[head], y = qy[head];
            head++;
            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d], ny = y + dy[d];
                if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
                char cell = grid[nx][ny];
                if (cell == '#') continue;
                int w = (cell == 'o') ? 1 : 0;
                if (dist[x][y] + w < dist[nx][ny]) {
                    dist[nx][ny] = dist[x][y] + w;
                    if (w == 0) {
                        
                        head--;
                        qx[head] = nx;
                        qy[head] = ny;
                    } else {
                        
                        qx[tail] = nx;
                        qy[tail] = ny;
                        tail++;
                    }
                }
            }
        }

        int holes = dist[ex][ey];
        int survivors = P - holes;

        if (holes >= INF || survivors <= 0) {
            printf("Todos morreram :)\n");
        } else if (survivors == P) {
            printf("Nenhum morreu :(\n");
        } else {
            printf("%d encontraram o vovo\n", survivors);
        }

        if (break_flag) break;
    }
    return 0;
}
