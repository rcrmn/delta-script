/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_FUN_CALL_H__
#define __PARSER_AST_NODE_FUN_CALL_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeSlot.h"

namespace delta {
	namespace parser {

		class AstNodeFunCall : public AstNode
		{
			public:
				
				AstNodeFunCall() : m_name(0) {};

				AstNodeFunCall(AstNode* name) : m_name(name) {};


				AstNodeType getType() const { return FunctionCall; };


				inline void setSlot(AstNode* name) { m_name = name; }

				inline void addParam(AstNode* param) { m_params.push_back(param); }

				inline AstNode* getSlot() { return m_name; }

				inline AstNode* getParam(int i) const { return m_params[m_params.size()-i-1]; }

				inline size_t getParamsCount() const { return m_params.size(); }


				virtual void test() const 
				{ 
					std::cout << " fCall{";
					m_name->test(); 
					std::cout << "} <- ("; 

					int i;

					for(i=0; i<getParamsCount(); ++i)
					{
						getParam(i)->test();
						std::cout << "$$";
					}
					std::cout << ") ";
				}

			private:

				AstNode* m_name;

				std::vector<AstNode *> m_params;

		};

	} // namespace delta
} // namespace parser

#endif




