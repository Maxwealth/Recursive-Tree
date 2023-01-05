#include "Tree.h"

int main()
{
    int x[9] = {5,3,9,10,4,7,1,8,6};
    /* Tampilkan isi dari array */
    for (int i = 0; i < 9 ; i++){
        cout<<x[i]<<" ";
    }
    /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
    adrNode root,p;
    p = newNode(x[0]);

    root = p;
    p = NULL;
    for (int i = 1; i < 9 ; i++){
        p = newNode(x[i]);
        insertNode(root, p);

    }
    /* 2. Tampilkan node dari BST secara Pre-Order */
    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder(root);

    /* 3. Tampilkan keturunan dari node 9*/
    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant(root, 9);

    /* 4. Tampilkan total info semua node pada BST */
    printf("\n");
    printf("\nSum of BST Info\t: ");
    int s = sumNode(root);
    cout<<s;

    /* 5. Tampilkan banyaknya daun dari BST */
    printf("\nNumber of Leaves\t: ");
    int t = countLeaves(root);
    cout<<t;
    /* 4. Tampilkan Tinggi dari Tree*/
    printf("\nHeight of Tree\t\t: ");
    int j = heightTree(root);
    cout<<j;
    return 0;
}

