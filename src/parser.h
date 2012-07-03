/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_H__
#define __PARSER_H__

namespace delta {
	namespace parser {

		class Parser_Context;

	/** Parser
	 * Reads from an input stream and extracts an Abstract Syntax Tree from it.
	 */
		class Parser {

		public:
			Parser();


		private:
			Parser_Context*			m_engineContext;


		};


	} // namespace delta
} // namespace parser

#endif


