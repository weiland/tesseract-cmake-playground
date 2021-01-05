project(text_comparator_tests)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        libs::text_comparator
)

add_test(text_comparator_tests ${PROJECT_NAME})
