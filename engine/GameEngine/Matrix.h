//
//  Matrix.hpp
//  GameEngine
//
//  Created by David Lively on 2/10/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef MATRIX_H
#define MATRIX_H

#include "Vectors.h"

class Matrix
{
public:
    /// X basis vector
    float m00, m01, m02, m03;
    /// y basis vector
    float m10, m11, m12, m13;
    /// z basis vector
    float m20, m21, m22, m23;
    /// translation
    float m30, m31, m32, m33;
    
    
    static Matrix Identity();
    static void CreateRotationX(Matrix& m, float radians);
    static void CreateRotationY(Matrix& m, float radians);
    static void CreateRotationZ(Matrix& m, float radians);
    
    
    static Matrix CreateRotationX(float radians);
    static Matrix CreateRotationY(float radians);
    static Matrix CreateRotationZ(float radians);
    
    static Matrix CreateRotation(float x, float y, float z);
    static Matrix CreateRotation(const Vector3& rotate);
    static Matrix CreateTranslation(float x, float y, float z);
    static Matrix CreateTranslation(const Vector3& position);
    
    static Matrix CreateScale(float x, float y, float z);
    static Matrix CreateScale(float uniformScale);
    static Matrix CreateScale(const Vector3& scale);
    
    static Matrix CreatePerspective(float fov, float aspect, float zNear, float zFar);
  
    

    
    static void Multiply(const Matrix& left, const Matrix& right, Matrix& result);
    
    static Matrix Multiply(const Matrix& left, const Matrix& right)
    {
        Matrix result;
        
        Multiply(left, right, result);
        
        return result;
    }
    
    Matrix operator*(const Matrix& right)
    {
        return Multiply(*this, right);
    }
    
    
private:
};

#endif /* Matrix_hpp */








