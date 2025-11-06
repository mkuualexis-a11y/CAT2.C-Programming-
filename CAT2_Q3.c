/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:read,proccess and write result
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *f = fopen("data.txt", "w+");
    int n = 10, i, x, sum = 0;
    float avg;

    if (!f) return printf("File error\n"), 1;

    printf("Enter 10 integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        fprintf(f, "%d\n", x);
        sum += x;
    }
    avg = (float)sum / n;

    fprintf(f, "Sum=%d\nAverage=%.2f\n", sum, avg);

    rewind(f);
    printf("\n--- data.txt contents ---\n");
    while ((x = fgetc(f)) != EOF) putchar(x);

    fclose(f);

	return 0;
}