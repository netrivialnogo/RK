enable_testing()

add_executable(MediatorTests test_mediator.cpp)
target_link_libraries(MediatorTests Mediator)

add_test(NAME MediatorTests COMMAND MediatorTests)