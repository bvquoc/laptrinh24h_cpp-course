#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415926535;
int nep, dc, dg;
int ld;
float nc, ng;
char w[10];
FILE *f;

void read_input();

void process();


int main(void) {
    read_input();
    printf("%d %d %d %d %s\n", nep, dc, dg, ld, w);
    process();

    return 0;
}

float calc(int so_nep, int so_giay) {
    return nep - nc * so_nep - ng * so_giay;
}

void solveNegative() {
    if (dc < 0) {
        FILE *f = fopen("output.out", "w");
        int slg = trunc(nep / ng);
        if (slg > ld) slg = ld;
        fprintf(f, "0 %d %.3f", slg, calc(0, slg));
        fclose(f);
        exit(0);
    }
    if (dg < 0) {
        FILE *f = fopen("output.out", "w");
        int slc = trunc(nep / nc);
        if (slc > ld) slc = ld;
        fprintf(f, "%d 0 %.3f", slc, calc(slc, 0));
        fclose(f);
        exit(0);
    }
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


void solveRain() {

}

void solveSun() {

}


void solveCloud() {
    if (la_so_ban_be(nep, ld)) {
        fprintf(f, "0 0 %d", nep);
        fclose(f);
        exit(0);
    }
}

void solveFog() {
    f = fopen("output.out", "w");
    float cur_nep = nep;
    fprintf(f, "%d %d %.3f", dc, dg, cur_nep);
    fclose(f);
}

void solveWind() {
    solveNegative();


    int slc = trunc(nep / nc), slg = 0;
    float tc = slc * nc, tg;
    float nep_tra_lai = 2e9;
    for (int i = ld; i >= 1; i--) {
        if (i * nc > nep) continue;
        float cur = nep - i * nc;
        int j = trunc(cur / ng);
        if (i + j > ld) j = ld - i;
        // if (j == 0) continue;
        // if (j > i) continue;

        cur = calc(i, j);
        fprintf(f, "%d %d %f\n", i, j, cur);

        // if (nep_tra_lai > cur) {
        //     nep_tra_lai = cur;
        //     sl_chung = i;
        //     sl_giay = j;
        // }
    }

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
    f = fopen("input.inp", "r");
    if (f == NULL) exit(0);
    fscanf(f, "%d %d %d %d %s", &nep, &dc, &dg, &ld, w);
    fclose(f);
    f = fopen("output.out", "w");
    if (nep > 1000 || ld < 1 || ld > 300) {
        fprintf(f, "-1 -1 %d", nep);
        fclose(f);
        exit(0);
    }

    if (dc < 0 && dg < 0) {
        fprintf(f, "0 0 %d.000", nep);
        fclose(f);
        exit(0);
    }

    nc = dc * dc;
    ng = (dg * dg * PI) / 4;

    printf("%f %f\n", nc, ng);
}