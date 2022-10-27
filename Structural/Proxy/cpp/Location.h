struct Location {
  long latitude;
  long longitude;
  Location() = default;
  Location(long _latitude, long _longitude)
      : latitude(_latitude), longitude(longitude) {}
};