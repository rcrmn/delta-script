/**
 *
 */

#if ! defined __BYTE_CODE_H__
#define __BYTE_CODE_H__

namespace delta {

	namespace byteCode {

		enum {
			PushNumber,			// Pushes a number to the stack
			PushTrue,			// Pushes the boolean true
			PushFalse,			// Pushes the boolean false
			PushNull,			// Pushes null
			PushSymbol,			// Pushes a symbol
			PushString,			// Pushes a string

			Duplicate,			// Pushes a copy of whatever is in the stack at the specified index

			Pop,				// Pops N items from the stack

			CallFunction,		// Calls the function at the specified index
		};

	};

};



#endif
