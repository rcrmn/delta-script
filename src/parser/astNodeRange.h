/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_RANGE_H__
#define __PARSER_AST_NODE_RANGE_H__

#include "../deltaConfig.h"
#include "astNode.h"

namespace delta {
	namespace parser {

		class AstNodeRange : public AstNode
		{
			public:
				
				AstNodeRange() : m_start(0), m_end(0), m_step(0) {};

				AstNodeRange(AstNode* start, AstNode* end) : m_start(start), m_end(end), m_step(0) {};

				AstNodeRange(AstNode* start, AstNode* end, AstNode* step) : m_start(start), m_end(end), m_step(step) {};


				AstNodeType getType() const { return Range; };

				inline AstNode* getRangeStart() const { return m_start; };

				inline AstNode* getRangeEnd() const { return m_end; };

				inline AstNode* getRangeStep() const { return m_step; };

				inline void setRange(AstNode* start, AstNode* end, AstNode* step) { m_start = start; m_end = end; m_step = step; };
				inline void setRange(AstNode* start, AstNode* end) { setRange(start, end, 0); };

				virtual void test() const 
				{ 
					std::cout << "Range[ "; m_start->test(); std::cout << ".."; if(m_step != 0) { m_step->test(); std::cout << ".."; } m_end->test(); std::cout << " ]"; 
				}

			private:

				AstNode * m_start, * m_end, * m_step;

		};

	} // namespace delta
} // namespace parser

#endif



