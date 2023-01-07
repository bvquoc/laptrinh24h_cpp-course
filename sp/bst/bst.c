#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int key;
    struct node *pLeft, *pRight;
};

struct node *newNode(int item) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->pLeft = temp->pRight = NULL;
    return temp;
}

void RNL_traversal(struct node *root) {
  if (root != NULL) {
    RNL_traversal(root->pRight);
    printf("%d ", root->key);
    RNL_traversal(root->pLeft);
  }
}

struct node *insert(struct node *node, int key) {
    if (node == NULL) return newNode(key);

    if (key < node->key) node->pLeft = insert(node->pLeft, key);
    else node->pRight = insert(node->pRight, key);

    return node;
}

int find_value(struct node *node, int value) {
    if (node == NULL) return 0;
    if (node->key == value) return 1;
    if (node->key < value) return find_value(node->pRight, value);
    return find_value(node->pLeft, value);
}

int sum_of_total_leaves(struct node *node) {
    if (node == NULL) return 0;
    if (node->pLeft == NULL && node->pRight == NULL) return node->key;
    return sum_of_total_leaves(node->pLeft) + sum_of_total_leaves(node->pRight);
}

int get_height(struct node *node) {
    if (node == NULL) return 0;
    return 1 + fmax(get_height(node->pLeft), get_height(node->pRight));
}

int get_min(struct node *node) {
    if (node == NULL) return 2000000000;
    if (node->pLeft != NULL) return get_min(node->pLeft);
    return node->key;
}
int get_max(struct node *node) {
    if (node == NULL) return -2000000000;
    if (node->pRight != NULL) return get_max(node->pRight);
    return node->key;
}

struct node *root = NULL;

void read_input() {
    FILE *fin = NULL; 
    fin = fopen("input.txt", "r");
    if (fin == NULL) exit(0);
    printf("a> Du lieu file input.txt: ");
    while (1) {
        int cur = -1;
        fscanf(fin, "%d", &cur);
        if (cur == -1) break;
        printf("%d ", cur);
        root = insert(root, cur);
    }
    printf("\n");
    fclose(fin);
}

void process() {

    // Cau b
    printf("b> Duyet cay theo thu tu giam dan: ");
    RNL_traversal(root);
    printf("\n");

    // Cau c
    printf("c> Nhap gia tri can tim trong cay: ");
    int x;
    scanf("%d", &x);
    if (find_value(root, x) == 1) printf("%d co xuat hien trong cay.\n");
    else printf("   %d khong xuat hien trong cay.\n");

    // Cau d
    printf("d> Tong cac nut la trong cay la: %d\n", sum_of_total_leaves(root));

    // Cau e
    printf("e> Min: %d\n", get_min(root));
    printf("   Max: %d\n", get_max(root));

    // Cau f
    printf("f> Chieu cao cay: %d\n", get_height(root));

    // Cau g
    
}

int main(void) {
    read_input(); // Cau a
    process();

    return 0;
}



