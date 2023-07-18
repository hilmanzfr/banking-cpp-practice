cmake_minimum_required(VERSION 3.10)

# Set the project name
project(BankingApp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 14)

# Add all the .cpp files in the src directory to the build
file(GLOB SOURCES "src/*.cpp")

# Add the include directory to the include path
include_directories(include)

# Specify the executable to be built from the source file
add_executable(BankingApp ${SOURCES})