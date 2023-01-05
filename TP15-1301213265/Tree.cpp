#include "Tree.h"

adrNode newNode(infotype x){
    adrNode P = new node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}

adrNode findNode(adrNode root, infotype x){
    if (root == NULL){
        return NULL;
    }
    if (info(root) == x){
        return root;
    } else if (x < info(root)) {
        return findNode(left(root), x);
    } else {
        return findNode(right(root), x);
    }
}

void insertNode(adrNode &root, adrNode p){
    if (info(root) > info(p)){
        if(left(root) != NULL){
            insertNode(left(root), p);
        } else {
            left(root) = p;
        }
    } else {
        if(right(root) != NULL){
            insertNode(right(root), p);
        } else {
            right(root) = p;
        }
    }
}

void printPreOrder(adrNode root){
    if (root == NULL){
        return;
    }
    cout<<" "<<info(root);
    printPreOrder(left(root));
    printPreOrder(right(root));
}

void printDescendant(adrNode root, infotype x){
    if (root == NULL){
        return;
    }
    adrNode P;
    P = findNode(root, x);
    printPreOrder(left(P));
    printPreOrder(right(P));
}

int sumNode(adrNode root){
    if (root == NULL){
        return 0;
    }

    return (info(root) + sumNode(left(root)) + sumNode(right(root)));
}

int countLeaves(adrNode root){
    if (root == NULL){
        return 0;
    }
    if (left(root) == NULL && right(root) == NULL){
        return 1;
    } else {
        return countLeaves(left(root)) + countLeaves(right(root));
    }
}

int heightTree(adrNode root){
    if (root == NULL){
        return 0;
    } else if (left(root) == NULL && right(root) == NULL){
        return 0;
    } else {
        int l,r,Max,i;
        l = heightTree(left(root));
        r = heightTree(right(root));
        if (l > r){
            Max = l;
        } else {
            Max = r;
        }
        return Max + 1;
    }
}

