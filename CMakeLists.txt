
cmake_minimum_required(VERSION 2.8)

project(deltalang)


# ================================================================
#
# Properties of the generated makefile
#
# ================================================================

set_directory_properties(PROPERTIES CLEAN_NO_CUSTOM 1)


# ================================================================
#
# Target lexerc -> generates the lexer with the flex command
#
# ================================================================

# Execute the lexer generator (flex) to get the latest changes applied

add_custom_command(OUTPUT src/lex.yy.cpp
					COMMAND flex -Cf -o lex.yy.cpp lexer/delta.l
					MAIN_DEPENDENCY src/lexer/delta.l
					WORKING_DIRECTORY src
					COMMENT "Generating the lexer engine (flex).")


add_custom_target(lexerc DEPENDS src/lex.yy.cpp)




# ================================================================
#
# Target parserc -> generates the parser with the bison command
#
# ================================================================

# Execute the parser generator (bison) to get the latest changes applied

add_custom_command(OUTPUT src/parser.yy.cpp src/parser.yy.hpp
					COMMAND bison -v -o parser.yy.cpp parser/delta.y
					MAIN_DEPENDENCY src/parser/delta.y
					WORKING_DIRECTORY src
					COMMENT "Generating the parser engine (bison).")


add_custom_target(parserc DEPENDS src/parser.yy.cpp)





# ================================================================
# 
# Files to compile.
# 
# ================================================================

# Get all the files inside the src and src/lexer directories, relative to the root.
file(GLOB C_SOURCE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/*.cpp" "src/*.cc" "src/*.c")

list(APPEND C_SOURCE_FILES "src/lex.yy.cpp" "src/parser.yy.cpp")

list(REMOVE_DUPLICATES C_SOURCE_FILES)
message("In dir src/:         ${C_SOURCE_FILES}")


file(GLOB C_PARSER_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/parser/*.cpp" "src/parser/*.cc" "src/parser/*.c")

message("In dir src/parser/:         ${C_PARSER_FILES}")


file(GLOB C_ENCODER_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/encoder/*.cpp" "src/encoder/*.cc" "src/encoder/*.c")

message("In dir src/encoder/:         ${C_ENCODER_FILES}")



set(ALL_SOURCES ${C_PARSER_FILES})

list(APPEND ALL_SOURCES ${C_ENCODER_FILES})

list(APPEND ALL_SOURCES ${C_SOURCE_FILES})

# ================================================================
# 
# Target delta -> generates the executable file.
# 
# ================================================================

message("All sources: ${ALL_SOURCES}")
add_executable(delta ${ALL_SOURCES})

include_directories(SYSTEM "/usr/include/")

# The final executable depends on the lexer
#add_dependencies(delta lexerc)


# Tell the compiler to use the flag -lfl (flex library) to compile the lexer source file
#set_target_properties(delta
#					PROPERTIES LINK_FLAGS "-lfl")

set_target_properties(delta
					PROPERTIES COMPILE_FLAGS "-std=c++11")

set(CMAKE_CXX_COMPILER "g++")


# set(CMAKE_VERBOSE_MAKEFILE 1)



