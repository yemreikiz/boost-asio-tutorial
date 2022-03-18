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

find_package(Boost COMPONENTS system thread filesystem REQUIRED)

add_subdirectory(app)
