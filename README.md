![Pixels](https://user-images.githubusercontent.com/20092823/112760746-ca197d80-9000-11eb-80b6-59aac655104c.png)
# Vita Nearest Neighbour
Simple taiHEN plugin for PlayStation Vita that overrides texture sampling.  
Forces rendering with point filtering method (Nearest-Neighbor interpolation), instead of linear.

## Showcase
Screenshot with sharp pixelization - overrided point filtering; blurry - original.
### Call of Duty: Black Ops: Declassified (720x408 resolution)
![CoD](https://user-images.githubusercontent.com/20092823/112760754-cbe34100-9000-11eb-8e06-4ac746368ba3.gif)
### Duke Nukem 3D: Megaton Edition
![Duke](https://user-images.githubusercontent.com/20092823/112760757-cc7bd780-9000-11eb-93da-6766b1782342.gif)
### Grand Theft Auto: Vice City (homebrew)
![GTA VC](https://user-images.githubusercontent.com/20092823/112760758-cc7bd780-9000-11eb-940c-d2393cb474eb.gif)
### Limbo
![Limbo](https://user-images.githubusercontent.com/20092823/112760740-c7b72380-9000-11eb-8142-f0fe6a008656.gif)
### Max Payne (homebrew)
![Max Payne](https://user-images.githubusercontent.com/20092823/112760741-c8e85080-9000-11eb-9b7b-cdd66c508d24.gif)
### Oceanhorn
![Oceanhorn](https://user-images.githubusercontent.com/20092823/112760744-c980e700-9000-11eb-9d5d-33721709dd3c.gif)
### Resident Evil: Revelations 2 (+ VitaGrafix native resolution patch)
![Resident Evil Revelations 2](https://user-images.githubusercontent.com/20092823/112760748-ca197d80-9000-11eb-8f1d-d1b95ddff98f.gif)
### Super Mario 64 (homebrew)
![SM64](https://user-images.githubusercontent.com/20092823/112760749-cab21400-9000-11eb-900d-1b4997ba2405.gif)
### Spelunky Classic (homebrew)
![Spelunky Classic](https://user-images.githubusercontent.com/20092823/112760751-cab21400-9000-11eb-88c3-9d8b5acf8963.gif)
### Uncharted: Golden Abyss (+ VitaGrafix native resolution patch)
![Uncharted](https://user-images.githubusercontent.com/20092823/112760752-cb4aaa80-9000-11eb-8a0a-8cd20f63772b.gif)

## Usage
1. Download and put **VitaNearestNeighbour.suprx** into your tai folder
2. Append your ***ALL** or specific game section in **ux/ur0:tai/config.txt** with:
```
ux0:tai/VitaNearestNeighbour.suprx
```
3. **Reload taiHEN config.txt** from settings app or restart your Vita

## Building
Requires [Vita SDK](https://vitasdk.org)  
Compile with:

```
cmake CMakeLists.txt  
make
```