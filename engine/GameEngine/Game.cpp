//
//  Game.cpp
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Game.h"

#include <iostream>


Game* Game::m_instance = nullptr;
Camera Game::Camera;

using namespace std;

Game::Game() : m_window(nullptr), m_isInitialized(false)
{
    if (nullptr != m_instance)
    {
        Log::Error << "Only one instance of Game is allowed\n";
        throw;
    }
    
    m_instance = this;
}


bool Game::OnInitialize()
{
    if (m_isInitialized)
    {
        Log::Warning << "Game is already initialized.";
        return false;
    }

    
    
    /* Initialize the library */
    if (!glfwInit())
    {
        Log::Error << "Could not initialize GLFW\n";
        return false;
    }
    
    
    /// specify some window and OpenGL API parameters
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, 1); // ,GL_TRUE);
//
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//    glfwWindowHint(GLFW_DEPTH_BITS, 16);
    
    
    /// enable multisampling on a 4x4 grid (for full-screen anti-aliasing)
    glfwWindowHint(GLFW_SAMPLES, 4);
    
    /* Create a windowed mode window and its OpenGL context */
    m_window = glfwCreateWindow(1280, 720, "Hello World", NULL, NULL);
    
    if (!m_window)
    {
        Log::Error << "Could not create GLFW window\n";
        return false;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(m_window);
    
    if (!gl::sys::LoadFunctions())
    {
        Log::Error << "Could not bind OpenGL function pointers.\n";
        glfwTerminate();
        return false;
    }
    
    
    check_gl_error();
    
    const GLubyte* renderer = gl::GetString (gl::RENDERER); // get renderer string
    const GLubyte* version = gl::GetString (gl::VERSION); // version as a string

    Log::Info << "Renderer " << renderer << endl;
    Log::Info << "OpenGL version supported: " << version << endl;

    if(!OnCreateScene())
        return false;
    
    gl::ClearColor(0,0,0.2f,1);
    
    m_isInitialized = true;

    return m_isInitialized;
}

bool Game::Run()
{
    if(!Initialize())
    {
        Log::Error << "Could not initialize GLFW window.\n";
        return false;
    }
    
    GameTime time;

    
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(m_window))
    {
        /* Poll for and process events */
        glfwPollEvents();
        
        Update(time);
        
        
        gl::Clear(gl::COLOR_BUFFER_BIT | gl::DEPTH_BUFFER_BIT);
        
        Render(time);
        
        /* Render here */
        /* Swap front and back buffers */
        glfwSwapBuffers(m_window);
        
        auto title = "Time: " + std::to_string(time.TotalSeconds());
        
        glfwSetWindowTitle(m_window, title.c_str());
                           
        time.Update();
    }
    
    Dispose();
    
    return true;
    
}

void Game::Shutdown()
{
    if (nullptr != m_window)
    {
        glfwDestroyWindow(m_window);
        m_window = nullptr;
    }
    
}

/// <summary>
/// returns the size of the framebuffer (the thing we're drawing to)
/// </summary>
void Game::GetFramebufferSize(int* width, int* height)
{
	if (!m_instance->m_window)
	{
		Log::Error << "No GLFW window is available. Create a window before calling Game::GetFrameBufferSize\n";
		DEBUG_BREAK;
	}

	glfwGetFramebufferSize(m_instance->m_window, width, height);


}













