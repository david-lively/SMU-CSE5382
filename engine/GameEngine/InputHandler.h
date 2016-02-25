//
//  InputHandler.hpp
//  GameEngine
//
//  Created by David Lively on 2/25/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "GameObject.h"

class InputHandler : public GameObject
{
public:
    void OnUpdate(const GameTime& time) override;
private:
};


#endif /* InputHandler_hpp */
