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


Grid* g_grid = nullptr;

bool AsteroidsGame::OnCreateScene()
{
    CreateShip();
    
    Create<InputHandler>("asteroids-input");
    
    auto& grid = Create<Grid>("test-grid");
    g_grid = &grid;

//    grid.Transform.Scale *= 2;
//    grid.Transform.Translation.Z = -2;
//    grid.Transform.Rotation.X = TO_RADIANS();

    return true;
    
}

void AsteroidsGame::OnUpdate(const GameTime& time)
{
    auto& cam = Game::Camera;
    
    cam.Transform.Translation.Z = 2;
//    cam.Transform.Translation.X = sin(time.TotalSeconds());
    g_grid->Transform.Rotation = time.TotalSeconds();
}



Ship& AsteroidsGame::CreateShip()
{
    auto& ship = Create<Ship>("ship");
    
    return ship;
}



