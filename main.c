#include "tree.h"

int main(int argc, char ** argv){
    Tree *root = createNode(1);
    Tree *left = createNode(2);
    Tree *right = createNode(3);
    
    left = addNodeToLeft(left, createNode(4));
    left = addNodeToRight(left, createNode(5));

    right = addNodeToLeft(right, createNode(6));
    right = addNodeToRight(right, createNode(7));
    
    root = addNodeToLeft(root, left);
    root = addNodeToRight(root, right);


    // printf("affichage prefixe Recursif\n");
    // affichagePrefixeRecursif(root);
    printf("affichage infixe Recursif\n");
    affichageInfixeRecursif(root);
    // printf("affichage postfixe\n");
    // affichagePostfixeRecursive(root);


    // printf("affichage prefixe Iteratif\n");
    // affichagePrefixeIteratif(root);
    printf("affichage infixe Iteratif\n");
    affichageInfixeIteratif(root);
    
    return 0;
}