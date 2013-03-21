/*
 *
 */

#if ! defined(__ENCODER_H__)
#define __ENCODER_H__


namespace delta 
{

	class Program;

	namespace parser {
		class AbstractSyntaxTree;
	};

namespace encoder
{

class Encoder
{
	public:

		Encoder();

		void setAST(parser::AbstractSyntaxTree* ast);

		void encode();

	private:

		parser::AbstractSyntaxTree* m_syntaxTree;

		Program* program;
};

};
};



#endif


