# XVERSE 3D-GS UE Plugin

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>

English | [中文](./README_CN.md)

[
  <img src="Media/image/XVERSE.png" width="600" />
](http://xverse.cn/)


## Introduction

XVERSE 3D Gaussian Splatting UE plugin（XVERSE 3D-GS UE Plugin）is an Unreal Engine 5 (UE5) based plugin developed by XVERSE Technology Inc. (Zhenshen, China), aiming to provide real-time visualization, management, editing, and scalable hybrid rendering of Gaussian Splatting model, which is a recently arised technique for reconstructing 3D scenes from multiple photos, more details can refer to [here](https://repo-sam.inria.fr/fungraph/3d-gaussian-splatting/).

Currently, our plugin is implemented based on UE5 Niagara, fully exploiting the advantage of the features provided by UE5 to realize efficient rendering and managing for Guassian Splatting models.

Since we are at early access, current accessible features are summarized below:
- Niagara-Based High-quality real-time visualizing and rendering for 3D Gaussian Splatting
- Easily importing and converting from the original Gaussian Splatting scene (.ply file) to ours
- Hybrid rendering with other UE assets 
- RTS and Geometry Editing
- Apply VFX effect to Gaussian Splatting scene
- Support dynamic illumination of Gaussian Splatting scene
- Automatic enhancement of Gaussian Splatting scene 

We will actively release new features in this repo, please stay tuned. Some future updates will contain:
- [ ] Automatic Lod Generation at import and Dynamic Lod Rendering
- [ ] Automatic collision generation
- [ ] Support preview window
- [ ] Edit 3D-GS assets
- [ ] 3D-GS assets compression
- [ ] 3D-GS assets production

## Getting Started

### System Requirements

- Windows 10 or 11
- Unreal Engine 5.1.x / 5.2.x / 5.3.x

### Packaged demo project
We provide a packaged Windows executable demo, you can download `pack_win_exe.zip` from [release](https://github.com/xverse-engine/XV3DGS-UEPlugin/releases), simply double-click the exe file to start it.

### Plugin download
You can get the latest plugin by using `git clone`, by default we put a plugin of UE5.1 under [Plugins](./Plugins/)


```
git clone https://github.com/xverse-engine/XV3DGS-UEPlugin.git
```

Plugins for different UE5 versions can be found under [demo](./demo/), extract and install the corresponding version if you are not using UE5.1.

Or you can download the desired version of the plugin in [release](https://github.com/xverse-engine/XV3DGS-UEPlugin/releases)
 
### Open demo project
This repo contains a demo project with an example scene and level 
1. Open `XV3DGS.uproject` to start UE
2. Open `demo` level

<img src="Media/image/S3.png" width="800" />

### Import your guassian splatting model
Click this load asset button in the Navigation Bar.

<img src="Media/image/a1.png" width="800" />

There will be a new loading dialog like this.

<img src="Media/image/a2.png" width="800" />

Choose your Gaussian model file (in .ply format), then it will then be converted and loaded into your Content Browser as a blueprint.

<img src="Media/image/a3.png" width="800" />

Drag the blueprint into Level Viewport and you can see your Gaussian scene.

<img src="Media/image/a4.png" width="800" />

## Feature introduction

### RTS (Rotation, Translation, Scaling) Transform
Select the 3D-GS asset and drag it into the scene. then you can the Transform.

<img src="Media/image/FA0.png" width="800" />

You can also select a 3D-GS actor in the level viewport and transform it using GIZMO.

<img src="Media/image/a6.gif" width="800" />

### Model Clipping by Gaussian model

1. Add a LocationVolume to Level Viewport.

<img src="Media/image/FA1.png" width="800" />

2. choose your Gaussian model bp, and Add dependency to the LocationVolume.

<img src="Media/image/FA2.png" width="800" />

3. You can interactively transform this volume to a clip Gaussian splatting model.

<img src="Media/image/FA3.png" width="800" />

The default state is not clipping, you can choose to kill particles inside or outside the LocationVolume.

<img src="Media/image/FA4.png" width="800" />

<img src="Media/image/FA5.png" width="800" />

### Dynamic illumination 
Dynamic lighting is not default opened.

you can enable it by turning on the withRelighting button.

<img src="Media/image/FC2.png" width="800" />

Supports all the UE light types

<img src="Media/image/FC1.png" width="800" />

The light source can be moved at will

<img src="Media/image/FC.gif" width="800" />

### Change color 

Modify the AlbedoTint parameter to change the overall color.

<img src="Media/image/FC3.png" width="800" />

<img src="Media/image/FB.gif" width="800" />

### Dynamic Lod (coming soon)
For imported point clouds, we calculate the LOD automatically. It will switch LODs automatically based on the view distance.
Use the parameter 'VisWhichLOD' for control.

<img src="Media/image/FD1.png" width="800" />

The default value for 'VisWhichLOD' is -1, indicating the use of our automatic switching algorithm. 
Other values force the use of a specific LOD level. For example, 0 represents LOD0, where the nearest one million points will be shown.

Demonstrations are showing the results of different LODs at the same position.

Each level of LOD points number is one-tenth of the previous level.

LOD0

<img src="Media/image/FD_lod0.png" width="800" />

LOD1
 
<img src="Media/image/FD_lod1.png" width="800" />

LOD2
 
<img src="Media/image/FD_lod2.png" width="800" />


## Release Note
  
[v1.0.0](https://github.com/xverse-engine/XV3DGS-UEPlugin/tree/v1.0.0)
- Niagara-Based High-quality real-time visualizing and rendering for 3D Gaussian Splatting
- Easily importing and converting from the original Gaussian Splatting scene (.ply file) to ours
- Hybrid rendering with other UE assets 
- RTS and Geometry Editing
- Apply VFX effect to Gaussian Splatting scene
- Support dynamic illumination of Gaussian Splatting scene
- Automatic enhancement of Gaussian Splatting scene 

## Contributors

<a href="https://github.com/xverse-engine/XV3DGS-UEPlugin/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=xverse-engine/XV3DGS-UEPlugin" />
</a>