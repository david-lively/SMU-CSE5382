//
//  Mesh.cpp
//  Assignment2
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Mesh.h"
#include "Common.h"
#include "Log.h"

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

	Material->Bind();
	Material->SetUniforms(time);
    
    gl::PolygonMode(gl::FRONT_AND_BACK, (GLenum)Material->FillType);

    gl::BindVertexArray(m_vao);
    /// bind the vertex and index buffers
    gl::BindBuffer((GLenum)BufferTarget::ElementArrayBuffer, m_indexBuffer);
    gl::BindBuffer((GLenum)BufferTarget::ArrayBuffer, m_vertexBuffer);
    
    /// get the attribute location of Position (vertex) from the compiled shader
    auto location = gl::GetAttribLocation(Material->Program(), "Pos");
    
    /// enable position - really useful when we have a lot of vertex attributes and want to disable some of them
    gl::EnableVertexAttribArray(location);
    
    /// Describe the vertex format to GL. This is a 3-component struct with float members (ie, vec3 in GLSL)
    gl::VertexAttribPointer(location, 3, gl::FLOAT, false, 0, nullptr);
    //56 draw it!
    gl::DrawElements((GLenum)Type, (GLuint)m_indexCount, gl::UNSIGNED_SHORT, (GLvoid*)nullptr);
    
    /// unbind the program
    gl::UseProgram(0);
    
    check_gl_error();
}




