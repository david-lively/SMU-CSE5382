//
//  main.cpp
//  Template for SMU CSE 5382 / 7382 projects.
//
//  Created by David Lively on 1/25/16.
//  Copyright © 2016 David Lively. All rights reserved.
//


#include <iostream>

using namespace std;

#include "Common.h"
#include "SimpleGame.h"


int main(void)
{
    SimpleGame game;
    
    Log::Info << "Running game.\n";
    
    game.Run();
    
    Log::Info << "Done!\n";
}