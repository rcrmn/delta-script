/*
 * Roc Ramon
 */


#pragma once
#if !defined(__PARSER_H__)
#define __PARSER_H__

#include <iostream>
#include <vector>
#include <cstring>

namespace delta {
	namespace parser {

		class Parser_Context {

			public:
				void*				m_scanner;
				std::istream*		m_is;

				int result;


			public:
				Parser_Context			(std::istream* is = &std::cin);
				

				virtual ~Parser_Context	(void);
				

/** addString
 * Adds a string to the pool as a copy of the given 
 * one and returns the new string's pointer.
 * @param or_str original string.
 * @param stripQuotes determines if the first and last character 
 *						of the string shall be skipped. defaults to true.
 */
				char* addString(const char* or_str, bool stripQuotes = true);
				


			protected:
				std::vector<char *>		m_strings;


			protected:
				void		init_scanner (void);
				void		destroy_scanner (void);

				void		clear_strings(void);
				

		};

	};
};




#endif
