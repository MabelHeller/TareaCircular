/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: heller
 * 
 * Created on May 16, 2017, 4:26 AM
 */

#include <malloc.h>
#include <stdlib.h>
#include "List.h"

List::List() {
    headNode = NULL;
    tailNode = NULL;
}

List::List(const List& orig) {
}

List::~List() {
}

void List::insertarList(char value) {
    NODEPTR newPtr, tempPtr, nuevo;
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;

    tempPtr = headNode;

    if (tempPtr == NULL) {
        headNode = newPtr;
        tailNode = newPtr;
        tailNode->nextPtr = headNode;

    } else {

        newPtr->nextPtr = tempPtr;
        tempPtr->nextPtr = tailNode;
        headNode = newPtr;

        tailNode->nextPtr = headNode;

        //newPtr->nextPtr=headNode;
        //headNode=newPtr;
        //tailNode->nextPtr=headNode;
    }
}

void List::borrarList(char value) {
    NODEPTR newPtr, tempPtr, previousPtr;
    newPtr = (NODEPTR) malloc(sizeof (NODE));
    newPtr->data = value;

    tempPtr = headNode;

    if (headNode != NULL) {
        while ((tempPtr->nextPtr != headNode)&&(tempPtr->data != value)) {
            previousPtr = tempPtr;
            tempPtr = tempPtr->nextPtr;
        }
        if (previousPtr == NULL) {
            headNode = headNode->nextPtr;
            tempPtr = NULL;
            tempPtr = headNode;

            while (tempPtr->nextPtr != headNode) {
                previousPtr = tempPtr;
                tempPtr = tempPtr->nextPtr;
            }
            previousPtr->nextPtr = headNode;
        }



    }
}

void List::printList() {
    
    NODEPTR tempNode = headNode;
    bool f = true;
    
    if(headNode==NULL){
         printf("The list is empty.  ");
    }//if
    else{
        while(f){
            printf("%c--> ", tempNode->data);
            if(tempNode==tailNode){
                f=false;
            }//if
            tempNode=tempNode->nextPtr;
        }//while
    }//else
}
