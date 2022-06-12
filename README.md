# URPE

Uh-Right Physics Engine
6/11/2022
# Overview
Server should be running the physics engine for the instance of the game being played. Players load into a home screen where they select game mode, can see stats, skins, etc. (stored in SQL data base), and gamemode select. Need means of partying up (another server connection). Player selects play and connects to the server. Each player object is generated into the game and a connection of the player to the server hosting the game. After all connections are made and player data loaded game can begin. High level inputs from users are sent over the network to the server (need a recieve method - flatbuffers), passed through the physics engine for player model to react appropriately, physics engine also keep a single model of the world and only perform computations on objects within a certain radi of a player (sleep technique), engine also handles collision detections and response of player and world/player objects, physics engine computations and collision data/damage are backaged in the buffer and sent to necessary clients.

The server is responsible for:
- physics engine
- connecting players
- returning the appropriate data for client rendering (network)
- storing persistent data (skins, stats, etc)

Initial concepts for the physics engine:
- Handles soft and rigid body dynamics
- Collision detection
- Collision response
- Modularity for defining knew objects
- Efficient meshing
- Sleep technique for inactive bodies

# Dependencies
Library dependencies:
- Eigen https://eigen.tuxfamily.org/dox/group__TutorialMatrixClass.html (math)
- Flatbuffers https://google.github.io/flatbuffers/ (serialization)
- OpenGL https://www.opengl.org/sdk/libs/ (Graphics Rendering for testing, engine is server based so all rendering should be done client side)

# Working Thoughts
- Use the eigen library for matrix math
- Make use of RK4 methods to model spring mass model between particles
- Engine should be modular hosted on a server so need a method to read and write serialized data to clients (protobufs, flatbuffers ???)

Breadcrumbs as I do things to get workspace setup
1. Downloaded the git hub desktop app
2. Linked vscode and git hub together
3. Installed git bash https://git-scm.com/downloads
4. Went to the Flatbuffers link and followed directions at "Building with VCPKG"