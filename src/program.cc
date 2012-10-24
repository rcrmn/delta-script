#include "program.h"

#include <string>
#include <fstream>

using namespace std;

namespace delta
{
	Program::Program()
		: fileLoaded(false)
	{
	}


	Program::Program(const std::string& filePath)
		: fileLoaded(false)
	{
	}

	bool Program::loadProgram(const string& filePath)
	{
		if(fileLoaded) return false;

		ifstream ifs(filePath.c_str());
		
		if(!ifs) // We failed to open the file
		{
			// Exception?
			return false;
		}

		// TODO: Test if the file opened is already a compiled file



	}


};


