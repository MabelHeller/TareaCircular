/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: heller
 *
 * Created on May 16, 2017, 4:26 AM
 */

#ifndef LIST_H
#define LIST_H

class List {
public:
    List();
    List(const List& orig);
    virtual ~List();

    void insertarList(char value);

    void borrarList(char value);
    void printList();

private:

    struct node {
        char data;
        struct node *nextPtr;
    };
    typedef struct node NODE;
    typedef NODE *NODEPTR;

    NODEPTR headNode;
    NODEPTR tailNode;



};

#endif /* LIST_H */

