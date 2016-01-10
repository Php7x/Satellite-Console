//////////////////////////////////////////////////////////////////////
/// Satellite - Sharox Corporation
//////////////////////////////////////////////////////////////////////
/// Toshiba Satellite C850d-112 smart drivers instaler.
/// author: Vedget <bzwierzchowski@hotmail.com> 
/// license: MIT
//////////////////////////////////////////////////////////////////////

#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#if defined __WINDOWS__ || defined WIN32
	#include <sys/timeb.h>
#else
	#include "stdint.h"
#endif

#if defined WIN32 || defined __WINDOWS__

#include "windows.h"

#ifndef __GNUC__
#pragma comment( lib, "Ws2_32.lib" )
#endif

#endif // WIN32 || __WINDOWS__

#define DXML "data/xml/"
#define EXML ".xml"

#endif // DEFINITIONS_H