@echo off
"C:\Program Files\Epic Games\UE_5.8\Engine\Build\BatchFiles\Build.bat" DroneEditor Win64 Development "%~dp0Drone.uproject" -WaitMutex
pause
