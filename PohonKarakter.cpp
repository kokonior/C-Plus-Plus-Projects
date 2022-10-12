#include <stdio.h>
#include <malloc.h>
#include <iostream>
using namespace std;
/*
Tsaqif Mutashim Mufid
1910631170144
*/
struct nod
{
    struct nod *left;
    char data;
    struct nod *right;
};
typedef struct nod NOD;
typedef NOD POKOK;
NOD *NodBaru(char item)
{
    NOD *n;
    n = (NOD *)malloc(sizeof(NOD));
    if (n != NULL)
    {
        n->data = item;
        n->left = NULL;
        n->right = NULL;
    }
    return n;
}
void BinaPokok(POKOK **T)
{
    *T = NULL;
}
typedef enum
{
    FALSE = 0,
    TRUE = 1
} BOOL;
BOOL PokokKosong(POKOK *T)
{
    return ((BOOL)(T == NULL));
}
void TambahNod(NOD **p, char item)
{
    NOD *n;
    n = NodBaru(item);
    *p = n;
}
void preOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        printf("%c ", T->data);
        preOrder(T->left);
        preOrder(T->right);
    }
}
void inOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        inOrder(T->left);
        printf("%c ", T->data);
        inOrder(T->right);
    }
}
void postOrder(POKOK *T)
{
    if (!PokokKosong(T))
    {
        postOrder(T->left);
        postOrder(T->right);
        printf("%c ", T->data);
    }
}
int main()
{
    cout << "==============================\n";
    cout << "Pohon Karakter\n";
    cout << "Nama: Tsaqif Mutashim Mufid\n";
    cout << "NPM: 1910631170144\n";
    cout << "==============================\n";
    POKOK *redis;
    char nama;
    BinaPokok(&redis);
    TambahNod(&redis, nama = 'T');
    TambahNod(&redis->left, nama = 'S');
    TambahNod(&redis->left->left, nama = 'A');
    TambahNod(&redis->left->left->right, nama = 'Q');
    TambahNod(&redis->left->left->right->left, nama = 'I');
    TambahNod(&redis->left->left->right->left->left, nama = 'F');
    TambahNod(&redis->left->left->right->left->right, nama = 'M');
    TambahNod(&redis->right, nama = 'U');
    TambahNod(&redis->left->left->right->left->left->right, nama = 'H');
    TambahNod(&redis->left->left->right->left->left->left, nama = 'D');

    do
    {
        printf("Tampilan secara PreOrder: ");
        preOrder(redis);
        printf("\nTampilan secara InOrder: ");
        inOrder(redis);
        printf("\nTampilan secara PostOrder: ");
        postOrder(redis);
        printf("\n\n");
        break;
    } while (false);
}