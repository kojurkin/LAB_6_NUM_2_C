#include <stdio.h>

int main()
{
    int num;
    FILE *in1 = fopen("in1.txt", "r");
    FILE *in2 = fopen("in2.txt", "r");
    FILE *output = fopen("output.txt", "w");

    while (!feof(in1))
    {
        fscanf(in1, "%d", &num);
        if (num < 0)
        {
            fprintf(output, "%d ", num);
        }
    }
    while (!feof(in2))
    {
        fscanf(in2, "%d", &num);
        if (num > 0)
        {
            fprintf(output, "%d ", num);
        }
    }
    fclose(in1);
    fclose(in2);
    fclose(output);
    return 0;
    return 0;
}
