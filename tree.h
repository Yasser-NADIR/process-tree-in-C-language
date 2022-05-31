#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
    struct Tree *parent;
} Tree;

Tree *createNode(int data);
Tree *addNodeToLeft(Tree *tree, Tree *left);
Tree *addNodeToRight(Tree *tree, Tree *right);

void affichagePrefixeRecursif(Tree *tree);
void affichageInfixeRecursif(Tree *tree);
void affichagePostfixeRecursif(Tree *tree);

void affichagePrefixeIteratif(Tree *tree);
void affichageInfixeIteratif(Tree *tree);
void affichagePostfixeIteratif(Tree *tree);


#endif