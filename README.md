# Simulation of Epuck robot in Gazebo Simulator
Repository for epuck robot simulation in gazebo environment using gazebo_ros packages.

## Getting Started
Clone the repository using the following command.
```
git clone https://github.com/SharathRaparthy/Epuck-Robot-Gazebo.git
```
### Requirements
```
Ubuntu 16.04
Robot Operating System - Kinetic
Gazebo7
```

### Installing

Follow these steps to install all packages and dependencies
#### ROS Kinetic Installation
* Configure your Ubuntu repositories
```
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```
* Set up your keys
```
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
```
* Installation
```
sudo apt-get update
sudo apt-get install ros-kinetic-desktop-full
```
* Initialize rosdep
```
sudo rosdep init
rosdep update
```
* Environment setup
```
echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc
source ~/.bashrc
source /opt/ros/kinetic/setup.bash
```
* Dependencies
```
sudo apt-get install python-rosinstall python-rosinstall-generator python-wstool build-essential
```


#### Gazebo Installation
* Setup your computer to accept software from packages.osrfoundation.org.
```
sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable `lsb_release -cs` main" > /etc/apt/sources.list.d/gazebo-stable.list'
```
* Setup keys
```
wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
```
* Install Gazebo and gazebo_ros_pkgs

```
sudo apt-get update
sudo apt-get install libgazebo7-dev
sudo apt-get install gazebo7
```
* Installing gazebo_ros_pkgs
```
sudo apt-get install ros-kinetic-gazebo-ros-pkgs ros-kinetic-gazebo-ros-control ros-kinetic-navigation ros-kinetic-ros-control ros-kinetic-ros-controllers
```

#### Set up your ROS Workspace

* Create a catkin workspace
```
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make
source devel/setup.bash
```

* Clone the Epuck-Robot-Gazebo repository
```
cd ~/catkin_ws/src
git clone https://github.com/SharathRaparthy/Epuck-Robot-Gazebo.git
```

## Deployment
Once the installation is done, you are good to go ahead. Go to Epuck-Robot-Gazebo directory by using following command.
```
cd ~/catkin_ws
```
Build the code in catkin using catkin_make command. (You should always call catkin_make in the root of your catkin workspace)
```
catkin_make
```
Please install the missing dependencies if you are getting dependency errors while building

Assuming that the catkin_make is successful without any errors, the final step is to launch the gazebo simulator using the following commands.
```
source devel/setup.bash
roslaunch epuck_gazebo epuck2.launch
```
## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

