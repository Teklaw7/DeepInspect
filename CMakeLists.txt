cmake_minimum_required(VERSION 3.16)

project(DeepInspect VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_subdirectory(app)

# Ensure QT_VERSION_MAJOR is defined
if(NOT DEFINED QT_VERSION_MAJOR)
    set(QT_VERSION_MAJOR 6)
endif()

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(DeepInspect
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(DeepInspect SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(DeepInspect
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(DeepInspect PRIVATE Qt6::Widgets app_sources)

if(${QT_VERSION_MAJOR} EQUAL 6)
    qt_finalize_executable(DeepInspect)
endif()