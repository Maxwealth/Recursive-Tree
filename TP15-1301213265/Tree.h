#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

using namespace std;

#define left(P) (P)->left
#define right(P) (P)->right
#define info(P) (P)->info

typedef struct node *adrNode;
typedef int infotype;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode(infotype x);
adrNode findNode(adrNode root, infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printDescendant(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);

#endif // TREE_H_INCLUDED
