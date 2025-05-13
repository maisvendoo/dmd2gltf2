set(TARGET dmd2gltf)

project(${TARGET})

file(GLOB INCLUDES "./include/*.h")
file(GLOB SOURCES "./src/*.cpp")

add_executable(${TARGET} ${INCLUDES} ${SOURCES})

target_include_directories(${TARGET} PRIVATE ../CmdParser)
target_include_directories(${TARGET} PRIVATE ./include)
