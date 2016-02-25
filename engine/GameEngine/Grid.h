//
//  Grid.hpp
//  GameEngine
//
//  Created by David Lively on 2/25/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef GRID_H
#define GRID_H

#include "WorldEntity.h"
#include "Mesh.h"
#include "Material.h"

class Grid : public WorldEntity
{
public:
    
    bool OnInitialize() override;
    
    void OnUpdate(const GameTime& time) override;
    void OnRender(const GameTime& time) override;
    
    Mesh& CreateMesh();
private:
    Mesh* m_mesh;
    Material* m_material;
    
private:
    
};


#endif /* Grid_hpp */
