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
10  ����
/  \
5   15
*/
 
void inorder(Tnode *);  //�� - ��- ��   -> 5  10  15
void preorder(Tnode *);  //�� - �� - �� -> 10 5 15
void postorder(Tnode *); //�� -�� - ��  -> 5 15 10 
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
    printf("���� : %d\n", count_tree(Top));
    printf("�� ã��? ");
     
    scanf("%d", &num);
    printf("ã�°� �ִ�? : %d\n", search(Top, num));
 
    printf("����:%d\n", level_tree(Top));
    printf("����: %d\n", terminal_node(Top));
    printf("��: %d\n", (level_tree(Top) - 1) * 2);
 
    while (1) {
     
        printf("������ ������ �Է� :");
        scanf("%d", &num);
         
        if (num == -1)
            break;
         
        delete_node(Top, num);
         
        printf("\ninorder : ");
 
        inorder(Top);
    }
    return 0;
}
 
 
//Ʈ������
Tnode *create() {
    Tnode *p;
    p = (Tnode*)calloc(1, sizeof(Tnode));
    return p;
}
 
 
//������ ����
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
 
void inorder(Tnode *root) {  //�� - ��- ��   -> 5  10  15
    if (root) {
        if (root->data == 0) {
            printf("������ ����\n");
            return;
        }
 
        inorder(root->left);
        printf("%3d", root->data);
        inorder(root->right);
    }
}
void preorder(Tnode *root) {  //�� - �� - �� -> 10 5 15              // 10 5 3 7 6 9 15 14
    if (root) {
        if (root->data == 0) {
            printf("������ ����\n");
            return;
        }
 
        printf("%3d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Tnode *root) { //�� -�� - ��  -> 5 15 10   // 3 6 9 7 5 14 15 10
 
    if (root) {
        if (root->data == 0) {
            printf("������ ����\n");
            return;
        }
 
        postorder(root->left);
        postorder(root->right);
        printf("%3d", root->data);
    }
}
 
//��� ���� ����
int count_tree(Tnode *root) {
    int cnt = 0;
 
 
 
    if (root) {
        if (root->data == 0) return 0;
        cnt = cnt + count_tree(root->left);  // cnt+1  
        cnt = cnt + count_tree(root->right);
        return cnt + 1;
    }
 
}
 
 
//�˻�
int search(Tnode *root, int data) {
    int s = -1;
 
    if (root->data == 0) {
        printf("������ ����\n");
        return -1;
    }
 
    if (root->data == data) {
        printf("ã�� %d\n", root->data);
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
 
 
 
//���� �Լ�
void delete_node(Tnode *root, int num) {
    Tnode *p, *q, *temp;
    p = root;
    q = p;
    int cnt;
 
    if (search(root, num) == -1) {
        printf("���� �������� �ʽ��ϴ�.\n");
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
 
                if (cnt == 0) { //������ 
                    q->left = NULL;
                    free(p);
                    return;
                }
 
                if (cnt == 1) {  //Ŭ�� 
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
