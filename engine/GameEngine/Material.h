//
//  Material.hpp
//  GameEngine
//
//  Created by David Lively on 2/3/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

#include "Common.h"
#include "GameObject.h"
#include "Matrix.h"
#include "Enums.h"


class Material : public GameObject
{
public:
    PolygonMode FillType = PolygonMode::Fill;
    
    
    bool Build(std::string vertexShaderSource, std::string fragmentShaderSource);
    
    bool Build(const std::string& path);
    
    void OnDispose() override;
    
    GLuint Program() const
    {
        return m_program;
    }
    
    /// <summary>
    /// Gets the shader information log.
    /// </summary>
    /// <param name="shader">The shader.</param>
    /// <returns></returns>
    std::string GetShaderLog(GLuint shader);
    std::string GetProgramLog(GLuint program);
    
	virtual void SetUniforms(const GameTime& time);

	void Bind()
	{
		gl::UseProgram(m_program);
	}

	/*
	set a uniform shader value, if it exists

	We use this method to check if a uniform is available before actually trying to set its value.
	In some implementations, calling a gl::Uniform*() function with an invalid location parameter will
	generate an OpenGL error.
	*/
	template<typename T>
	void SetUniform(const std::string& name, const T& value)
	{
		auto location = gl::GetUniformLocation(m_program, name.c_str());

		if (location >= 0)
			SetUniform(location, value);
	}

	/*
	set a FLOAT uniform shader value. Do not call this directly. Instead, use the templated
	SetUniform<T> method, which ensures that a uniform exists before setting a value.
	*/

	inline void SetUniform(int location, float value)
	{
		gl::Uniform1f(location, value);
	}

	inline void SetUniform(int location, int value)
	{
		gl::Uniform1i(location, value);
	}
    
    inline void SetUniform(int location, const Matrix& m)
    {
        gl::UniformMatrix4fv(location, 1, false, &m.m00);
    }



private:
    GLuint m_program;

	bool CompileSuccessful(GLint program);
    
    
};

#endif /* Material_hpp */
