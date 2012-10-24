/**
 *
 */

#if ! defined __BYTE_CODE_H__
#define __BYTE_CODE_H__

#include <cstdint>

namespace delta {

	namespace byteCode {

		enum class OpCode : std::uint8_t {
			PushNumber = 1,		// Pushes a number to the stack
			PushTrue,			// Pushes the boolean true
			PushFalse,			// Pushes the boolean false
			PushNull,			// Pushes null
			PushSymbol,			// Pushes a symbol
			PushString,			// Pushes a string

			Duplicate,			// Pushes a copy of whatever is in the stack at the specified index

			Pop,				// Pops N items from the stack

			CallFunction,		// Calls the function at the specified index
			Return,				// Returns to the calling function, copying as many returned values as specified

			Jump,				// Jumps to the specified position
			BranchOnTrue,		// Branches if the top value of the stack evaluates to true
		};

	};

};



#endif
