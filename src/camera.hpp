#ifndef CAMERA_H
#define CAMERA_H
#include <opencv2/opencv.hpp>
#endif
// all class are under namespace svio
namespace svio
{
  // define camera class to implement all operations 
  // related to camera such as open gstream, caliberation, etc.
  class camera
  {
    public:
      // calss constructor and 
      camera();
      ~cmaera();
      std::string generate_pipeline(int capture_width, int capture_height, int display_width, int display_height, int framerate, int flip_mode);
      cv::VideoCapture openCam();// open MPI camera
      cv::VideoCapture openCam(int serial_index);//
    private:
      int serial_index = 1;

  }
}
