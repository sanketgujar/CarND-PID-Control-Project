# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

PID controller consist of 3 main components:
1. Proportional (P): The proportional value controls how much proportional effort will be applied to correct the error at that instance. It was used to steer the car along the center using the cross track error(cte).
2. Integral Error(I): The integral factor control for the  recovery operations to be smoother. It will make sure we don't oscillate and reach the desired position smoothly.
3. Derivative (D): The derivative is used to eliminate the accumulated error on the integral. If the actions are too fast, it will keep it under-control


#Searching Parameter   
The parameters were choosen by Hit and Trial. First Kp was selected, to avoid overshooting  Kd was tuned and the car was doing lapse in the simulator correctly and thenI experimented with Ki but it didn't improve the result. 
The final params are [Kp : 0.14 , Ki : 0.0 , Kd : 2.9]

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 


