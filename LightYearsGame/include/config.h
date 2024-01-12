#pragma once
#include <string>

std::string GetResourceDir()
{
#ifdef NDEBUG // release build
    return "assets/";
#else
    return "/Volumes/T9/workspace/learn-cpp-and-make-game-udemy/LightYears/LightYearsGame/assets/";
#endif
}
