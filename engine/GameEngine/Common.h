#ifndef COMMON_H
#define COMMON_H

#include <functional>
#include <stdexcept>
#include <string>
#include <ostream>
#include <sstream>

#ifdef _MSC_VER
#define DEBUG_BREAK __debugbreak()
#else
#define DEBUG_BREAK throw runtime_error("DEBUG_BREAK not supported on this platform");
#endif

#include <iostream>
#include <iomanip>

#include "gl_core_4_3.hpp"
#include "glfw3.h"

#include "Log.h"

#pragma region adds pragma WARNING(text...) message to emit a warning to the VS error list window

#define STRINGIZE_HELPER(x) #x
#define STRINGIZE(x) STRINGIZE_HELPER(x)
#define WARNING(desc) message(__FILE__ "(" STRINGIZE(__LINE__) ") : warning: " #desc)

#pragma endregion

#define THROW_NOT_IMPLEMENTED throw runtime_error("NOT IMPLEMENTED")

#define DBOUT( s )							\
{											\
   std::ostringstream os_;					\
   os_ << s;								\
   OutputDebugString( os_.str().c_str() );  \
   cerr << s;								\
}
#define PI (3.14159f)
#define TO_RADIANS(degrees) (degrees * PI/180.f)
#define TO_DEGREES(radians) (radians * 180.f/PI)

#include <iostream>

class GameTime;
/// <summary>
/// identifier type for all managed resources.
/// </summary>
typedef unsigned int ID;

//template<typename T>
//bool MatchesFilter(const T& a, const T& b)
//{
//	return (a & b) == b;
//}

typedef std::function<void(GameTime&)> GameTimeEvent;

typedef std::function<void()> NotifyEvent;

template<typename TCollection, typename TValue>
void clear(TCollection &collection, TValue value)
{
	for (auto it = begin(collection); it != end(collection); ++it)
	{
		*it = value;
	}
}

template<typename T1, typename T2>
inline void append(T1 &target, T2 &source)
{
	target.insert(end(target), begin(source), end(source));
}

template<typename T1, typename T2>
inline void move_append(T1 &target, T2 &source)
{
	target.insert(end(target), make_move_iterator(begin(source)), make_move_iterator(end(source)));
}

#include "GLError.h"



#endif