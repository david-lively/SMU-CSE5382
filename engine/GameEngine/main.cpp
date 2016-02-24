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
#include "AsteroidsGame.h"


int main(void)
{
    AsteroidsGame game;
    
    Log::Info << "Running game.\n";
    
    game.Run();
    
    Log::Info << "Done!\n";

#ifdef _MSC_VER
	cout << "Press enter to exit\n";
	getchar();
#endif

}