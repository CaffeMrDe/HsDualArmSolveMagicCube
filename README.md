# HsDualArmSolveMagicCube
HsRobot design


Software Dependency Library
glog
gtest
ros-kinetic

//init
string info_log = home + "master_info_";
google::SetLogDestination(google::INFO, info_log.c_str());
string warning_log = home + "master_warning_";
google::SetLogDestination(google::WARNING, warning_log.c_str());
//log out
LOG(INFO) << "info";
LOG(WARNING) << "warning";
