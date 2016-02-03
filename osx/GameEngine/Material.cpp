//
//  Material.cpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#include "Material.h"
#include "Enums.h"

#include <string>
using namespace std;





bool Material::Build(string vertexShaderSource, string fragmentShaderSource)
{

    check_gl_error();

    GLuint vertexShader = gl::CreateShader((GLenum)ShaderType::VertexShader);
    GLint vertSourceLength = (GLint)vertexShaderSource.length();
    GLchar* vertSourceStr = (GLchar*)vertexShaderSource.c_str();
    
    gl::ShaderSource(vertexShader, 1, &vertSourceStr, &vertSourceLength);
    
    gl::CompileShader(vertexShader);
    
    auto vertexShaderlog = GetShaderLog(vertexShader);
    if ("" != vertexShaderlog)
    {
        Log::Error  << "Vertex Shader compilation error\n" << vertexShaderlog << endl;
        return false;
    }
    
    
    
    check_gl_error();
    
    GLuint fragmentShader = gl::CreateShader((GLenum)ShaderType::FragmentShader);
    GLint fragSourceLength = (GLint)fragmentShaderSource.length();
    GLchar* fragmentSourceStr = (GLchar*)fragmentShaderSource.c_str();
    
    gl::ShaderSource(fragmentShader, 1, &fragmentSourceStr, &fragSourceLength);
    
    gl::CompileShader(fragmentShader);
    check_gl_error();
    
    auto fragmentShaderLog = GetShaderLog(fragmentShader);
    if ("" != fragmentShaderLog)
    {
        Log::Error  << "Fragment Shader compilation error\n" << fragmentShaderLog << endl;
        return false;
    }
    
    
    /// link the shaders into a program
    
    m_program = gl::CreateProgram();
    
    gl::AttachShader(m_program, vertexShader);
    gl::AttachShader(m_program, fragmentShader);
    
    check_gl_error();

    gl::LinkProgram(m_program);
    
    ListAttributes(m_program);
    
    check_gl_error();
    

    auto programLog = GetProgramLog(m_program);
    if ("" != programLog)
    {
        Log::Error << "Program compilation error\n" << programLog << endl;
        return false;
    }
    
    
    Log::Info << "Successfully built program.\n";
    
    
    
    return true;
    
}

void Material::OnDispose()
{
    if (m_program > 0)
    {
        gl::UseProgram(0);
        gl::DeleteProgram(m_program);
        
        m_program = 0;
    }
    
}

string Material::GetShaderLog(GLuint shader)
{
    string log = "";
    GLint logLength = 0;
    
    gl::GetShaderiv(shader, gl::INFO_LOG_LENGTH, &logLength);
    
    if (logLength > 0)
    {
        char *logBuffer = new char[logLength];
        
        /// this is useless when using std::string
        GLint returnedLength;
        
        gl::GetShaderInfoLog(shader, logLength, &returnedLength, logBuffer);
        log = string(logBuffer);
        
        delete logBuffer;
    }
    
    return log;
}

/// <summary>
/// Gets the program information log.
/// </summary>
/// <param name="program">The program.</param>
/// <returns></returns>
string Material::GetProgramLog(GLuint program)
{
    string log = "";
    GLint logLength = 0;
    
    /// this is useless.
    GLint returnedLength;
    
    gl::GetProgramiv(program, gl::INFO_LOG_LENGTH, &logLength);
    
    if (logLength > 0)
    {
        char* logBuffer = new char[logLength + 1];
        
        gl::GetProgramInfoLog(program, logLength, &returnedLength, logBuffer);
        
        log = string(logBuffer);
        
        delete logBuffer;
    }
    
    return log;
}


void Material::ListAttributes(GLuint program)
{
    GLint attribCount;
    
    gl::GetProgramiv(program, gl::ACTIVE_ATTRIBUTES, &attribCount);
    
    Log::Info << "Found " << attribCount << " active attributes\n";
}
