#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int key;
    struct node *pLeft, *pRight;
};

struct node *newNode(int);
void RNL_traversal(struct node*);
struct node *insert(struct node*, int);
int find_value(struct node*, int );
int sum_of_total_leaves(struct node*);
int get_height(struct node*);
int get_min(struct node*);
int get_max(struct node*);
void swap_leave_nodes(struct node*);

int main(void) {
    struct node *root = NULL;

    // Cau a
    FILE *fin = NULL; 
    fin = fopen("input.txt", "r");
    if (fin == NULL) exit(0);
    printf("a. Du lieu file input.txt: ");
    while (1) {
        int cur = -1;
        fscanf(fin, "%d", &cur);
        if (cur == -1) break;
        printf("%d ", cur);
        root = insert(root, cur);
    }
    printf("\n");
    fclose(fin);

    // Cau b
    printf("b. Duyet cay theo thu tu giam dan: ");
    RNL_traversal(root);
    printf("\n");

    // Cau c
    printf("c. Nhap gia tri can tim trong cay: ");
    int x;
    scanf("%d", &x);
    if (find_value(root, x) == 1) printf("%d co xuat hien trong cay.\n");
    else printf("   %d khong xuat hien trong cay.\n");

    // Cau d
    printf("d. Tong cac nut la trong cay la: %d\n", sum_of_total_leaves(root));

    // Cau e
    printf("e. Min: %d\n", get_min(root));
    printf("   Max: %d\n", get_max(root));

    // Cau f
    printf("f. Chieu cao cay: %d\n", get_height(root));

    // Cau g
    swap_leave_nodes(root);
    printf("g. Cay sau khi hoan vi cac nut la: ");
    RNL_traversal(root);
    return 0;
}

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

int is_leave(struct node *node) {
    if (node == NULL) return 0;
    return (node->pLeft == NULL && node->pRight == NULL);
}
void swap_leave_nodes(struct node *node) {
    if (node == NULL) return;
    if (is_leave(node->pLeft) == 1 && is_leave(node->pRight)) {
        int tmp = node->pLeft->key;
        node->pLeft->key = node->pRight->key;
        node->pRight->key = tmp;
    } else {
        swap_leave_nodes(node->pLeft);
        swap_leave_nodes(node->pRight);
    }
}