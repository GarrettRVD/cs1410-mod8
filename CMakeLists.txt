cmake_minimum_required(VERSION 3.8)
project(mod8)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES dynamicMem.cpp)
#set(SOURCE_FILES testStrClass.cpp MyString.cpp MyString.h)
#set(SOURCE_FILES dynamicIntArray.cpp)
#set(SOURCE_FILES exception1.cpp)
#set(SOURCE_FILES distanceException.cpp Distance.cpp Distance.h)
#set(SOURCE_FILES Const.cpp Person.cpp Person.h)
set(SOURCE_FILES FreeStore.cpp Resource.cpp Resource.h)
add_executable(mod8 ${SOURCE_FILES})