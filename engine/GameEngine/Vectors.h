//
//  Vectors.hpp
//  GameEngine
//
//  Created by David Lively on 2/10/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef VECTORS_H
#define VECTORS_H


struct Vector2
{
    float X;
    float Y;
    
    Vector2() : X(0), Y(0)
    {
    }
    
    Vector2(float x, float y) : X(x), Y(y)
    {
        
    }
    
};

struct Vector3 : public Vector2
{
    float Z;
    
    Vector3() : Vector2(), Z(0)
    {
        
    }
    
    Vector3(float x, float y, float z) : Vector2(x,y), Z(z)
    {
        
    }
    
    template<typename T>
    inline Vector3 operator* (const T& multiplier) const
    {
        return Vector3(X * multiplier, Y * multiplier, Z * multiplier);
    }
    
    template<typename T>
    inline Vector3& operator*=(const T& rval)
    {
        X *= rval;
        Y *= rval;
        Z *= rval;
        
        return *this;
    }
    
    template<typename T>
    inline Vector3& operator+=(const T& rval)
    {
        X += rval.X;
        Y += rval.Y;
        Z += rval.Z;
        
        return *this;
    }

    template<typename T>
    inline Vector3& operator-=(const T& rval)
    {
        X -= rval.X;
        Y -= rval.Y;
        Z -= rval.Z;
        
        return *this;
    }

    template<typename T>
    inline Vector3& operator=(const T& rval)
    {
        X = rval;
        Y = rval;
        Z = rval;
        
        return *this;
    }
    
    
    
};

struct Vector4 : public Vector3
{
    float W;
    
    Vector4() : Vector3(), W(0)
    {
        
    }
    
    Vector4(float x, float y, float z, float w) : Vector3(x,y,z)
    {
        
    }
};


#endif /* Vectors_hpp */
