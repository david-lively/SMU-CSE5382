//
//  Camera.hpp
//  GameEngine
//
//  Created by David Lively on 2/22/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef CAMERA_H
#define CAMERA_H

#include "Common.h"
#include "WorldEntity.h"
#include "Matrix.h"
#include "Vectors.h"

class Camera : public WorldEntity
{
public:
    float FieldOfView;
    float ZNear;
    float ZFar;
    
    Camera() : FieldOfView(TO_RADIANS(45)), ZNear(1), ZFar(1000)
    {
        
    }

    Matrix& GetProjectionMatrix();
    Matrix& GetViewMatrix();
    
private:
    float m_previousAspectRatio = 0;
    Matrix m_projectionMatrix;
    
    Matrix m_viewMatrix;
};


#endif /* Camera_h */
