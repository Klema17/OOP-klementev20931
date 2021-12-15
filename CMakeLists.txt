cmake_minimum_required(VERSION 3.20)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled2 main.cpp  WriteFile.cpp WriteFile.h
               ReadFile.cpp ReadFile.h Grep.cpp
               Grep.h Dump.cpp Dump.h Sort.cpp
               Sort.h Replace.cpp Replace.h
               Count.cpp Count.h IWorker.cpp IWorker.h
               ConfigReader.cpp ConfigReader.h WorkflowExecutor.cpp WorkflowExecutor.h
               Factory.cpp Factory.h)