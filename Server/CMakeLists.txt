set(serverSources main.cpp
	Server.cpp
	Session.cpp)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11")
find_package(Boost REQUIRED system)
if (NOT Boost_FOUND)
	message("Not found boost")
endif()
include_directories(${Boost_INCLUDE_DIRS})
add_executable(server ${serverSources})
target_link_libraries(server ${Boost_LIBRARIES} pthread)
