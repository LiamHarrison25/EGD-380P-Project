# EGD-380P-Project

## Overview

The plan for this project is to create a randomly generated open-world game. The gameplay will be in a third-person 3D perspective. The main goal for this project is to learn and try using numerous different terrain generation techniques. The terrain will use Marching cubes to create the surface. For the random generation of the terrain, I plan on using noise for this, as it would allow me to use different noise values to simulate different biomes in the game, as the behavior of the terrain would behave differently for alternative values. For cave generation, I plan on using Perlin Worms. 
For the world, I want to break it down into chunks. This will allow the player to traverse the world and have it generate as they explore new chunks. These chunks can either include all three axes or exclude the y axis similar to how games like Minecraft handle chunking. The player will also be able to edit the terrain in some way. This will be done either with a tool that the player can use to break terrain or possibly explosives that can be thrown or set up to break terrain. 
The main goal of the game will be centered around exploration and survival. The winning state of the game is to find and complete all of the objectives, which will allow the player to escape the planet. The player will have to survive enemies and terrain hazards and will have to try and leave the planet. The objectives that the player has to complete will be different every playthrough and will be a variety of different mechanics. These could be dungeons of some sort,   collecting resources to build something, puzzles, or more. The game will not be able to be saved, so each play-through will have to be done in one sitting. This is similar to games like Enter the Gungeon and Spelunky. 
	A stretch goal for this project is to create multiple different biomes that can be explored around the world. These biomes will have different noise values which will affect the terrain being generated. These biomes will also affect the color of the terrain as well, and may also include color blending between biomes. Some basic biomes that I would like to implement would be jagged mountains, flat plains, rolling hills, and plateaus. Another stretch goal here would be to implement different versions of these biomes. Some jagged mountain biomes could be snowy, rocky, or arid. Flat plains biomes could be prairies, arid, or wetlands. These different versions of biomes would differ in the color of the biome but would use the same noise values. 


## Gameplay

The game will be in a third-person perspective and the player will be able to move around and interact with the game’s environment. The player can be moved around in the game by using WASD keys, and the mouse for direction. The space key will be used to allow the player to jump. Any other actions the player can do in the game will most likely be bound to left or right click on the mouse, the scroll wheel, or typical keys used in games like e or f on the keyboard. 

## Requirements

The platform that I am targeting for this project will be Windows. That is the platform that I have the most experience on and will be the easiest for me to develop. For the controllers for the game, I just plan on using a mouse and keyboard. 

## Non-Goals

Something that will not be focused on in this project will be the art and graphics of the game. All of the shaders will be built into Unreal Engine, and I will not make any of the art myself. Any art assets that will be used in the game will be imported from the Unreal Engine Marketplace. All of these assets will be free to use, and also free to download. All art assets that are imported into the game from the Unreal Engine Marketplace will be properly credited in the game. 
Another aspect that will not be a target of this project will be sound design, specifically sound effects. I am not a sound engineer, so all sound effects will be imported from the Unreal Engine Marketplace, as well as from free sound effects sites. The music in the game is also something that I will not focus on, and will most likely import that from the Marketplace as well. Music is something that I do have some experience making though, and it is possible that I will create some music for the game instead of importing. Any music or sound effects imported into the project from the Unreal Engine Marketplace or other websites will be properly credited in the game. 

## Screens

The main screens in the game will be the Start Screen, the Game Screen, the Pause Menu, the End Scene, and the Credits Screen. The Start screen will be the first screen upon opening the game and can be used to launch into the Game Screen. The Game Screen is where all of the gameplay will be done. The Pause Menu can be accessed from the Game Screen, which can be used to access the Credits Screen or get back to the Start Screen. The End Scene will be accessed after the player has won the game. It will have the ability to play again or go back to the Start Screen.  The Credits Screen will also be able to be accessed through the Start Screen and will be used to credit all of the assets imported into the game. 

 ## Tools

The applications that I plan on using include Unreal Engine, JetBrains Rider, and GitKraken. Unity libraries that I plan on using include New Input System, Cinemachine, and some asset packs for art and sound. For animations, I plan on using the website Mixamo. 

## Graphical Reference

For the look of the game, I want it to look somewhat similar to the game Astroneer. This is a planet exploration game that also uses Marching cubes for its terrain. The terrain in that game is just simple colors, so doing this for my game will allow me to not have to make textures. For characters or objects in the game, I will import free assets from the Unreal Engine Marketplace and credit the creators of those assets. For animations, I plan on getting them from Mixamo. 

