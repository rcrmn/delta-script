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

		class Parser;


/** Parser_Context
 * This class is used to maintain the state of the parser and lexer
 * throughout their execution.
 */
		class Parser_Context {

			protected:

				struct str_container {
					char* str;
					long int len;
				};
				typedef struct str_container str_container_t;

			public:

/** m_scanner
 * Used by the lexer and parser to keep the state of the lexer.
 */
				void*				m_scanner;

/** m_parser
 * Contains a reference to the parser that created this Context.
 */
				Parser*				m_parser;


/** m_is
 * Contains the input stream for the lexer.
 */
				std::istream*		m_is;


				int result;


			public:
/** constructor
 * @param is contains the input stream to be used by this parser.
 */
				Parser_Context			(std::istream* is = &std::cin);

/** destructor
 */
				virtual ~Parser_Context	(void);
				

/** addString
 * Adds a string to the pool as a copy of the given 
 * one and returns the new string's pointer.
 * @param or_str original string.
 * @param stripQuotes determines if the first and last character 
 *						of the string shall be skipped. defaults to true.
 *
 * @returns pointer to the new string.
 */
				char* addString(const char* or_str = NULL, bool stripQuotes = false);
				
/** appendToString
 * Appends characters to the last string added.
 * @param ap_str characters to append.
 *
 * @returns pointer to the new string.
 */
				char* appendToString(const char* ap_str);


			protected:
/** m_strings
 * Contains the strings buffer to keep track of all the created strings.
 */
				std::vector<str_container_t>	m_strings;


			protected:

/** init_scanner
 * Initializes the state of the scanner and sets our internal variable to it. 
 * Called by de constructor.
 */
				void		init_scanner (void);


/** destroy_scanner
 * Calls the methods of the scanner for it to be destroyed. 
 * Called by the destructor.
 */
				void		destroy_scanner (void);


/** clear_strings
 * Frees all the memory used by the strings buffer `m_strings`
 */
				void		clear_strings(void);



			

		};

	};
};




#endif
