#include <random>

#include "Location.h"
class Geolocalization {
 public:
  virtual Location Request();
};

class GeolocationApp : public Geolocalization {
 public:
  Location Request() override;
};