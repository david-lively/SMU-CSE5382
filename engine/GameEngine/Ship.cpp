//
//  Ship.cpp
//  GameEngine
//
//  Created by David Lively on 2/22/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Common.h"
#include "Ship.h"
#include "Mesh.h"
#include "Game.h"
#include "Camera.h"

#include <vector>
#include <cmath>

using namespace std;

bool Ship::OnInitialize()
{
    auto& mesh = Create<Mesh>("ship-mesh");
    
    vector<float> vertices =
    {
        0,0.5f, 0
        ,
        1/3.f, -0.5f, 0
        ,
        -1/3.f, -0.5f, 0
    };
    
    vector<GLushort> indices = {0,1,2};
    
    mesh.Initialize(vertices, indices);
    
    m_mesh = &mesh;
    
    

    auto& material = Create<class Material>("ship-material");
    m_material = &material;
    
    mesh.Material = &material;
    material.FillType = PolygonMode::Line;
    
    
    return material.Build("Shaders/primitive");
}

void Ship::OnUpdate(const GameTime& time)
{
    
}


void Ship::OnRender(const GameTime& time)
{
    
    auto& cam = Game::Camera;
    

    m_material->Bind();
    m_material->SetUniform("World", Transform.GetMatrix());
    m_material->SetUniform("View",cam.GetViewMatrix());
    m_material->SetUniform("Projection",cam.GetProjectionMatrix());
}

