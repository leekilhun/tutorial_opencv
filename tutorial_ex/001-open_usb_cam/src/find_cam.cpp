
#include <iostream>
#include "opencv2/opencv.hpp"

int main() {
    // 카메라 장치 열기 (기본 카메라: 0)
    cv::VideoCapture cam(0);

    if (!cam.isOpened()) {
        std::cerr << "카메라를 열 수 없습니다." << std::endl;
        return -1;
    }

    // 카메라 정보 가져오기
    int frame_width = static_cast<int>(cam.get(cv::CAP_PROP_FRAME_WIDTH));
    int frame_height = static_cast<int>(cam.get(cv::CAP_PROP_FRAME_HEIGHT));
    double fps = cam.get(cv::CAP_PROP_FPS);
    int fourcc = static_cast<int>(cam.get(cv::CAP_PROP_FOURCC));

    std::cout << "해상도: " << frame_width << "x" << frame_height << std::endl;
    std::cout << "프레임 속도: " << fps << " FPS" << std::endl;
    std::cout << "FOURCC 코드: " << fourcc << std::endl;

    // 카메라 닫기
    cam.release();
    return 0;
}
