# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "esp32_ros: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iesp32_ros:/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(esp32_ros_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_custom_target(_esp32_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "esp32_ros" "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(esp32_ros
  "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/esp32_ros
)

### Generating Services

### Generating Module File
_generate_module_cpp(esp32_ros
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/esp32_ros
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(esp32_ros_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(esp32_ros_generate_messages esp32_ros_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_dependencies(esp32_ros_generate_messages_cpp _esp32_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(esp32_ros_gencpp)
add_dependencies(esp32_ros_gencpp esp32_ros_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS esp32_ros_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(esp32_ros
  "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/esp32_ros
)

### Generating Services

### Generating Module File
_generate_module_eus(esp32_ros
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/esp32_ros
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(esp32_ros_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(esp32_ros_generate_messages esp32_ros_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_dependencies(esp32_ros_generate_messages_eus _esp32_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(esp32_ros_geneus)
add_dependencies(esp32_ros_geneus esp32_ros_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS esp32_ros_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(esp32_ros
  "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/esp32_ros
)

### Generating Services

### Generating Module File
_generate_module_lisp(esp32_ros
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/esp32_ros
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(esp32_ros_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(esp32_ros_generate_messages esp32_ros_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_dependencies(esp32_ros_generate_messages_lisp _esp32_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(esp32_ros_genlisp)
add_dependencies(esp32_ros_genlisp esp32_ros_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS esp32_ros_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(esp32_ros
  "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/esp32_ros
)

### Generating Services

### Generating Module File
_generate_module_nodejs(esp32_ros
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/esp32_ros
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(esp32_ros_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(esp32_ros_generate_messages esp32_ros_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_dependencies(esp32_ros_generate_messages_nodejs _esp32_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(esp32_ros_gennodejs)
add_dependencies(esp32_ros_gennodejs esp32_ros_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS esp32_ros_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(esp32_ros
  "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/esp32_ros
)

### Generating Services

### Generating Module File
_generate_module_py(esp32_ros
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/esp32_ros
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(esp32_ros_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(esp32_ros_generate_messages esp32_ros_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/esp32_ros/msg/FloatWithHeader.msg" NAME_WE)
add_dependencies(esp32_ros_generate_messages_py _esp32_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(esp32_ros_genpy)
add_dependencies(esp32_ros_genpy esp32_ros_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS esp32_ros_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/esp32_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/esp32_ros
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(esp32_ros_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/esp32_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/esp32_ros
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(esp32_ros_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/esp32_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/esp32_ros
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(esp32_ros_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/esp32_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/esp32_ros
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(esp32_ros_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/esp32_ros)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/esp32_ros\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/esp32_ros
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(esp32_ros_generate_messages_py std_msgs_generate_messages_py)
endif()