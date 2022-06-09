#include <iostream>
#include <string>
#include <stdlib.h>
#include "./include/main.h"

void Tree::init() {
    root = NULL;
    size = 0u;
}

int Tree::isEmpty() {
    return(root == NULL);
}

node *Tree::newNode(std::string statement, std::string leftOp, std::string rightOp) {
    node *newNode = (node*) malloc(sizeof(node));
    newNode->statement = statement;
    newNode->leftOption = leftOp;
    newNode->rightOption = rightOp;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void Tree::hardCodedInsert() {
    node* newnode = newNode(
        "Kamu ingin bekerja dengan perangkat lunak atau data ?",
        "Perangkat_Lunak",
        "Data"
    );
    root = newnode;
    size++;

    newnode = newNode(
        "Apakah kamu suka mengerjakan sesuatu yang berhubungan dengan algoritma ?",
        "Ya",
        "Tidak"
    );
    root->left = newnode;
    size++;

    newnode = newNode(
        "Kamu lebih tertarik pada database atau kecerdasan buatan ?",
        "Database",
        "Kecerdasan_Buatan"
    );
    root->right = newnode;
    size++;

    newnode = newNode(
        "Alpro",
        " ",
        " "
    );
    root->left->left = newnode;
    size++;

    newnode = newNode(
        "Kamu lebih tertarik pada software development atau jaringan ?",
        "Software_Development",
        "Jaringan"
    );
    root->left->right = newnode;
    size++;

    newnode = newNode(
        "MCI",
        " ",
        " "
    );
    root->right->left = newnode;
    size++;

    newnode = newNode(
        "KCV",
        " ",
        " "
    );
    root->right->right = newnode;
    size++;

    newnode = newNode(
        "Kamu lebih tertarik pada hal-hal yang berkaitan dengan grafis atau sistem informasi ?",
        "Grafis",
        "Sistem_Informasi"
    );
    root->left->right->left = newnode;
    size++;

    newnode = newNode(
        "KBJ",
        " ",
        " "
    );
    root->left->right->right = newnode;
    size++;

    newnode = newNode(
        "IGS",
        " ",
        " "
    );
    root->left->right->left->left = newnode;
    size++;

    newnode = newNode(
        "RPL",
        " ",
        " "
    );
    root->left->right->left->right = newnode;
    size++;
}
