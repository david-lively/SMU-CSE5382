//
//  main.cpp
//  Template for SMU CSE 5382 / 7382 projects.
//
//  Created by David Lively on 1/25/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include <cstdlib>

#include "gl_core_4_3.hpp"
#include "glfw3.h"



int main(void)
{
    GLFWwindow* window;
    
    /* Initialize the library */
    if (!glfwInit())
        return -1;
    
    /// specify some window and OpenGL API parameters
	/// Note that these may cause compaitiblity issues on some systems. 
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, 1); // ,GL_TRUE);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
//    glfwWindowHint(GLFW_DEPTH_BITS, 16);
    
    
    /// enable multisampling on a 4x4 grid (for full-screen anti-aliasing)
    glfwWindowHint(GLFW_SAMPLES, 4);
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1280, 720, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    
    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    
    if (!gl::sys::LoadFunctions())
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    
    
    /// clear window to cyan
    gl::ClearColor(1, 0, 1, 1);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        gl::Clear(gl::COLOR_BUFFER_BIT | gl::DEPTH_BUFFER_BIT);
        
        /* Render here */
        /* Swap front and back buffers */
        glfwSwapBuffers(window);
        
        /* Poll for and process events */
        glfwPollEvents();
    }
    
    glfwTerminate();
    return 0;
}