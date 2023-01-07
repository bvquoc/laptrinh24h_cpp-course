#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415926535;
int nep, dc, dg;
int ld;
float nc, ng;
char w[10];

void read_input();

void process();


int main(void) {
    read_input();
    printf("%d %d %d %d %s\n", nep, dc, dg, ld, w);
    process();

    return 0;
}

int tong_uoc_thuc_su(int n) {
    int res = 0;
    for (int i = 1; i < n; i++) 
        if (n % i == 0) res += i;
    return res;
}

int la_so_ban_be(int a, int b) {
    return (a != b && tong_uoc_thuc_su(a) == b && tong_uoc_thuc_su(b) == a);
}

float calc(int so_nep, int so_giay) {
    return nep - nc * so_nep - ng * so_giay;
}

void solveRain() {

}

void solveSun() {

}


void solveCloud() {
    FILE *f = fopen("output.out", "w");
    if (la_so_ban_be(nep, ld)) {
        fprintf(f, "%d", nep);
        exit(0);
    }
    fclose(f);
}

void solveFog() {
    FILE *f = fopen("output.out", "w");
    float cur_nep = nep;
    fprintf(f, "%d %d %.3f", dc, dg, cur_nep);
    fclose(f);
}

void solveWind() {
    
}

void process() {
    if (strcmp(w,"Rain") == 0) {
        solveRain();
    }

    if (strcmp(w,"Sun") == 0) {
        solveSun();
    }

    if (strcmp(w,"Cloud") == 0) {
        solveCloud();
    }

    if (strcmp(w,"Fog") == 0) {
        solveFog();
    }

    if (strcmp(w,"Wind") == 0) {
        solveWind();
    }
}

void read_input() {
    FILE *fin = NULL; 
    fin = fopen("input.inp", "r");
    if (fin == NULL) exit(0);
    fscanf(fin, "%d %d %d %d %s", &nep, &dc, &dg, &ld, w);
    nc = dc * dc;
    ng = (dg * dg * PI) / 4;
    fclose(fin);
}