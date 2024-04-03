#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/rqt_recording_plugin"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/lib/python3/dist-packages:/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/rqt_recording_plugin/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/rqt_recording_plugin" \
    "/usr/bin/python3" \
    "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/src/anymal_rsl/anymal_rsl_utils/anymal_rsl_recording/rqt_recording_plugin/setup.py" \
     \
    build --build-base "/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/build/rqt_recording_plugin" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install" --install-scripts="/home/abersier/Documents/ETH/Semester_Project/SP_simulation/catkin_sim/install/bin"