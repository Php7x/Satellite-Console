//////////////////////////////////////////////////////////////////////
/// Satellite - Sharox Corporation
//////////////////////////////////////////////////////////////////////
/// Toshiba Satellite C850d-112 smart drivers instaler.
/// author: Vedget <bzwierzchowski@hotmail.com> 
/// license: MIT
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <filesystem>

#include "tool_xml.h"

#include "definitions.h"
#include "ext\pugi\pugixml.hpp"

namespace tool
{
	xml::xml(string path)
	{
		this->s_path = path;
	}

	xml::~xml()
	{
		cout << this->s_path << "(" << this->s_file << ")" << endl;
	}

	void xml::name_file(string file)
	{
		string nf_tmp = file;
		file.append(EXML);
		this->s_file = file;
	}

	string xml::get_path()
	{
		string nf1_tmp = this->s_path;
		nf1_tmp.append(this->s_file);
		return nf1_tmp;
	}
}