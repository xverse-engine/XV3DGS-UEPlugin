# XVERSE 3D-GS UE Plugin

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>


[English](./README.md) | 中文

[
  <img src="Media/image/XVERSE.png" width="600" />
](http://xverse.cn/)
 
# 介绍

XVERSE 3D Gaussian Splatting plugin（XVERSE 3D-GS） UE Plugin 是基于 Unreal Engine 5 (UE5) 的混合编辑插件，由 XVERSE Technology Inc. (Zhenshen, China) 开发，旨在为 Guassian Splatting 模型提供实时可视化、管理、编辑和可扩展的混合渲染。Guassian Splatting 是一项最近兴起的 3D 重建技术，用于从多张照片重建 3D 场景, 更多的细节可以参考[这里](https://repo-sam.inria.fr/fungraph/3d-gaussian-splatting/).

目前的插件是基于 UE5 Niagara 实现的，我们充分利用了 UE5 Niagara 提供的优势，实现了 Guassian Splatting 模型的高效渲染和管理。

目前我们处于EA阶段，当前开放的插件中，可用的功能总结如下：

- 基于 Niagara 的高质量且实时的 3D Gaussian Splatting 模型渲染
- 轻松将原始 Gaussian Splatting 场景（.ply 文件）导入并在UE场景中渲染
- 与其他 UE 资产混合渲染
- 旋转, 平移, 缩放和 volume 裁剪
- 动态光照和整体调色 
- 导入时自动生成LOD，克服单个Niagara 200万点云数量限制
- **_Windows系统本地训练工具:_**：使用XV3DTools，实现在windows平台下，给定mp4视频一键训练出Gaussian Splatting ply，使用细节见下文

我们后续将持续在本仓库中发布新功能，敬请期待。一些未来的更新将包含：
- [ ] 特效系统
- [ ] 运行时动态切换Lod
- [ ] 自动生成碰撞
- [ ] preview窗口
- [ ] 二次编辑GS资产并保存成新uasset
- [ ] 3D-GS资产压缩

# 快速入门

## 系统要求
- Windows 10 或 11
- Unreal Engine 5.1.x / 5.2.x / 5.3.x
- cuda11或更高（如果要使用XV3DTools训练工具）


## 打包好的示例
我们提供可直接在windows执行的打包示例，，可以从[release](https://github.com/xverse-engine/XV3DGS-UEPlugin/releases)下载`pack_win_exe.zip`，解压后双击exe运行


## 如何打包可执行程序
[windows可执行程序打包教程](Media/Pack_CN.md)


## 插件获取
通过 git clone 本仓库获取插件，默认在[Plugins](./Plugins/)目录下已经有一个UE5.1版本可使用的插件

```
git clone https://github.com/xverse-engine/XV3DGS-UEPlugin.git
```

可以在[demo](./demo/)文件夹下找到打包好的插件，分别对应不同的UE5版本

或者你也可以在[release](https://github.com/xverse-engine/XV3DGS-UEPlugin/releases)界面下载你所需要版本的插件zip包
 
 ### 测试数据下载路径：

我们提供了两套测试数据 ，下载路径在：
 [百度网盘下载地址](https://pan.baidu.com/s/1-cwEXounPJBNtkJe5PJuSw?pwd=XV3D) [谷歌云盘下载地址](https://drive.google.com/drive/folders/1EgVZyYgFbYJqshA6xUheEG7JrEIgsmzR?usp=sharing)

其中demo_fox_1080p.mp4和demo_office_1080p.mp4是两个示例mp4，用于测试XV3DTools本地训练

demo_fox_gs.ply和demo_office_gs.ply是XV3DTools训练出来的3DGS模型，可以用本插件导入UE并实时渲染

 <img src="Media/image/t1.png" width="500" />


## 打开示例项目
本仓库已经提供了一个示例项目，其中包含一个示例关卡和场景以及我们的插件

1. 打开 `XV3DGS.uproject` 启动UE
2. 打开 `demo` 关卡

<img src="Media/image/S3.png" width="500" />

## 导入你自己的 Guassian Splatting 场景
点击导航栏上的加载资产按钮，或者window/XV3dgs

<img src="Media/image/t4.png" width="500" />

会弹出一个工具整合页面，默认是加载ply页面,点击加载ply按钮

<img src="Media/image/t3.png" width="500" />

会弹出一个资源选择窗口

<img src="Media/image/a2.png" width="500" />

选择你自己的 Guassian Splatting 场景 (.ply 格式)，该场景会自动生成LOD并导入到内容浏览器中

<img src="Media/image/a3.png" width="500" />

想要在关卡中可视化场景，只需要将对应的资产拖进关卡视口（Level Viewport）即可

<img src="Media/image/a4.png" width="500" />

## windows平台下本地训练Gaussian Splatting ply

我们使用XV3DTools v1.0版本实现将MP4视频训练出Gaussian Splatting ply

 **_请注意:_** 使用前需要预先安装CUDA 11或更高版本[CUDA下载地址](https://developer.nvidia.com/cuda-downloads)

### XV3DTools使用步骤：

0. 从云盘下载XV3DTools工具（v1.0版本）至本地： [百度网盘下载地址](https://pan.baidu.com/s/162C9Xw_t403h4C8wnD3azQ?pwd=XV3D) [谷歌云盘下载地址](https://drive.google.com/drive/folders/1btXlKO2OHknklRgwMfLEykSChZuPCO4-?usp=sharing)

<img src="Media/image/t10.png" width="500" />

1. 点击图标，打开界面，切换到trainning页面

<img src="Media/image/t6.png" width="500" />

2. 点击按钮，设置参数“XV3DTools Folder”为本地XV3DTools工具所在的路径

<img src="Media/image/t7.png" width="500" />

3. 点击按钮，选择要处理的MP4文件，并将其设置为参数“Input MP4 Path”（要求视频帧率大于20）

<img src="Media/image/t8.png" width="500" />

4. 点击按钮，选择输出的文件夹，并设置为参数“Output Folder”

<img src="Media/image/t9.png" width="500" />

5. 训练很慢，等训练完成后，从输出的文件夹下找到训练结果ply

<img src="Media/image/t5.png" width="500" />




### 训练速度参考：
- 测试机配置：Windows 10，CUDA 11，GeForce RTX 2080（8GB显存），i9-9900处理器。
- demo_fox.mp4：视频总时长10秒，训练耗时10分钟
- demo_office.mp4：视频总时长430秒，训练耗时360分钟


# 特性介绍

### 旋转、平移、缩放（TRS）
在Outliner中选中拖入场景的 3D-GS actor，即可通过调整Transform来调整TRS

<img src="Media/image/FA0.png" width="500" />

也可以在关卡视口中点击选中资产，通过控制GIZMO来旋转平移缩放模型

<img src="Media/image/a6.gif" width="500" />

### 高斯点云裁剪

1.添加一个LocationVolume

<img src="Media/image/FA1.png" width="500" />

2.选中你的Gaussian模型蓝图，添加LocationVolume的引用

<img src="Media/image/FA2.png" width="500" />

3.你可以交互式的移动LocationVolume来裁剪你的Gaussian模型

<img src="Media/image/FA3.png" width="500" />

默认状态是不裁剪，你可以改成裁剪体积内或者体积外的部分

<img src="Media/image/FA4.png" width="500" />

<img src="Media/image/FA5.png" width="500" />

### 支持动态光照

默认是不接受动态光照
通过开启 with Relighting按钮启用接受动态光照

<img src="Media/image/FC2.png" width="500" />

支持UE全部光源类型 
如下图是添加点光源

<img src="Media/image/FC1.png" width="500" />

光源可以任意移动

<img src="Media/image/FC.gif" width="500" />

### 支持整体后处理改变颜色
通过修改AlbedoTint参数实现整体修改颜色

<img src="Media/image/FC3.png" width="500" />

<img src="Media/image/FB.gif" width="500" />

### 动态 Lod (coming soon )
对于导入的点云会自动计算LOD
运行时根据观察距离自动切换lod
使用参数“viswholod”进行调节
 
<img src="Media/image/FD1.png" width="500" />

参数'viswholod'的默认值是-1，表示使用我们的自动切换算法。
其他值强制使用特定的LOD级别。例如，0表示LOD0

下面演示不同lod在同一位置的效果。每一级LOD点数少一个数量级。

LOD0

<img src="Media/image/FD_lod0.png" width="500" />

LOD1
 
<img src="Media/image/FD_lod1.png" width="500" />

LOD2
 
<img src="Media/image/FD_lod2.png" width="500" />


## Release Note
  [v1.1.0](https://github.com/xverse-engine/XV3DGS-UEPlugin/tree/v1.1.0)
- 导入时自动生成LOD，克服单个Niagara 200万点云数量限制

- Windows本地训练环境：使用XV3DTools，实现在windows平台下，给定mp4视频一键训练出Gaussian Splatting ply

[v1.0.1](https://github.com/xverse-engine/XV3DGS-UEPlugin/tree/v1.0.0)
- 修复v1.0.0的bug：UE5.2和UE5.3下打包出现问题

[v1.0.0](https://github.com/xverse-engine/XV3DGS-UEPlugin/tree/v1.0.0)
- 基于 Niagara 的高质量且实时的 3D Gaussian Splatting 模型渲染
- 轻松将原始 Gaussian Splatting 场景（.ply 文件）导入并在UE场景中渲染
- 与其他 UE 资产混合渲染
- 旋转, 平移, 缩放
- 裁剪
- 动态光照
- 整体调色
- 制作VFX效果

## Contributors

<a href="https://github.com/xverse-engine/XV3DGS-UEPlugin/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=xverse-engine/XV3DGS-UEPlugin" />
</a>