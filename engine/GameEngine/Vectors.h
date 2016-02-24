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
    T Z;
};

template<typename T>
struct TVector4 : public TVector3<T>
{
    T W;
};

typedef TVector2<float> Vector2;
typedef TVector3<float> Vector3;
typedef TVector4<float> Vector4;


#endif /* Vectors_hpp */
