#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        FILE *f = fopen("hanoi_tower.txt", "a");
        fprintf(f, "Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        fclose(f);
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    FILE *f = fopen("hanoi_tower.txt", "a");
    fprintf(f, "Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    fclose(f);
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 20;
    clock_t start_time = clock();
    hanoi(n, 'A', 'C', 'B');
    clock_t end_time = clock();
    double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    FILE *f = fopen("hanoi_tower.txt", "a");
    fprintf(f, "Time taken: %.2lf seconds\n", time_spent);
    fclose(f);
    return 0;
}