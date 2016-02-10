//
//  SimpleGame.hpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef SIMPLEGAME_H
#define SIMPLEGAME_H

#include "Game.h"

class SimpleGame : public Game
{
public:
	SimpleGame() : ShaderFolder("Shaders/")
    {
    }
    
    bool OnCreateScene() override;
    bool LoadShaders(const std::string& baseFilename, std::string& vertexShaderSource, std::string& fragmentShaderSource);
    /// location of shaders in the file system.
	std::string ShaderFolder;
    
private:
    
};


#endif /* SimpleGame_hpp */
