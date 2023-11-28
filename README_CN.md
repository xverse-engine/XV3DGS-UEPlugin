# XVERSE 3D-GS UE Plugin

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>


[English](./README.md) | 中文

[
  <img src="Media/image/XVERSE.png" width="600" />
]()
 
## 介绍

XVERSE 3D Gaussian Splatting plugin（XVERSE 3D-GS） UE Plugin 是基于 Unreal Engine 5 (UE5) 的混合编辑插件，由 XVerse 开发，旨在为 Guassian Splatting 模型提供实时可视化、管理、编辑和可扩展的混合渲染。Guassian Splatting 是一项最近兴起的 3D 重建技术，用于从多张照片重建 3D 场景, 更多的细节可以参考[这里](https://repo-sam.inria.fr/fungraph/3d-gaussian-splatting/).

目前的插件是基于 UE5 Niagara 实现的，我们充分利用了 UE5 Niagara 提供的优势，实现了 Guassian Splatting 模型的高效渲染和管理。

目前我们处于EA阶段，当前开放的插件中，可用的功能总结如下：
- 基于 Niagara 的高质量且实时的 3D Gaussian Splatting 模型渲染
- 轻松将原始 Gaussian Splatting 场景（.ply 文件）导入并在UE场景中渲染
- 与其他 UE 资产混合渲染
- 旋转, 平移, 缩放
- 裁剪
- 动态光照
- 整体调色
- 制作VFX效果

我们后续将持续在本仓库中发布新功能，敬请期待。一些未来的更新将包含：
- [ ] 导入时自动生成 Lod, 运行时动态切换 Lod 渲染
- [ ] 自动生成碰撞
- [ ] preview窗口
- [ ] 二次编辑GS资产并保存成新uasset
- [ ] GS数据压缩

## 入门

### 系统要求
- Windows 10 或 11
- Unreal Engine 5.1.x / 5.2.x / 5.3.x

### 打包好的示例
我们提供了打包后示例，可直接在windows执行，可以从[这里]()下载，下载解压后双击exe即可运行

### 插件获取
通过 git clone 本仓库获取插件，默认在[Plugins](./Plugins/)目录下已经有一个UE5.1版本可使用的插件

```
git clone https://github.com/xverse-engine/XV3DGS-UEPlugin.git
```

可以在[demo](./demo/)文件夹下找到打包好的插件，分别对应不同的UE5版本

<img src="Media/image/S2.png" width="800" />
 
### 打开示例项目
本仓库已经提供了一个示例项目，其中包含一个示例关卡和场景以及我们的插件

1. 打开 `XV3DGS.uproject` 启动UE
2. 打开 `demo` 关卡

<img src="Media/image/S3.png" width="800" />

### 导入你自己的 Guassian Splatting 场景
点击导航栏上的加载资产按钮

<img src="Media/image/a1.png" width="800" />

会弹出一个资源选择窗口

<img src="Media/image/a2.png" width="800" />

选择你自己的 Guassian Splatting 场景 (.ply 格式)，该场景会自动转换并导入到内容浏览器中

<img src="Media/image/a3.png" width="800" />

想要在关卡中可视化场景，只需要将对应的资产拖进关卡视口（Level Viewport）即可

<img src="Media/image/a4.png" width="800" />

## 特性介绍

### 旋转、平移、缩放（TRS）
在Outliner中选中拖入场景的 3D-GS actor，即可通过调整Transform来调整TRS

<img src="Media/image/FA0.png" width="800" />

也可以在关卡视口中点击选中资产，通过控制GIZMO来旋转平移缩放模型

<img src="Media/image/a6.gif" width="800" />

### 高斯点云裁剪

1.添加一个LocationVolume

<img src="Media/image/FA1.png" width="800" />

2.选中你的Gaussian模型蓝图，添加LocationVolume的引用

<img src="Media/image/FA2.png" width="800" />

3.你可以交互式的移动LocationVolume来裁剪你的Gaussian模型

<img src="Media/image/FA3.png" width="800" />

默认状态是不裁剪，你可以改成裁剪体积内或者体积外的部分

<img src="Media/image/FA4.png" width="800" />

<img src="Media/image/FA5.png" width="800" />

### 支持动态光照

默认是不接受动态光照
通过开启 with Relighting按钮启用接受动态光照

<img src="Media/image/FC2.png" width="800" />

支持UE全部光源类型 
如下图是添加点光源

<img src="Media/image/FC1.png" width="800" />

光源可以任意移动

<img src="Media/image/FC.gif" width="800" />

### 支持整体后处理改变颜色
通过修改AlbedoTint参数实现整体修改颜色

<img src="Media/image/FC3.png" width="800" />

<img src="Media/image/FB.gif" width="800" />

### 动态 Lod (coming soon )
对于导入的点云会自动计算LOD
运行时根据观察距离自动切换lod
使用参数“viswholod”进行调节
 
<img src="Media/image/FD1.png" width="800" />

参数'viswholod'的默认值是-1，表示使用我们的自动切换算法。
其他值强制使用特定的LOD级别。例如，0表示LOD0

下面演示不同lod在同一位置的效果。每一级LOD点数少一个数量级。

LOD0

<img src="Media/image/FD_lod0.png" width="800" />

LOD1
 
<img src="Media/image/FD_lod1.png" width="800" />

LOD2
 
<img src="Media/image/FD_lod2.png" width="800" />


## Release Note
  
[v1.0](https://github.com/xverse-engine/XV3DGS-UEPlugin)
- 基于 Niagara 的高质量且实时的 3D Gaussian Splatting 模型渲染
- 轻松将原始 Gaussian Splatting 场景（.ply 文件）导入并在UE场景中渲染
- 与其他 UE 资产混合渲染
- 旋转, 平移, 缩放
- 裁剪
- 动态光照
- 整体调色
- 制作VFX效果