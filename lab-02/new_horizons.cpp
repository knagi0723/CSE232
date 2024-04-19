// WRITE YOUR CODE HERE

#include <iostream>
#include <iomanip>

int main() {

  long int au_k = 149598000;
  long int au_m = 92955800;
  long int speed_l = 299792458;
  double vel_k = 14.33;
  double vel_m = 8.90;
  double init_dist = 37.33;

  int n;
  std::cin>>n;

  double time;
  time = n*86400;

  double dist_k = (init_dist*au_k) + (vel_k*time);
  double dist_m = (init_dist*au_m) + (vel_m*time);
  
  double meters;
  meters = dist_k*1000;

  double final_time;
  final_time = ((meters/speed_l)/3600)*2;


  std::cout << std::fixed << std::setprecision(2);
  std::cout<<dist_k<<std::endl;
  std::cout<<dist_m<<std::endl;
  std::cout<<final_time<<std::endl;
  


return 0;
}