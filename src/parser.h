/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_H__
#define __PARSER_H__

#include <iostream>

namespace delta {
	namespace parser {

		class Parser_Context;
		class AbstractSyntaxTree;

	/** Parser
	 * Reads from an input stream and extracts an Abstract Syntax Tree from it.
	 */
		class Parser {

		public:
			Parser();

			void parse(std::istream* file);

			AbstractSyntaxTree* getAST();

		private:
			Parser_Context*			m_engineContext;
			
			AbstractSyntaxTree*		m_syntaxTree;

		};


	} // namespace delta
} // namespace parser

#endif


