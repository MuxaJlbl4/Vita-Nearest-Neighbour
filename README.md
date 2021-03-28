# Vita Nearest Neighbour
Simple taiHEN plugin for PlayStation Vita that overrides texture sampling.  
Forces rendering with point filtering method (Nearest-Neighbor interpolation), instead of linear.

## Showcase
### Call of Duty: Black Ops: Declassified (720x408 resolution)
### Duke Nukem 3D: Megaton Edition
### Grand Theft Auto: Vice City (homebrew)
### Limbo
### Max Payne (homebrew)
### Oceanhorn
### Resident Evil: Revelations 2 (+ VitaGrafix native resolution patch)
### Super Mario 64 (homebrew)
### Spelunky Classic (homebrew)
### Uncharted: Golden Abyss (+ VitaGrafix native resolution patch)

## Usage
1. Download and put **VitaNearestNeighbour.suprx** into your tai folder
2. Append your** *ALL** or specific game section in **ux/ur0:tai/config.txt** with:
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