# Sokoboy

## Convoluted steps for creating graphics that I need to improve

1. Edit image in Pyxel Edit creating map and tiles
2. Export TileSet as PNG
3. Export TileMap as Text
4. Open the tileset in Paint.net
5. Convert the PNG to a four shade greyscale image (better to start this way)
6. Save as PNG with same name, set to 2-bit color depth
7. Convert to source code with

```cmd
png2asset.exe .\DmgScreenTiles.png -bpp 2 -pack_mode gb -spr8x8 -tiles_only -keep_duplicate_tiles
```

8. Add a `.h` and `.c` file for the map
9. Wrap the tilemap in the text file in a `uint8_t` array
