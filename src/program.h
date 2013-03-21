/**
 *
 */

#if ! defined __PROGRAM_CLASS_H__
#define __PROGRAM_CLASS_H__

#include "deltaConfig.h"
#include <vector>
#include <string>
#include <map>

namespace delta 
{

	// This class represents an executable program. It can compile a code file or
	// open a bytecode file and read from it.
	class Program
	{
		public:

			Program();
			Program(const std::string& filePath);

			/**
			 * Only works if no file has already been loaded. This way, the class is one use only.
			 */
			bool loadProgram(const std::string& filePath);


			inline bool isFileLoaded() { return fileLoaded; }

		private:

			// Determines if the class has been properly initialized
			bool fileLoaded;

			// Vector that contains the program as bytecode
			std::vector<byte> m_programCode;

			// Contains a reference to the symbols used in the program
			//  the symbol itself will be stored in the state of the interpreter
			std::map<refid_t, refid_t> m_symbols;

			// Contains the strings referenced in this file
			std::map<refid_t, std::string> m_strings;

	};


};


#endif

