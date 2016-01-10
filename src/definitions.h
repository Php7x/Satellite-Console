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

const char * felog = ".log";
const char * fexml = ".xml";


const char * dlogs = "logs/";
const char * ddata = "data/";
const char * d_xml = "data/xml/";
#define DXML d_xml
#define EXML fexml

#endif // DEFINITIONS_H