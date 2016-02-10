//
//  Vectors.hpp
//  GameEngine
//
//  Created by David Lively on 2/10/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef VECTORS_H
#define VECTORS_H


template<typename T>
struct TVector2
{
    T X;
    T Y;
    
};

template<typename T>
struct TVector3 : public TVector2<T>
{
    T z;
};

template<typename T>
struct TVector4 : public TVector3<T>
{
    T w;
};

struct Vector2 : TVector2<float> {};
struct Vector3 : TVector3<float> {};
struct Vector4 : TVector4<float> {};


#endif /* Vectors_hpp */
