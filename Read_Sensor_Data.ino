void calibrate()
{
  CurieIMU.autoCalibrateGyroOffset();
  CurieIMU.autoCalibrateAccelerometerOffset(X_AXIS, 0);
  CurieIMU.autoCalibrateAccelerometerOffset(Y_AXIS, 0);
  CurieIMU.autoCalibrateAccelerometerOffset(Z_AXIS, 1);
}
void read_Sensor_Data()
{
  CurieIMU.readMotionSensor(ax, ay, az, gx, gy, gz);
  yaw_rate = (gx/32768.9)*getGyroRange();
  pitch_rate = (gy/32768.9)*getGyroRange();
  roll_rate = (gz/32768.9)*getGyroRange();
  
}

