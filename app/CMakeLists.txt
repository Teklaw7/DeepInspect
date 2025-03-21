cmake_minimum_required(VERSION 3.10)

# Set the project name
project(DeepInspectApp)

# Recursively find all source, header, and UI files in the app directory
file(GLOB_RECURSE APP_SOURCES "*.cpp" "*.hpp" "*.ui")

# Add a library target for the app sources
add_library(app_sources ${APP_SOURCES})

# Link the Qt6Widgets library
target_link_libraries(app_sources PRIVATE Qt6::Widgets)

# Export the sources to the parent scope
set(PROJECT_SOURCES ${APP_SOURCES} PARENT_SCOPE)