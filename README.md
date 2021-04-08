![PixelVitaLogo](https://user-images.githubusercontent.com/20092823/113035584-09c89c80-919c-11eb-9a82-a0cc51e6c6f0.png)

# Vita Nearest Neighbour
Simple taiHEN plugin for PlayStation Vita that overrides texture sampling.  
Forces rendering with point filtering method (Nearest-Neighbor interpolation), instead of linear.

## Showcase
Screenshot with sharp pixelization - overrided point filtering; blurry - original.
### Duke Nukem 3D: Megaton Edition
![Duke](https://user-images.githubusercontent.com/20092823/112764766-c7c01f00-9012-11eb-862a-3c3b2ec1a5c2.gif)
### Resident Evil: Revelations 2 (960x544 VitaGrafix)
![Resident Evil Revelations 2](https://user-images.githubusercontent.com/20092823/112760748-ca197d80-9000-11eb-8f1d-d1b95ddff98f.gif)
### Super Mario 64 (HomeBrew)
![SM64](https://user-images.githubusercontent.com/20092823/112760749-cab21400-9000-11eb-900d-1b4997ba2405.gif)
### Max Payne (HomeBrew)
![Max Payne](https://user-images.githubusercontent.com/20092823/112760741-c8e85080-9000-11eb-9b7b-cdd66c508d24.gif)
### Call of Duty: Black Ops: Declassified (720x408)
![CoD](https://user-images.githubusercontent.com/20092823/112760754-cbe34100-9000-11eb-8e06-4ac746368ba3.gif)

## Usage
You can simply install plugin via **[AutoPlugin II](https://github.com/ONElua/AutoPlugin2)** or do it manually:
1. Download and put **[VitaNearestNeighbour.suprx](https://github.com/MuxaJlbl4/Vita-Nearest-Neighbour/releases)** into your **tai** folder  
2. Append ***ALL** section in **ux/ur0:tai/config.txt** with:
```
*ALL
ux0:tai/VitaNearestNeighbour.suprx
```
Or create ***TITLE_ID** section to choose only specific game. For example **Disgaea 3: Absence of Detention (Eu region)**:
```
*PCSB00098
ux0:tai/VitaNearestNeighbour.suprx
```
See **[taihen-parser repo](https://github.com/DaveeFTW/taihen-parser)** for more info  
3. **Reload taiHEN config.txt** from settings app or restart your Vita  

## Building
Requires **[Vita SDK](https://vitasdk.org)**  
Compile with:

```
cmake CMakeLists.txt  
make
```