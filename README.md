# HsDualArmSolveMagicCube
HsRobot design


Software Dependency Library
glog
gtest
ros-kinetic

# 经过ROS的话题 服务统一作为数据的传输 ，不能执行其他操作


//init
string info_log = home + "master_info_";
google::SetLogDestination(google::INFO, info_log.c_str());
string warning_log = home + "master_warning_";
google::SetLogDestination(google::WARNING, warning_log.c_str());
//log out
LOG(INFO) << "info";
LOG(WARNING) << "warning";
