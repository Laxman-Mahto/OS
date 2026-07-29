#include <stdio.h>

int main() {
    int arrival[] = {0, 1, 2, 3};
    int burst[] = {5, 3, 8, 6};
    int n = 4;

    int time = 0;
    int totalWait = 0;
    int totalTurn = 0;

    printf("P A B W T\n");

    for (int i = 0; i < n; i++) {
        if (time < arrival[i]) {
            time = arrival[i];
        }

        int wait = time - arrival[i];
        int turn = wait + burst[i];

        totalWait += wait;
        totalTurn += turn;

        printf("%d %d %d %d %d\n",
               i + 1, arrival[i], burst[i], wait, turn);

        time += burst[i];
    }

    printf("Avg wait = %.2f\n", totalWait / (double)n);
    printf("Avg turn = %.2f\n", totalTurn / (double)n);

    return 0;
}