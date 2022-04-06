# Works with 3.12 and tested through 3.19
cmake_minimum_required(VERSION 3.12...3.19)

# Project name and a few useful settings. Other commands can pick up the results
project(BoostAsioTutorial
  VERSION 1.0.0
  DESCRIPTION "Code written based on the official Boost tutorial"
  LANGUAGES CXX)
# Salute the builder
message(STATUS "***** PROJECT_NAME is ${PROJECT_NAME} *****")
message(STATUS "***** " ${PROJECT_NAME} " version " ${PROJECT_VERSION} " *****")


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Let's ensure -std=c++xx instead of -std=g++xx
set(CMAKE_CXX_EXTENSIONS OFF)

# Let's nicely support folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)


find_package(Boost COMPONENTS system thread filesystem REQUIRED)

add_library(BoostAsioTutorial 
  include/ChatClient.h
  include/ChatServer.h
  include/ChatMessage.h)
target_include_directories(BoostAsioTutorial PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(BoostAsioTutorial ${Boost_LIBRARIES})
set_target_properties(BoostAsioTutorial PROPERTIES LINKER_LANGUAGE CXX)
add_subdirectory(app)
