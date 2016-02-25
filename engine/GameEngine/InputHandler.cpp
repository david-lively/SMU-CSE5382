//
//  InputHandler.cpp
//  GameEngine
//
//  Created by David Lively on 2/25/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "InputHandler.h"
#include "Common.h"
#include "Game.h"

void InputHandler::OnUpdate(const GameTime& time)
{
    auto* window = Game::Instance().Window();
    
    if (glfwGetKey(window, GLFW_KEY_ESCAPE))
    {
        Log::Info << "ESCape key pressed. Closing.\n";
        glfwSetWindowShouldClose(window, true);
    }
}


