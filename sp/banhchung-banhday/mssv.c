#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415926535;
int nep, dc, dg;
int ld;
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
    float nep_chung = dc * dc;
    float nep_giay = (dg * dg * PI) / 4;
    return nep - nep_chung * so_nep - nep_giay * so_giay;
}

void process() {
    FILE *f = NULL;
    f = fopen("output.out", "w");

    float nep_chung = dc * dc;
    float nep_giay = (dg * dg * PI) / 4;
    fprintf(f, "%f %f\n", nep_chung, nep_giay);
    float nep_tra_lai = 1e9;
    int sl_chung = -1, sl_giay = -1;

    if (strcmp(w,"Rain") == 0) {
        fprintf(f,"Rain\n");
        // for (int i = 0; i <= ld; i++) for (int j = 0) {
        //     if (i * nep_chung > nep) continue;
        //     float tmp_nep = nep - i * nep_chung;
        //     for (int k = 0;; k++) {
        //         if (j * nep_giay > tmp_nep) continue;
        //         float cur = calc(i, j);
        //         printf("%d %d %f\n", i, j, cur);

        //         if (nep_tra_lai > cur) {
        //             nep_tra_lai = cur;
        //             sl_chung = i;
        //             sl_giay = j;
        //         }
        //     }
        // }
    }

    if (strcmp(w,"Sun") == 0) {
        fprintf(f,"Sun\n");

    }

    if (strcmp(w,"Cloud") == 0) {
        if (la_so_ban_be(nep, ld)) {
            fprintf(f, "%d", nep);
            exit(0);
        }
        for (int j = ld; j >= 1; j--) {
            if (j * nep_giay > nep) continue;
            float cur = nep - j * nep_giay;
            int i = trunc(cur / nep_chung);
            if (i + j > ld) i = ld - j;
            if (i > j) continue;

            cur = calc(i, j);
            printf("%d %d %f\n", i, j, cur);

            if (nep_tra_lai > cur) {
                nep_tra_lai = cur;
                sl_chung = i;
                sl_giay = j;
            }
        }
    }

    if (strcmp(w,"Fog") == 0) {
        sl_chung = dc;
        sl_giay = dg;
        nep_tra_lai = nep;
    }

    if (strcmp(w,"Wind") == 0) {
        for (int i = ld; i >= 1; i--) {
            if (i * nep_chung > nep) continue;
            float cur = nep - i * nep_chung;
            int j = trunc(cur / nep_giay);
            if (i + j > ld) j = ld - i;
            if (j > i) continue;

            cur = calc(i, j);
            printf("%d %d %f\n", i, j, cur);

            if (nep_tra_lai > cur) {
                nep_tra_lai = cur;
                sl_chung = i;
                sl_giay = j;
            }
        }
    }

    if (nep_tra_lai == 1e9) nep_tra_lai = nep;
    fprintf(f, "%d %d ", sl_chung, sl_giay);
    fprintf(f, ((sl_chung == -1) ? "%.0f" : "%.3f"), nep_tra_lai);
    
    fclose(f);
}

void read_input() {
    FILE *fin = NULL; 
    fin = fopen("input.inp", "r");
    if (fin == NULL) exit(0);
    fscanf(fin, "%d %d %d %d %s", &nep, &dc, &dg, &ld, w);
    fclose(fin);
}