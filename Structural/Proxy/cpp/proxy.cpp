#include <iostream>

#include "Geolocation.h"
class GeolocalizationProxy : public Geolocalization {
 private:
  GeolocationApp* geoApp;
  bool checkAcess() const {
    std::cout << "Checking permissions";
    return true;
  };
  void logLocation(Location location) {
    std::cout << "Logging (" << location.latitude << ", " << location.longitude
              << ") coordenates";
  }

 public:
  GeolocalizationProxy() { geoApp = new GeolocationApp(); }
  Location Request() override {
    if (!checkAcess()) {
      std::cerr << "Error: Not possible to acess";
      throw -1;
    }
    Location location = geoApp->Request();
    logLocation(location);
    return location;
  }

  ~GeolocalizationProxy() { delete geoApp; }
};

int main() {}