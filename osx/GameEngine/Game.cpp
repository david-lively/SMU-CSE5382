//
//  Game.cpp
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Game.h"

Game::Game() : m_window(nullptr), m_isInitialized(false)
{
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
    
    OnCreateScene();
    
    gl::ClearColor(0,0,0.2f,1);
    
    m_isInitialized = true;

    return m_isInitialized;
}

void Game::Run()
{
    if(!Initialize())
    {
        Log::Error << "Could not initialize GLFW window.\n";
        return;        
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
    
}




void Game::Shutdown()
{
    if (nullptr != m_window)
    {
        glfwDestroyWindow(m_window);
        m_window = nullptr;
    }
    
    
}












