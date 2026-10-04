# Architecture

The Drone runtime module currently contains only a minimal Unreal C++ skeleton.

| Class | Base | Intended responsibility |
| --- | --- | --- |
| ADronePawn | APawn | Drone actor with a USceneComponent root |
| UDroneMotorComponent | UActorComponent | Future single-motor simulation |
| UDronePhysicsComponent | UActorComponent | Future forces and torques |
| UIMUSensorComponent | UActorComponent | Future IMU sensor |
| UGPSSensorComponent | UActorComponent | Future GPS sensor |
| UCameraSensorComponent | UActorComponent | Future camera sensor |
| UMAVLinkConnection | UObject | Future MAVLink connection |
| UArduPilotInterface | UActorComponent | Future autopilot integration |
| ASimulationManager | AActor | Future simulation coordination |

Headers live in Source/Drone/Public; implementations live in Source/Drone/Private,
with matching responsibility folders. Components are available for Blueprint use,
but are not attached to the pawn automatically. Component ticking is disabled.
Pawn and manager lifecycle overrides currently only call their parent implementations.

No flight controls, physics, sensor output, networking, or MAVLink protocol is implemented.
Content folders reserve space for future assets; Tests reserves space for future tests.
