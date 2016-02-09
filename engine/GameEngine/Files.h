#ifndef FILES_H
#define FILES_H

#include <string>

#ifdef _MSC_VER
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif


#include "Log.h"

/// <summary>
/// provides file IO convenience routines
/// </summary>
class Files
{
private:
	Files() { }
public:
	static std::string Read(const std::string& path);
	static bool Exists(const std::string& path);
    
    static std::string GetCurrentDirectory()
    {        
        char cCurrentPath[FILENAME_MAX];
        
        if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath)))
        {
            Log::Error << "Could not determine working directory.";
        }
        
        cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; /* not really required */
        
        return std::string(cCurrentPath);
    }
    

};

#endif