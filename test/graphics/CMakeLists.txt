ADD_EXECUTABLE(basic basic.c)
TARGET_LINK_LIBRARIES(basic kiss2)

ADD_EXECUTABLE(blobtastic_test blobtastic.c)
TARGET_LINK_LIBRARIES(blobtastic_test kiss2 blobtastic)