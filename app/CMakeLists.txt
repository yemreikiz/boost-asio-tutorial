add_executable(Timer Timer.cc)
target_link_libraries(Timer ${Boost_LIBRARIES})
add_executable(AsyncTimer AsyncTimer.cc)
target_link_libraries(AsyncTimer ${Boost_LIBRARIES})
add_executable(RepeatingTimer RepeatingTimer.cc)
target_link_libraries(RepeatingTimer ${Boost_LIBRARIES})

add_subdirectory(chat_client)
add_subdirectory(chat_server)