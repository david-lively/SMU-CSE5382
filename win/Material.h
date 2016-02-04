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


class Material : public GameObject
{
public:
    bool Build(std::string vertexShaderSource, std::string fragmentShaderSource);
    
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
    
    static void ListAttributes(GLuint program);
    
    
private:
    GLuint m_program;
    
    
};

#endif /* Material_hpp */
