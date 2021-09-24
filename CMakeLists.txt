# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

# set the project name
project("Ahoj" VERSION 1.0)

#Bring the headers, such as Student.h into the project
include_directories(include include2 lib/inc module/inc)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/Student.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.c" "src2/*.c" "lib/src/*.c" "module/src/*.c")

# specify the executable and corresponding source file
add_executable(Ahoj ${SOURCES})

