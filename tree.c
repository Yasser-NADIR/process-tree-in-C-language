#include "tree.h"

Tree *createNode(int data){
    Tree *tree = (Tree *)malloc(sizeof(Tree));
    tree->data = data;
    tree->left = NULL;
    tree->right = NULL;
    tree->parent = NULL;
    return tree;
}

Tree *addNodeToLeft(Tree *tree, Tree *left){
    tree->left = left;
    left->parent = tree;
    return tree;
}

Tree *addNodeToRight(Tree *tree, Tree *right){
    tree->right = right;
    right->parent = tree;
    return tree;
}

void affichagePrefixeRecursif(Tree *tree){
    if(tree!=NULL){
        printf("%d\n", tree->data);
        affichagePrefixeRecursif(tree->left);
        affichagePrefixeRecursif(tree->right);
    }
}

void affichageInfixeRecursif(Tree *tree){
    if(tree!=NULL){
        affichageInfixeRecursif(tree->left);
        printf("%d\n", tree->data);
        affichageInfixeRecursif(tree->right);
    }
}

void affichagePostfixeRecursif(Tree *tree){
    if(tree!=NULL){
        affichagePostfixeRecursif(tree->left);
        affichagePostfixeRecursif(tree->right);
        printf("%d\n", tree->data);
    }
}

void affichagePrefixeIteratif(Tree *tree){
    Tree *node;
    Tree *pile[100];
    int index = -1;

    index++;
    pile[index] = tree;
    
    while(index>-1){
        node = pile[index];
        index--;
        printf("%d\n", node->data);
        if(node->right!=NULL){
            index++;
            pile[index] = node->right;
        }
        if(node->left!=NULL){
            index++;
            pile[index] = node->left;
        };
    }
}