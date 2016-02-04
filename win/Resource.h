//
//  GLObject.hpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef RESOURCE_H
#define RESOURCE_H

#include "GameObject.h"

class Resource : public GameObject
{
public:
    GLint Handle;
    
    Resource(const std::string& name) : GameObject(name), Handle(-1)
    {
        
    }
    
    virtual ~Resource() = 0;
    
    
    virtual void Bind()
    {
        
    }
    
    virtual void Unbind()
    {
        
    }
    
    virtual void EnsureCreated()
    {
        
    }
    
    
private:
};


#endif /* GLObject_hpp */
