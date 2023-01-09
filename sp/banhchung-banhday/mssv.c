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
void solveRain();
void solveSun();
void solveCloud();
void solveFog();
void solveWind();

int main(void) {
    read_input();
    /* printf("%d %d %d %d %s\n", nep, dc, dg, ld, w);
    printf("%f %f\n", nc, ng); */

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

    return 0;
}

float calc(int so_nep, int so_giay) {
    return nep - nc * so_nep - ng * so_giay;
}

void solveNegative() {
    if (dc < 0) {
        f = fopen("output.out", "w");
        int slg = floor(nep / ng);
        if (slg > ld) slg = ld;
        fprintf(f, "0 %d %.3f", slg, calc(0, slg));
        fclose(f);
        exit(0);
    }
    if (dg < 0) {
        f = fopen("output.out", "w");
        int slc = floor(nep / nc);
        if (slc > ld) slc = ld;
        fprintf(f, "%d 0 %.3f", slc, calc(slc, 0));
        fclose(f);
        exit(0);
    }
}

int tong_uoc_thuc_su(int n) {
    int res = 0;
    int i = 1;
    for (i = 1; i < n; i++) 
        if (n % i == 0) res += i;
    return res;
}

int la_so_ban_be(int a, int b) {
    return (a != b && tong_uoc_thuc_su(a) == b && tong_uoc_thuc_su(b) == a);
}


void solveRain() {
    solveNegative();

    int slc = 0, slg = 0;
    float nep_tra_lai = 2e9;

    int k = ld;
    for (k = ld; k >= 0; k--) {
        if (k * 2 > ld) continue;
        float used = k * nc + k * ng;
        if (used > nep) continue;
        int i = k, j = k;

        /* fprintf(f, ".%d %d %f\n", i, j, calc(i, j)); */
        if (nc > ng) {
            float cur = nep - used;
            int ti = floor(cur / nc);
            if (ti + i + j > ld) ti = ld - i - j;
            cur -= ti * nc;
            i += ti;
            int tj = floor(cur / ng);
            if (tj + i + j > ld) tj = ld - i - j;
            j += tj;
            slc = i;
            slg = j;
        } else {
            float cur = nep - used;
            int tj = floor(cur / ng);
            if (tj + i + j > ld) tj = ld - i - j;
            cur -= tj * ng;
            j += tj;

            int ti = floor(cur / nc);
            if (ti + i + j > ld) ti = ld - i - j;
            i += ti;
            
            slc = i;
            slg = j;
        }
        /* fprintf(f, " %d %d %f\n", i, j, calc(i, j)); */
        break;
    }

    if (slc == 0 && slg == 0) {
        if (nc > ng) {
            int slc = floor(nep / nc);
            float tc = slc * nc;
            int slg = floor((nep - tc) / ng);
            float tg = slg * ng;

            float nep_tra_lai = calc(slc, slg);
            if (slc + slg <= ld && nc >= ng) {
                fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
                exit(0);
            }

            slc = 0; slg = 0;
            nep_tra_lai = 2e9;

            int i = ld;
            for (i = ld; i >= 1; i--) {
                tc = i * nc; 
                if (tc > nep) continue;
                float cur = nep - tc;
                int j = floor(cur / ng);
                if (j > ld - i) j = ld - i;

                cur = calc(i, j);
                /* fprintf(f, "%d %d %f\n", i, j, cur); */

                if (nep_tra_lai > cur) {
                    nep_tra_lai = cur;
                    slc = i;
                    slg = j;
                }
            }

            fprintf(f, "%d %d %.3f", slc, slg, calc(slc, slg));
            exit(0);

        } else {
            int slg = floor(nep / ng);
            float tg = slg * ng;
            int slc = floor((nep - tg) / nc);
            float tc = slc * nc;

            float nep_tra_lai = calc(slc, slg);
            if (slg + slc <= ld && ng >= nc) {
                fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
                exit(0);
            }

            slg = 0; slc = 0;
            nep_tra_lai = 2e9;

            int j = ld;
            for (j = ld; j >= 1; j--) {
                tg = j * ng; 
                if (tg > nep) continue;
                float cur = nep - tg;
                int i = floor(cur / nc);
                if (i > ld - j) i = ld - j;

                cur = calc(i, j);
                if (nep_tra_lai > cur) {
                    nep_tra_lai = cur;
                    slc = i;
                    slg = j;
                }
            }

            fprintf(f, "%d %d %.3f", slc, slg, calc(slc, slg));
            exit(0);
        }
    }

    fprintf(f, "%d %d %.3f\n", slc, slg, calc(slc, slg));
}


void solveCloud() {
    if (la_so_ban_be(nep, ld)) {
        fprintf(f, "0 0 %d", nep);
        fclose(f);
        exit(0);
    }

    solveNegative();

    int slg = floor(nep / ng);
    float tg = slg * ng;
    int slc = floor((nep - tg) / nc);
    float tc = slc * nc;

    float nep_tra_lai = calc(slc, slg);
    if (slg + slc <= ld && ng >= nc) {
        fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
        exit(0);
    }

    slg = 0; slc = 0;
    nep_tra_lai = 2e9;

    int j = ld;
    for (j = ld; j >= 1; j--) {
        tg = j * ng; 
        if (tg > nep) continue;
        float cur = nep - tg;
        int i = floor(cur / nc);
        if (i > ld - j) i = ld - j;

        cur = calc(i, j);
        if (nep_tra_lai > cur) {
            nep_tra_lai = cur;
            slc = i;
            slg = j;
        }
    }

    nep_tra_lai = calc(slc, slg);
    fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
    exit(0);
}

void solveFog() {
    f = fopen("output.out", "w");
    float cur_nep = nep;
    fprintf(f, "%d %d %.3f", dc, dg, cur_nep);
    fclose(f);
}

void solveWind() {
    solveNegative();

    int slc = floor(nep / nc);
    float tc = slc * nc;
    int slg = floor((nep - tc) / ng);
    float tg = slg * ng;

    float nep_tra_lai = calc(slc, slg);
    if (slc + slg <= ld && nc >= ng) {
        printf("OK");
        fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
        exit(0);
    }

    slc = 0; slg = 0;
    nep_tra_lai = 2e9;

    int i = ld;
    for (i = ld; i >= 1; i--) {
        tc = i * nc; 
        if (tc > nep) continue;
        float cur = nep - tc;
        int j = floor(cur / ng);
        if (j > ld - i) j = ld - i;

        cur = calc(i, j);
        /* fprintf(f, "%d %d %f\n", i, j, cur); */

        if (nep_tra_lai > cur) {
            nep_tra_lai = cur;
            slc = i;
            slg = j;
        }
    }

    nep_tra_lai = calc(slc, slg);
    fprintf(f, "%d %d %.3f", slc, slg, nep_tra_lai);
    exit(0);
}

void solveSun() {
    int X[5][6] = {
        {  5,  7, 10, 12, 15, 20 },
        { 20,  5,  7, 10, 12, 15 },
        { 15, 20,  5,  7, 10, 12 },
        { 12, 15, 20,  5,  7, 10 },
        { 10, 12, 15, 20,  5,  7}
    };
    int x = X[ld % 5][dc % 6];
    nep += x % nep;
    ld -= x;
    if (ld < 0) ld = 0;

    const int k = (dc + dg) % 3;
    if (k == 0) solveRain();
    if (k == 1) solveWind();
    if (k == 2) solveCloud();
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

}