//
//  Mesh.hpp
//  Assignment2
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef MESH_H
#define MESH_H

#include <vector>
#include <functional>

#include "GameObject.h"
#include "Enums.h"
#include "Material.h"


class Mesh : public GameObject
{
public:
    Mesh(const std::string& name) : GameObject(name)
    {
        
    }
    
    Mesh() : Mesh("unnamed-mesh")
    {
        
    }
    
    Material* Material;
    
    BeginMode Type=BeginMode::Triangles;

    bool OnInitialize() override;
    
    template<typename TVertexCollection, typename TIndexCollection>
    void Initialize(TVertexCollection& vertices,  TIndexCollection& indices)
    {
        
        /// make sure there aren't any pending OpenGL errors
        check_gl_error();
        
        gl::GenVertexArrays(1, &m_vao);
        gl::BindVertexArray(m_vao);
        check_gl_error();

        /// create a GL buffer for the vertices
        gl::GenBuffers(1, &m_vertexBuffer);
        
        /// bind the buffer, so that subsequent buffer operations affect this object.
        gl::BindBuffer((GLenum)BufferTarget::ArrayBuffer, m_vertexBuffer);
        
        /// number of bytes that our vertex collection occupies
        size_t vertexBufferSize = vertices.size() * sizeof(vertices[0]);
        m_vertexCount = vertices.size();
        
        /// copy the buffer data to the GPU's memory
        gl::BufferData(
                       /// what kind of buffer is this - ArrayBuffer, Element Array Buffer
                       (GLenum)BufferTarget::ArrayBuffer
                       /// number of bytes we're sending to OpenGL
                       , vertexBufferSize
                       /// Host pointer to data to copy
                       , vertices.data()
                       /// how this buffer will be used - see OpenGL docs
                       , (GLenum)BufferUsageHint::StaticDraw
                       );
        
        /// unbind the vertex buffer
//        gl::BindBuffer((GLenum)BufferTarget::ArrayBuffer, 0);
        
        
        /// now, generate and populate the index buffer
        gl::GenBuffers(1, &m_indexBuffer);
        
        /// make the new buffer active
        gl::BindBuffer((GLenum)BufferTarget::ElementArrayBuffer, m_indexBuffer);
        
        m_indexCount = indices.size();
        size_t indexBufferSize = indices.size() * sizeof(indices[0]);
        gl::BufferData(
                       /// buffer type - ElementArrayBuffer is an index buffer
                       (GLenum)BufferTarget::ElementArrayBuffer
                       , indexBufferSize
                       , indices.data()
                       , (GLenum)BufferUsageHint::StaticDraw
                       );
        
//        gl::BindBuffer((GLenum)BufferTarget::ElementArrayBuffer, 0);

        /// make sure there aren't any pending OpenGL errors
        check_gl_error();
        
        gl::BindVertexArray(0);
        
    }
    
    void OnRender(const GameTime& time) override;

private:
    size_t m_vertexCount = 0;;
    GLuint m_vertexBuffer = 0;
    
    size_t m_indexCount = 0;
    GLuint m_indexBuffer = 0;
   
    GLuint m_vao = 0;

};



#endif /* Mesh_hpp */
