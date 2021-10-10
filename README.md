# ArtistTools

### Table of Contents
- [Introduction](#Introduction)
- [CreditWhereCreditIsDue](#CreditWhereCreditIsDue)
- [Installation](#Installation)
- [BetterSplineMesh](#BetterSplineMesh)
- [CircleMesh](#CircleMesh)
- [CircleLights](#CircleLights)
- [Replacer](#Replacer)

## Introduction

These are some tools I made for environment artists. 

## CreditWhereCreditIsDue

You can use this plugin for free the only thing I ask it to reference the plugin when you use it on your portfolio. Also if you want you can send me some screenshots of the stuff you made with this plugin ( https://www.linkedin.com/in/enrique-bross%C3%A9-9bb6411b9/)  and I'll share it on my portfolio https://enriquebrosse.myportfolio.com/work 

## Installation

Just download the zip file, extract the files and place the map called Plugins in your unreal project. It could be that you'll have to rebuild your project. And to see what's in the plugin you'll have to go into the content brouser and click on view options in the bottom left and make sure that Show Plugin content is selected.

## BetterSplineMesh

The better spline mesh is a spline mesh that fixes the issue where the mesh can do a 360 in the middle of the mesh when you have a rotation that's more than 90 degrees. It also has a front and end if you would need it. To use the front and end mesh make sure that the boolian called use front mesh/ use End mesh is on and make sure that it has valid static mesh. The better spline mesh also has options to set the collision and to update the spline type. There is also a varient that has no front and back. I recently also added an option to set the up vector. 

## CircleMesh

The CircleMesh is an actor that will be able to spawn static meshes in a circle and make them instanced. It has a few options as Range ( the diameter of the circle), The amount of sides, The amount of objects per side, a Scale, rotation offset and a spawn option. The spawn option has 3 modes: 
- The default option: this will calculate the rotation of the meshes as if it wasn't a circle and will take the rotation of the 2 points and calculate the average.
- The InCircle option: this will calculate the rotation of the meshes as it was a circle and will just lerp between 2 points.
- The corner option: this one spawns the meshes in the corner and will only spawn 1 mesh there. 

## CircleLights

This is basically the same as the circle mesh but will spawn lights instead of meshes. It also has all of the options to change the lights that are used with their responsible settings so it's easer to place them and edit them. 

## Replacer

This blueprint is an actor that you can place in your level that will replace static meshes with instanced static meshes and has a mininum amount of static meshes that have to be available to replace it with an instanced static mesh. To replace the instanced static meshes just press on the button in the details menu called Replace. The instanced static mesh actor also has an edit button and a stop editing button that you can use to move individual static meshes. The Edit button clears all the instanced static meshes and replaces them with the normal static meshes. The stop editing button clears all the static meshes and makes them instanced. If you're using any localization based on position on your materials use the material function called MF_Object Location to keep the localization when it becomes an instanced static mesh. This is because the root of the object is not the same as the normal static meshes. If you want to look at the alroghtim here is the the link: https://github.com/EnriqueBrosse/ArtistTools/blob/main/Plugin/Plugins/ArtistsTools/Source/ArtistsTools/InstancedMeshes/Replacer.cpp
