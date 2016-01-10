//////////////////////////////////////////////////////////////////////
/// Satellite - Sharox Corporation
//////////////////////////////////////////////////////////////////////
/// Toshiba Satellite C850d-112 smart drivers instaler.
/// author: Vedget <bzwierzchowski@hotmail.com> 
/// license: MIT
//////////////////////////////////////////////////////////////////////
#pragma once

namespace tool
{
	using namespace std;

	class xml
	{
	public:
		xml(string path = "");
		~xml();
		void name_file(string file);
		string get_path();
	private:
		string s_path, s_file;
	};
}