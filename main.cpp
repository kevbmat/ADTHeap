//
//  main.cpp
//  ADTHeapProject
//
//  Created by Kevin Mattappally on 4/20/18.
//  Copyright © 2018 Kevin Mattappally. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Heap.h"
void openInputFile(ifstream& infile);
void doInserts();
void PrintExceptionMessage(const Exception& except);

int main() {
    Heap mytree;
    ifstream infile;
    Key akey;
    openInputFile(infile);
    infile >> mytree;
    
    cout << "Initial ADT Heap:" << endl;
    cout << mytree << endl;
    
    cout << "Inserting 13:" << endl;
    try
    {
        mytree.insert(13);
    }
    catch (Exception except)
    {
        PrintExceptionMessage(except);
    }
    cout << mytree << endl;
    
    cout << "Inserting 20:" << endl;
    try
    {
        mytree.insert(20);
    }
    catch (Exception except)
    {
        PrintExceptionMessage(except);
    }
    cout << mytree << endl;
    
    cout << "Removing 20:" << endl;
    mytree.remove(akey);
    cout << mytree << endl;
    
    cout << "Removing 14:" << endl;
    mytree.remove(akey);
    cout << mytree << endl;
}

// Open the file to be read from in the main program
// pre: infile is not open to a file
// post: infile can be used to read from a file
// usage: openInputFile(infile);
void openInputFile(ifstream& infile)
{
    infile.open("input.dat");
    if(infile.fail())
    {
        cout << "Sorry there was an error in opening the input file";
        exit(1);
    }
}

void PrintExceptionMessage(const Exception& except)
{
    cout << endl << endl;
    cout << except.What();
    cout << endl << endl;
}
