cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

set(CMAKE_CXX_STANDARD 17)

add_executable(YourExecutableName 
    main.cpp 
    Book.cpp   # Add implementation files here
    Library.cpp
)