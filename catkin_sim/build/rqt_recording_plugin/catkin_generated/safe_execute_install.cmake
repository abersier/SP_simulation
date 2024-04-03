execute_process(COMMAND "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/rqt_recording_plugin/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/rqt_recording_plugin/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
