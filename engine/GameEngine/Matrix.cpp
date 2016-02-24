//
//  Matrix.cpp
//  GameEngine
//
//  Created by David Lively on 2/10/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Matrix.h"

#include <cmath>

using namespace std;


Matrix Matrix::Identity()
{
    Matrix m;

    m.m00 = 1;
    m.m11 = 1;
    m.m22 = 1;
    m.m33 = 1;
    
    return m;
}

void Matrix::CreateRotationX(Matrix& m, float radians)
{
    float cosTheta = cos(radians);
    float sinTheta = sin(radians);
    
    m.m11 = cosTheta;
    m.m12 = -sinTheta;
    m.m21 = sinTheta;
    m.m22 = cosTheta;
    
}

void Matrix::CreateRotationY(Matrix& m, float radians)
{
    float cosTheta = cos(radians);
    float sinTheta = sin(radians);
    
    m.m00 = cosTheta;
    m.m02 = -sinTheta;
    m.m20 = sinTheta;;
    m.m22 = cosTheta;
    
}

void Matrix::CreateRotationZ(Matrix& m, float radians)
{
    float cosTheta = cos(radians);
    float sinTheta = sin(radians);
    
    m.m00 = cosTheta;
    m.m01 = -sinTheta;
    m.m10 = sinTheta;
    m.m11 = cosTheta;
    
}


Matrix Matrix::CreateRotationX(float radians)
{
    Matrix m;

    CreateRotationX(m,radians);
    
    return m;
    
}

Matrix Matrix::CreateRotationY(float radians)
{
    Matrix m;
    
    CreateRotationY(m,radians);
    
    return m;
    
}

Matrix Matrix::CreateRotationZ(float radians)
{
    Matrix m;
    
    CreateRotationZ(m,radians);
    
    return m;
    
}


Matrix Matrix::CreateRotation(float x, float y, float z)
{
    auto m = CreateRotationX(x) * CreateRotationY(y) * CreateRotationZ(z);
    
    return m;
}

Matrix Matrix::CreateRotation(const Vector3& rotate)
{
    return CreateRotation(rotate.X, rotate.Y, rotate.Z);
    
}


Matrix Matrix::CreateTranslation(float x, float y, float z)
{
    Matrix m;
    
    m.m30 = x;
    m.m31 = y;
    m.m32 = z;
    
    return m;
}

Matrix Matrix::CreateTranslation(const Vector3& position)
{
    return CreateTranslation(position.X, position.Y, position.Z);
}


Matrix Matrix::CreateScale(float x, float y, float z)
{
    Matrix m;
    
    m.m00 = x;
    m.m11 = y;
    m.m22 = z;
    
    return m;
}


Matrix Matrix::CreateScale(float uniformScale)
{
    return CreateScale(uniformScale, uniformScale, uniformScale);
}

Matrix Matrix::CreateScale(const Vector3& scale)
{
    return CreateScale(scale.X, scale.Y, scale.Z);
    
}


void Matrix::Multiply(const Matrix& left, const Matrix& right, Matrix& result)
{
    /// borrowed from OpenTK
    float lm11 = left.m00, lm12 = left.m01, lm13 = left.m02, lm14 = left.m03,
    lm21 = left.m10, lm22 = left.m11, lm23 = left.m12, lm24 = left.m13,
    lm31 = left.m20, lm32 = left.m21, lm33 = left.m22, lm34 = left.m23,
    lm41 = left.m30, lm42 = left.m31, lm43 = left.m32, lm44 = left.m33,
    rm11 = right.m00, rm12 = right.m01, rm13 = right.m02, rm14 = right.m03,
    rm21 = right.m10, rm22 = right.m11, rm23 = right.m12, rm24 = right.m13,
    rm31 = right.m20, rm32 = right.m21, rm33 = right.m22, rm34 = right.m23,
    rm41 = right.m30, rm42 = right.m31, rm43 = right.m32, rm44 = right.m33;
    
    result.m00 = (((lm11 * rm11) + (lm12 * rm21)) + (lm13 * rm31)) + (lm14 * rm41);
    result.m01 = (((lm11 * rm12) + (lm12 * rm22)) + (lm13 * rm32)) + (lm14 * rm42);
    result.m02 = (((lm11 * rm13) + (lm12 * rm23)) + (lm13 * rm33)) + (lm14 * rm43);
    result.m03 = (((lm11 * rm14) + (lm12 * rm24)) + (lm13 * rm34)) + (lm14 * rm44);

    result.m10 = (((lm21 * rm11) + (lm22 * rm21)) + (lm23 * rm31)) + (lm24 * rm41);
    result.m11 = (((lm21 * rm12) + (lm22 * rm22)) + (lm23 * rm32)) + (lm24 * rm42);
    result.m12 = (((lm21 * rm13) + (lm22 * rm23)) + (lm23 * rm33)) + (lm24 * rm43);
    result.m13 = (((lm21 * rm14) + (lm22 * rm24)) + (lm23 * rm34)) + (lm24 * rm44);
    
    result.m20 = (((lm31 * rm11) + (lm32 * rm21)) + (lm33 * rm31)) + (lm34 * rm41);
    result.m21 = (((lm31 * rm12) + (lm32 * rm22)) + (lm33 * rm32)) + (lm34 * rm42);
    result.m22 = (((lm31 * rm13) + (lm32 * rm23)) + (lm33 * rm33)) + (lm34 * rm43);
    result.m23 = (((lm31 * rm14) + (lm32 * rm24)) + (lm33 * rm34)) + (lm34 * rm44);
    
    result.m30 = (((lm41 * rm11) + (lm42 * rm21)) + (lm43 * rm31)) + (lm44 * rm41);
    result.m31 = (((lm41 * rm12) + (lm42 * rm22)) + (lm43 * rm32)) + (lm44 * rm42);
    result.m32 = (((lm41 * rm13) + (lm42 * rm23)) + (lm43 * rm33)) + (lm44 * rm43);
    result.m33 = (((lm41 * rm14) + (lm42 * rm24)) + (lm43 * rm34)) + (lm44 * rm44);
}


Matrix Matrix::CreatePerspective(float fov, float aspect, float zNear, float zFar)
{
    Matrix m;
    
    auto halfHeight = zNear * tan(fov / 2.0f);
    
    auto halfWidth = halfHeight * aspect;
    
    auto depth = zFar - zNear;
    
    m.m00 = zNear / halfWidth;
    m.m11 = zNear / halfHeight;
    m.m22 = -(zFar + zNear) / depth;
    m.m23 = -1;
    m.m32 = -2 * zFar * zNear / depth;
    m.m33 = 0;
    
    return m;
}








