/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: heller
 *
 * Created on May 16, 2017, 4:24 AM
 */

#include <cstdlib>

#include "List.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    List *myList = new List();
    
    myList->insertarList('w');
    myList->insertarList('c');
    myList->insertarList('a');
    myList->printList();
    myList->borrarList('a');
    //myList->printList();
    
}

