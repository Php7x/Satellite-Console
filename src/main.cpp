//////////////////////////////////////////////////////////////////////
/// Satellite - Sharox Corporation
//////////////////////////////////////////////////////////////////////
/// Toshiba Satellite C850d-112 smart drivers instaler.
/// author: Vedget <bzwierzchowski@hotmail.com> 
/// license: MIT
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <list>

#include "definitions.h"
#include "ext/rapid/rapidxml.hpp"
#include "ext/rapid/rapidxml_print.hpp"

using namespace std;
using namespace rapidxml;

string path2file;

int main(int argc, char **argv)
{
	auto callcm = []()->void {
		cout << "Hello World!" << endl;
	};
	callcm();

	xml_document <> sheet;

	xml_node <> *otag = sheet.allocate_node(node_declaration, "1.0", "utf8");
	xml_node <> *configs = sheet.allocate_node(node_element, "configs");
	xml_node <> *runtime_app = sheet.allocate_node(node_element, "runtime_app");
	xml_attribute <> *rt = sheet.allocate_attribute("id", "1");
		runtime_app->append_attribute(rt);
		runtime_app->append_attribute(sheet.allocate_attribute("mode", "debug_x86"));
		xml_node <> *ini_file = sheet.allocate_node(node_element, "boost_ini", "data/xml/boost_deb.xml");
			runtime_app->append_node(ini_file);
			configs->append_node(runtime_app);
	sheet.allocate_node(otag);
	sheet.allocate_node(configs);


	//xml_node <> startup

	path2file = DXML;
	path2file.append("test_try1");
	path2file.append(EXML);

	cout << path2file.c_str();
	
	
	//Sleep(1000);
	system("pause");
	return EXIT_SUCCESS;
}