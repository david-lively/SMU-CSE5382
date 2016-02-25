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
#include "InputHandler.h"
#include "Grid.h"

#include <cmath>


bool AsteroidsGame::OnCreateScene()
{
    CreateShip();
    
    Create<InputHandler>("asteroids-input");
    
    auto& grid = Create<Grid>("test-grid");

    grid.Transform.Scale *= 2;
//    grid.Transform.Translation.Z = -10;
//    grid.Transform.Rotation.X = TO_RADIANS(10);

    return true;
    
}

void AsteroidsGame::OnUpdate(const GameTime& time)
{
    auto& cam = Game::Camera;
    
    cam.Transform.Translation.X = sin(time.TotalSeconds());
}



Ship& AsteroidsGame::CreateShip()
{
    auto& ship = Create<Ship>("ship");
    
    return ship;
}



