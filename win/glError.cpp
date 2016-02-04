/*
* see http://blog.nobel-joergensen.com/2013/01/29/debugging-opengl-using-glgeterror/
*/
#include "GLError.h"
#include <iostream>
#include <string>

#include "Common.h"
//#include "gl_core_4_3.hpp"
//
//#include "Log.h"

using namespace std;

void m_check_gl_error(const char *file, int line) {
	GLenum err(gl::GetError());

    bool shouldStop = false;

    while (err != gl::NO_ERROR_) {
        shouldStop = true;

        string error;

		switch (err) {
		case gl::INVALID_OPERATION:      error = "INVALID_OPERATION";      break;
		case gl::INVALID_ENUM:           error = "INVALID_ENUM";           break;
		case gl::INVALID_VALUE:          error = "INVALID_VALUE";          break;
		case gl::OUT_OF_MEMORY:          error = "OUT_OF_MEMORY";          break;
		case gl::INVALID_FRAMEBUFFER_OPERATION:  error = "INVALID_FRAMEBUFFER_OPERATION";  break;
		default:
			error = "Unknown error";
		}

		Log::Error << "gl::" << error.c_str() << " - " << file << ":" << line << endl;

		err = gl::GetError();
	}
    
    if (shouldStop && Log::StopOnErrors)
    {
        Log::Error << "Errors were encountered - stopping\n";
        DEBUG_BREAK;
    }
}
