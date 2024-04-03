# Install script for directory: /home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording

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
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE PROGRAM FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/_setup_util.py")
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
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE PROGRAM FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/env.sh")
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
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/setup.bash"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/local_setup.bash"
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
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/setup.sh"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/local_setup.sh"
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
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/setup.zsh"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/local_setup.zsh"
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
file(INSTALL DESTINATION "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording/srv" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/srv/StartRecording.srv"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/srv/StartRecordingInternal.srv"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/srv/StopRecording.srv"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/srv/StopRecordingInternal.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording/cmake" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/anymal_rsl_recording-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/include/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/share/roseus/ros/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/share/common-lisp/ros/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/share/gennodejs/ros/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/lib/python3/dist-packages/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/devel/.private/anymal_rsl_recording/lib/python3/dist-packages/anymal_rsl_recording")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/anymal_rsl_recording.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording/cmake" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/anymal_rsl_recording-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording/cmake" TYPE FILE FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/anymal_rsl_recordingConfig.cmake"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/catkin_generated/installspace/anymal_rsl_recordingConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording" TYPE FILE FILES "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/anymal_rsl_recording" TYPE DIRECTORY FILES
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/bin"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/data"
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/anymal_rsl_recording/scripts"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/anymal_rsl_recording/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
