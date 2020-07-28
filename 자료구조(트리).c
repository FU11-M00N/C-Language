#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
typedef struct Tnode {
    int data;
    struct Tnode *left;
    struct Tnode *right;
}Tnode;
 
Tnode *create();
void insertnode(Tnode*, int);
void print_terr(Tnode *Top);
 
/*
10  루투
/  \
5   15
*/
 
void inorder(Tnode *);  //왼 - 루- 오   -> 5  10  15
void preorder(Tnode *);  //루 - 왼 - 오 -> 10 5 15
void postorder(Tnode *); //왼 -오 - 루  -> 5 15 10 
int count_tree(Tnode *);
int search(Tnode *, int);
int level_tree(Tnode *);
int terminal_node(Tnode *);
void delete_node(Tnode *, int);
 
int main(int argc, char *argv[]) {
     
    Tnode *Top;
    Top = create();
    int num;
    int cnt = 0;
    while (1) {
     
        printf("(Exit:-1) >> ");
        scanf("%d", &num);
        if (num == -1)break;
        insertnode(Top, num);
    }
 
    printf("\ninorder : ");
    inorder(Top);
     
    printf("\npreorder : ");
    preorder(Top);
     
    printf("\npostorder : ");
    postorder(Top);
     
    printf("\n");
    printf("갯수 : %d\n", count_tree(Top));
    printf("뭐 찾음? ");
     
    scanf("%d", &num);
    printf("찾는값 있니? : %d\n", search(Top, num));
 
    printf("깊이:%d\n", level_tree(Top));
    printf("빈노드: %d\n", terminal_node(Top));
    printf("폭: %d\n", (level_tree(Top) - 1) * 2);
 
    while (1) {
     
        printf("삭제할 데이터 입력 :");
        scanf("%d", &num);
         
        if (num == -1)
            break;
         
        delete_node(Top, num);
         
        printf("\ninorder : ");
 
        inorder(Top);
    }
    return 0;
}
 
 
//트리생성
Tnode *create() {
    Tnode *p;
    p = (Tnode*)calloc(1, sizeof(Tnode));
    return p;
}
 
 
//데이터 삽입
void insertnode(Tnode* root, int data) {
    Tnode *p, *q;
 
    q = create();
    q->data = data;
    p = root;
 
    if (root->data == 0) {
        root->data = data;
        return;
    }
 
    else {
        if (q->data<root->data) {
            if (root->left != NULL) {
                insertnode(root->left, data);
            }
            else {
                root->left = q;
            }
        }
 
        else if (q->data> root->data) {
            if (root->right != NULL) {
                insertnode(root->right, data);
            }
            else {
                root->right = q;
            }
        }
    }
 
}
 
void inorder(Tnode *root) {  //왼 - 루- 오   -> 5  10  15
    if (root) {
        if (root->data == 0) {
            printf("데이터 없음\n");
            return;
        }
 
        inorder(root->left);
        printf("%3d", root->data);
        inorder(root->right);
    }
}
void preorder(Tnode *root) {  //루 - 왼 - 오 -> 10 5 15              // 10 5 3 7 6 9 15 14
    if (root) {
        if (root->data == 0) {
            printf("데이터 없음\n");
            return;
        }
 
        printf("%3d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Tnode *root) { //왼 -오 - 루  -> 5 15 10   // 3 6 9 7 5 14 15 10
 
    if (root) {
        if (root->data == 0) {
            printf("데이터 없음\n");
            return;
        }
 
        postorder(root->left);
        postorder(root->right);
        printf("%3d", root->data);
    }
}
 
//노드 갯수 세기
int count_tree(Tnode *root) {
    int cnt = 0;
 
 
 
    if (root) {
        if (root->data == 0) return 0;
        cnt = cnt + count_tree(root->left);  // cnt+1  
        cnt = cnt + count_tree(root->right);
        return cnt + 1;
    }
 
}
 
 
//검색
int search(Tnode *root, int data) {
    int s = -1;
 
    if (root->data == 0) {
        printf("데이터 없음\n");
        return -1;
    }
 
    if (root->data == data) {
        printf("찾음 %d\n", root->data);
        return 1;
    }
 
 
    if (data<root->data) {
        printf("%d->", root->data);
 
        if (root->left != NULL) {
            if (search(root->left, data) == 1)
                return 1;
        }
    }
 
    else if (data>root->data) {
        printf("%d->", root->data);
 
        if (root->right != NULL) {
            if (search(root->right, data) == 1)
                return 1;
        }
    }
 
    return -1;
 
}
int level_tree(Tnode *root) {
    int right = 1, left = 1;
    int cnt = 1, before;
 
 
    if (root) {
        right = right + level_tree(root->right);
        left = left + level_tree(root->left);
 
        return right >= left ? right : left;
 
    }
 
 
    return 0;
 
}
 
int terminal_node(Tnode *root) {
    int cnt = 0;
 
 
    if (root) {
        if (root->right == NULL && root->left == NULL) {
            return 1;
        }
 
 
        cnt = cnt + terminal_node(root->right);
        cnt = cnt + terminal_node(root->left);
 
        return cnt;
    }
 
}
 
 
 
//삭제 함수
void delete_node(Tnode *root, int num) {
    Tnode *p, *q, *temp;
    p = root;
    q = p;
    int cnt;
 
    if (search(root, num) == -1) {
        printf("값이 존재하지 않습니다.\n");
        return;
    }
 
 
    while (p != NULL) {
 
        if (p->data>num) {
            q = p;
            p = p->left;
            cnt = 0;
        }
 
 
        else if (p->data<num) {
            q = p;
            p = p->right;
            cnt = 1;
        }
 
        if (p->data == num) {
 
            if (p->right == NULL && p->left == NULL) {
                if (root->data == num) {
                    root->data = 0;
                    return;
                }
 
                if (cnt == 0) { //작을때 
                    q->left = NULL;
                    free(p);
                    return;
                }
 
                if (cnt == 1) {  //클때 
                    q->right = NULL;
                    free(p);
                    return;
                }
 
            }
 
            else if (p->left != NULL && p->right == NULL) {
                if (root->data == num) {
                    root->data = p->left->data;
                    p = p->left;
                    root->left = p->left;
                    root->right = p->right;
                    free(p);
                    return;
                }
 
                if (cnt == 0) {
                    q->left = p->left;
                    free(p);
                    return;
                }
 
                else if (cnt == 1) {
                    q->right = p->left;
                    free(p);
                    return;
                }
            }
 
            else if (p->left == NULL && p->right != NULL) {
                if (root->data == num) {
                    root->data = p->right->data;
                    p = p->right;
                    root->left = p->left;
                    root->right = p->right;
                    free(p);
                    return;
                }
 
                if (cnt == 0) {
                    q->left = p->right;
                    free(p);
                    return;
                }
 
                else if (cnt == 1) {
                    q->right = p->right;
                    free(p);
                    return;
                }
            }
 
            else if (p->left != NULL && p->right != NULL) {
 
                if (p->right->left == NULL) {
                    p->data = p->right->data;
                    q = p;
                    p = p->right;
                    q->right = p->right;
                    return;
                }
                else {
                    q = p;
                    p = p->right;
                    while (p->left != NULL) {
                        temp = p;
                        p = p->left;
                    }
 
                    q->data = p->data;
 
                    if (p->right != NULL) {
                        temp->left = p->right;
                        free(p);
                        return;
                    }
                    temp->left = NULL;
                    free(p);
                    return;
                }
 
            }
 
        }
    }
 
 
}
