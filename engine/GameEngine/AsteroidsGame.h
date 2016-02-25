//
//  SimpleGame.hpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef ASTEROIDS_H
#define ASTEROIDS_H

#include "Game.h"
#include "Ship.h"
#include "Asteroid.h"

class AsteroidsGame : public Game
{
public:
	AsteroidsGame() : ShaderFolder("Shaders/")
    {
    }
    
    bool OnCreateScene() override;
    
    void OnUpdate(const GameTime& time) override;

    /// location of shaders in the file system.
	std::string ShaderFolder;
    
    Ship& CreateShip();

    
private:
    
};


#endif /* SimpleGame_hpp */
