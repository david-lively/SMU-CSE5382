//
//  SimpleGame.cpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include <vector>
#include <iostream>

using namespace std;

#include "AsteroidsGame.h"
#include "Mesh.h"
#include "Material.h"
#include "Files.h"


bool AsteroidsGame::OnCreateScene()
{
    CreateShip();

    return true;
    
}


Ship& AsteroidsGame::CreateShip()
{
    auto& ship = Create<Ship>("ship");
    
    return ship;
}



