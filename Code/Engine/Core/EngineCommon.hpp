#pragma once
#include "NamedStrings.hpp"
#include "EventSystem.hpp"
#include "Engine/Input/InputSystem.hpp"

//-----------------------------------------------------------------------------------------------
#define UNUSED(x) (void)(x);

//-----------------------------------------------------------------------------------------------
extern NamedStrings g_gameConfigBlackboard; // declared in EngineCommon.hpp, defined in EngineCommon.cpp

//-----------------------------------------------------------------------------------------------
enum class EndianMode
{
	NATIVE,
	LITTLE_ENDIAN,
	BIG_ENDIAN
};

EndianMode GetPlatformNativeEndianMode();