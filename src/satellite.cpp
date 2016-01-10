//////////////////////////////////////////////////////////////////////
/// Satellite - Sharox Corporation
//////////////////////////////////////////////////////////////////////
/// Toshiba Satellite C850d-112 smart drivers instaler.
/// author: Vedget <bzwierzchowski@hotmail.com> 
/// license: MIT
//////////////////////////////////////////////////////////////////////
/// C++ code library
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <memory>
#include <list>

#include "definitions.h"

/// RapidXML library for C++
#ifdef _XML_RAPID_
#include "rapidxml/rapidxml.hpp"
#ifdef _XML_RAPID_PRINT_
#include "rapidxml/rapidxml_print.hpp"
#endif // _XML_RAPID_PRINT_
#elif _XML_PUGI_
#include "ext/pugi/pugixml.hpp"
#endif


using namespace std;
using namespace rapidxml;

int main(int argc, char **argv)
{
    xml_document <> x_ini;

	xml_node <> *xdeclaration = x_ini.allocate_node(node_declaration);
	xml_attribute <> *adec = x_ini.allocate_attribute("version", "1.0");
	xdeclaration->append_attribute(adec);
	xdeclaration->append_attribute(x_ini.allocate_attribute("encoding", "UTF-8"));
	x_ini.append_node(xdeclaration);
    xml_node <> *runtime_configs = x_ini.allocate_node(node_element, "RuntimeConfigs");
	xml_node <> *mode = x_ini.allocate_node(node_element, "mode");
	xml_attribute <> *amod = x_ini.allocate_attribute("key", "debug");
	mode->append_attribute(amod);
	mode->append_attribute(x_ini.allocate_attribute("platform", "x86"));
	runtime_configs->append_node(mode);
	x_ini.append_node(runtime_configs);
	
	ofstream xml_out;
	xml_out.open("tmp.try_test.xml");
	xml_out << x_ini;

	cout << x_ini;
	x_ini.clear();


    cout << "Hello world!" << endl;

	//Sleep(1000);
	system("pause");
	return EXIT_SUCCESS;
}
