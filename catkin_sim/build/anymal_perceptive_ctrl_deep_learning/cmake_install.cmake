# Install script for directory: /home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/dependencies/anymal_perceptive_ctrl_deep_learning/anymal_perceptive_ctrl_deep_learning

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/gtest/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE PROGRAM FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE PROGRAM FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/setup.bash;/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/setup.bash"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/setup.sh;/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/setup.sh"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/setup.zsh;/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/setup.zsh"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/anymal_perceptive_ctrl_deep_learning.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_perceptive_ctrl_deep_learning/cmake" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/anymal_perceptive_ctrl_deep_learningConfig.cmake"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/catkin_generated/installspace/anymal_perceptive_ctrl_deep_learningConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_perceptive_ctrl_deep_learning" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/dependencies/anymal_perceptive_ctrl_deep_learning/anymal_perceptive_ctrl_deep_learning/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_perceptive_ctrl_deep_learning/lib/libanymal_perceptive_ctrl_deep_learning.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so"
         OLD_RPATH "/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/anymal_perceptive_ctrl_deep_learning" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/dependencies/anymal_perceptive_ctrl_deep_learning/anymal_perceptive_ctrl_deep_learning/include/anymal_perceptive_ctrl_deep_learning/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_perceptive_ctrl_deep_learning/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so"
         OLD_RPATH "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_perceptive_ctrl_deep_learning/lib:/opt/ros/noetic/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libanymal_perceptive_ctrl_deep_learning_plugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_perceptive_ctrl_deep_learning" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/dependencies/anymal_perceptive_ctrl_deep_learning/anymal_perceptive_ctrl_deep_learning/robot_control_plugin.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_perceptive_ctrl_deep_learning/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
