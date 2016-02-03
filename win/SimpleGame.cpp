//
//  SimpleGame.cpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include <vector>

using namespace std;

#include "SimpleGame.h"
#include "Mesh.h"
#include "Material.h"




void SimpleGame::OnCreateScene()
{
    check_gl_error();

    auto& cube = Create<Mesh>("simple-mesh");
    
    check_gl_error();
    
    /// create a screen-aligned quad
    
    vector<float> coordinates =
    {
        -0.5f, +0.5f, 0.f
        ,
        +0.5f, +0.5f, 0.f
        ,
        +0.5f, -0.5f, 0.f
        ,
        -0.5f, -0.5f, 0.f
    };
    
    vector<GLushort> indices =
    {
        0, 1, 2
        ,
        2, 3, 0
    };
    
    cube.Initialize(coordinates, indices);
    
    
    /// vertex shader source
    auto vert =
    "#version 150                       \n"
    "in vec3 Pos;                          \n"
    "void main()                        \n"
    "{                                  \n"
    "    gl_Position = vec4(Pos,1);\n"
    "}                                  \n"
    ;
    
    /// fragment shader source
    auto frag =
    "#version 150                       \n"
    "out vec4 fragmentColor;            \n"
    "void main() {                      \n"
    "    fragmentColor = vec4(1,0,1,1); \n"
    "}                                  \n"
    ;
    
    auto& material = Create<Material>("simple-material");
    if(!material.Build(vert, frag))
    {
        DEBUG_BREAK;
    }
    
    cube.Material = &material;
}
