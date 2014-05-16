  #include <memory>
  #include <mutex>
  #include <tuple>
  #include <string>
  #include <rtags/src/rct/rct/Apply.h>

  void callTest(int, std::string) { }

  int main(int, char**) {
      std::shared_ptr<int> ptr;
      std::mutex mtx;
      std::unique_lock<std::mutex> lock(mtx);
      std::tuple<int, std::string> tpl(5, std::string("foo"));
      applyMove(std::bind(callTest, std::placeholders::_1, std::placeholders::_2), tpl);
  }
