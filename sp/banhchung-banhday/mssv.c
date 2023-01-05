#include <stdio.h>
#include <stdlib.h>

const double PI = 3.1415926535;
int n, dc, dg, ld;
char w[10];

void read_input();

void process() {
    FILE *f = NULL;
    f = fopen("output.out", "w");

    if (strcmp(w,"Rain") == 0) {
        fprintf(f,"Rain\n");

    }

    if (strcmp(w,"Sun") == 0) {
        fprintf(f,"Sun\n");

    }

    if (strcmp(w,"Cloud") == 0) {
        fprintf(f,"Cloud\n");

    }

    if (strcmp(w,"Fog") == 0) {
        fprintf(f,"Fog\n");

    }

    if (strcmp(w,"Wind") == 0) {
        fprintf(f,"Wind\n");
    }

    fclose(f);
}


int main(void)
{
    
    read_input();
    printf("%d %d %d %d %s\n", n, dc, dg, ld, w);
    process();

    return 0;
}

void read_input() {
    FILE *fin = NULL; 
    fin = fopen("input.inp", "r");
    if (fin == NULL) exit(0);
    fscanf(fin, "%d %d %d %d %s", &n, &dc, &dg, &ld, w);
    fclose(fin);
}