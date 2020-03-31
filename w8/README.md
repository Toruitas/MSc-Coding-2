# ARM architecture - Jetson Nano

The Jetson Nano is an interesting piece of hardware. It's explicitly a device to develop and run ML algorithms on the edge. Robots, sensors, etc. All the good stuff. It has plenty of GPIO as well to connect to all sorts of things. 

To start using it, I started here: (Getting Started)[https://developer.nvidia.com/embedded/learn/get-started-jetson-nano-devkit]

While powerful, it turns out that using various packages on the Nano are quite difficult. First off, it's based on `aarch64`, so there are few pre-compiled packages for it. Second, it comes with OpenCV (and TensorFlow and more) installed already, but there's no easy way to get it back if you accidentally install an incorrect version. It follows that it's also impossible (to my knowledge) to install OpenCV in a virtual environment. Maybe possible to create a symlink, but haven't explored that option. 

On top of that, Anaconda will not run on the device normally. (Miniforge)[https://github.com/conda-forge/miniforge] is the best semi-operational option there.

It would normally be bad juju, but this time, installing everything to the root Python (`pip3 install --user package_name`) instead of within a virtual environment is the way to go.

This makes the Nano a single-use at a time machine. That's fine, it's meant to do one thing at the edge. Just need to change the frame of mind and get used to the idea of having multiple SD cards for multiple purposes. 

For more specific installation instructions please see (my other experiments repo)[https://github.com/Toruitas/Jetson-Nano-Experiments].

So, to the task at hand. 

## Greenscreen

This was an experiment in using the depth-sensing feature of the Intel Realsense Camera, and using Numpy to paint everything beyond a certain depth green. It would be trivial to replace the green with any other image. 

Numba is used to increase parallelization and speed of Numpy's re-painting of the background by pre-compiling Numpy-heavy sections to machine code (tis magic). On my development machine it runs at realtime. On the Jetson Nano, it is incredibly slow. I ran out of time and have yet to profile the script to see which parts are slowing it down. Most things are experimental on aarch64.

To run it, connect an Intel Realsense Camera and run `python greenscreen.py`. It will open a viewing window automatically. `ctrl+c` in the terminal to exit.

## Discover People

Building on the Greenscreen, and again using the Intel Realsense Camera, the Discover People script uses a pre-trained MobileNetSSD Caffe model to locate visitors to Tate and blurs them out. There's a colorful rainbow bounding box. The camera view is flipped to achieve a mirror effect, since the camera was facing the same direction as the screen. 

To run it, connect an Intel Realsense Camera and run `python discover_people.py`. It will open a viewing window automatically. `ctrl+c` in the terminal to exit.

Both scripts run slowly enough on the Jetson Nano that to continue working on this sort of project would necessitate a move to either more powerful hardware or C++. The Realsense Camera has a C++ API so it would be a relatively smooth transition.