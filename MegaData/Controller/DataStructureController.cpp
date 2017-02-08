//
//  DataStructureController.cpp
//  MegaData
//
//  Created by Trevino, Peyton on 2/8/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"
using namespace std;

DataStructureController :: DataStructureController()
{
    
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    
    cout << "Switching to the array testing" << endl;
    testIntArray();
    cout << "Finished testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    
}
