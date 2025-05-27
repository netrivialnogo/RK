add_library(Mediator STATIC
    mediator/BusinessMediator.cpp
)

target_include_directories(Mediator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(BusinessApp main.cpp)
target_link_libraries(BusinessApp Mediator)