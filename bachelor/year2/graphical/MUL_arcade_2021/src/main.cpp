/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** main
*/

#include <dlfcn.h>
#include <string.h>
#include <iostream>
#include "dlloader.hpp"
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"

void loop(IDisplayModule &lib1, IDisplayModule &lib2, IDisplayModule &lib3,
IGameModule &pacman, Data data, IGameModule &menuEngine, IGameModule &nibbler)
{
	std::string input;

	while (input != "ESC" && input != "ESCAPE") {
		if (data.getInstance() == 1) {
			if (data.firstTime == false)
				lib2.stop(data);
			lib1.init(data);
			lib1.display(data);
			input = lib1.getEvent();
			menuEngine.engine(input, data);
			if (data.isGameLaunched == true && data.gameSelected == "PACMAN")
				pacman.engine(input, data);
			else if (data.isGameLaunched == true)
				nibbler.engine(input, data);
		} else if (data.getInstance() == 2) {
			data.firstTime = false;
			menuEngine.engine(input, data);
			data.secondTime = true;
		 	lib1.stop(data);
			lib2.init(data);
		 	lib2.display(data);
		 	input = lib2.getEvent();
			if (data.isGameLaunched == true && data.gameSelected == "PACMAN")
		 		pacman.engine(input, data);
			else if (data.isGameLaunched == true)
				nibbler.engine(input, data);
		 } else if (data.getInstance() == 3) {
			lib2.stop(data);
			lib3.init(data);
			lib3.display(data);
			input = lib3.getEvent();
			if (data.isGameLaunched == true && data.gameSelected == "PACMAN")
		 		pacman.engine(input, data);
			else if (data.isGameLaunched == true)
				nibbler.engine(input, data);
		 }
	}
}

int setupArcade(char *libName)
{
	Data data;
	try {
		DLLoader<IDisplayModule> sfml(libName);
		IDisplayModule &lib1 = sfml.getMethod();

		DLLoader<IGameModule> game("lib/arcade_pacman.so");
		IGameModule &pacman = game.getMethod();

		DLLoader<IGameModule> game2("lib/arcade_nibbler.so");
		IGameModule &nibbler = game2.getMethod();

		DLLoader<IGameModule> menu("lib/menusfml.so");
		IGameModule &menuEngine = menu.getMethod();

		if (strcmp(libName, "lib/arcade_ncurses.so") != 0 && strcmp(libName, "lib/arcade_sfml.so") != 0) {
			DLLoader<IDisplayModule> sdl2("lib/arcade_sfml.so");
			IDisplayModule &lib2 = sdl2.getMethod();
			DLLoader<IDisplayModule> ncurses("lib/arcade_ncurses.so");
			IDisplayModule &lib3 = ncurses.getMethod();
			loop(lib1, lib2, lib3, pacman, data, menuEngine, nibbler);
			return 0;
		} else if (strcmp(libName, "lib/arcade_sdl2.so") != 0 && strcmp(libName, "lib/arcade_sfml.so") != 0) {
			DLLoader<IDisplayModule> sdl2("lib/arcade_sfml.so");
			IDisplayModule &lib2 = sdl2.getMethod();
			DLLoader<IDisplayModule> ncurses("lib/arcade_sdl2.so");
			IDisplayModule &lib3 = ncurses.getMethod();
			loop(lib1, lib2, lib3, pacman, data, menuEngine, nibbler);
			return 0;
		} else if (strcmp(libName, "lib/arcade_sdl2.so") != 0 && strcmp(libName, "lib/arcade_ncurses.so") != 0) {
			DLLoader<IDisplayModule> sdl2("lib/arcade_sdl2.so");
			IDisplayModule &lib2 = sdl2.getMethod();
			DLLoader<IDisplayModule> ncurses("lib/arcade_ncurses.so");
			IDisplayModule &lib3 = ncurses.getMethod();
			loop(lib1, lib2, lib3, pacman, data, menuEngine, nibbler);
			return 0;
		}
	} catch (arcade::Error const& e) {
		std::cout << e.what() << std::endl;
		return 84;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "./arcade lib/lib.so" << std::endl;
		return 84;
	}
	if (setupArcade(av[1]) == 84)
		return 84;
	return (0);
}