# CMakeList.txt : projet CMake pour Synthese_TP2, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

project ("Template")

# Current directory is Synthese_TP1
set(glm_DIR ../Libraries/glm-master/cmake/glm)
find_package( glm REQUIRED )

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR ../Libraries/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML 2.5.1 COMPONENTS graphics window REQUIRED)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (Template "Template.cpp" "Template.h")

target_link_libraries(${PROJECT_NAME} glm::glm)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window)