//
//  Game.hpp
//  Assignment2
//
//  Created by David Lively on 2/1/16.
//  Copyright © 2016 David Lively. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <vector>

#include "Common.h"
#include "GameObject.h"
#include "Camera.h"

class Game : public GameObject
{
public:
    Game();
    GameTime Time;
    static Camera Camera;
    
    
    bool Run();
    
    bool OnInitialize() override;
    
    virtual bool OnCreateScene()
    {
        Log::Info << "Create any scene objects here.\n";
        return true;
    }

	static void GetFramebufferSize(int* width, int* height);
    
    static Game& Instance() { return *m_instance; }
    
    GLFWwindow* Window() const { return m_window; }

private:
    GLFWwindow* m_window;
    static Game* m_instance;
    
    
    bool m_isInitialized;

    void Shutdown();
    
};

#endif /* Game_hpp */
