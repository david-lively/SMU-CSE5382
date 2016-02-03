#include "Log.h"

#include <iostream>
#include <ostream>
#include <sstream>
#include <cstdio>
#include <cmath>

using namespace std;
using namespace Log;

bool Log::StopOnErrors = false;

Handler Log::Error(std::cerr, "ERROR");
Handler Log::Warning(std::cerr, "WARNING");
Handler Log::Info(std::cout, "INFO");


/*
Prints an [hh:mm:ss.ms] time stamp. Surely there is an easier way to do this. :(
*/
string Log::GetTimeStamp()
{
	float total = (float)glfwGetTime();
	int ms = (int)truncf(total * 1000.f) % 1000;

	int ss = (int)floor(total);

	int sec = ss % 60;
	int hours = ss / 3600;
	int minutes = (ss % 3600) / 60;

	stringstream str;

	str << "[" << hours << ":";

	str.width(2);
	str.fill('0');

	str << minutes << ":";
	
	str.width(2);
	str << sec << ".";

	str.width(3);

	str << ms << "] ";

	return str.str();

}



