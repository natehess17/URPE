# URPE
Uh-Right Physics Engine

6/11/2022
Initial concept:
  - Handles soft and rigid body dynamics
  - Collision detection
  - Collision response
  - Modularity for defining knew objects
  - Efficient meshing
  - Sleep technique for inactive bodies

Additional thoughts:
  - Use the eigen library for matrix math
  - Make use of RK4 methods to model spring mass model between particles
  - Engine should be modular hosted on a server so need a method to read and write serialized data to clients (protobufs, flatbuffers ???)

Library dependencies:
  Eigen https://eigen.tuxfamily.org/dox/group__TutorialMatrixClass.html (math)
  Flatbuffers https://google.github.io/flatbuffers/ (serialization)
  OpenGL https://www.opengl.org/sdk/libs/ (Graphics Rendering for testing, engine is server based so all rendering should be done client side)
