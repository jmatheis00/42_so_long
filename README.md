# 42_so_long
>The so_long project at 42 is all about 2D game development using <a href="https://github.com/codam-coding-college/MLX42.git">MiniLibX</a>.
>It involves window management, event handling, and texture mapping.
>Players, in this single-player game, collect items on a map while seeking the shortest escape route.
>This project emphasizes smooth window handling, clean program exits, and map validation.
>It's a great opportunity to enhance skills in graphics, game mechanics, and problem-solving.

### Usage
1. clone this repository and `cd` into it:

```zsh
git clone https://github.com/jmatheis00/42_so_long.git && cd 42_so_long
```

2. Compile the library using make:

```zsh
make
```

3. Run the project with the following command and replace `<directory to .ber map file>` with the path of the map file.
You can choose one of the following example maps: `./maps/map1.ber` `./maps/map2.ber` `./maps/map3.ber`

```zsh
./so_long <directory to .ber map file>
```  

Use the `W`, `A`, `S`, and `D` keys to move the main character.
The objective of the game is to collect all the collectibles and then exit the game through the marked endpoint.
In other cases, clicking on the cross on the window’s frame or pressing `ÈSC` closes the window.
