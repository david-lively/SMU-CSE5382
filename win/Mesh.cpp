//
//  Mesh.cpp
//  Assignment2
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Mesh.h"
#include "Common.h"

#include <iostream>

using namespace std;


bool Mesh::OnInitialize()
{
    Log::Info << "Mesh::OnInitialize\n";
    
    /// initialize assets for OpenGL
    
    return true;
}


void Mesh::OnRender(const GameTime& time)
{
    check_gl_error();
    
    auto& material = *Material;
    
    gl::UseProgram(material.Program());
    
    check_gl_error();
    gl::BindBuffer((GLenum)BufferTarget::ElementArrayBuffer, m_indexBuffer);

    check_gl_error();
    gl::BindBuffer((GLenum)BufferTarget::ArrayBuffer, m_vertexBuffer);
    
    auto location = gl::GetAttribLocation(material.Program(), "Pos");
    check_gl_error();
    
//    gl::EnableVertexAttribArray(location);
    check_gl_error();

    gl::VertexAttribPointer(location, 3, gl::FLOAT, false, 0, nullptr);
    check_gl_error();
    
    Log::Info << "Attribute at " << location << endl;
    
    check_gl_error();
    
//    gl::DrawElements((GLenum)Type, (GLuint)m_indexCount, gl::UNSIGNED_SHORT, (GLvoid*)nullptr);
    gl::DrawElements((GLenum)Type, 2, gl::UNSIGNED_SHORT, (GLvoid*)nullptr);
    check_gl_error();

    gl::DrawArrays(gl::LINES, 0, (GLsizei)m_vertexCount);// m_vertexArray.VertexBuffer().Count());
    
    
    
    gl::UseProgram(0);
    
    check_gl_error();
}





