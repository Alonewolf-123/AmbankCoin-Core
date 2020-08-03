
Debian
====================
This directory contains files used to package ambankcoind/ambankcoin-qt
for Debian-based Linux systems. If you compile ambankcoind/ambankcoin-qt yourself, there are some useful files here.

## ambankcoin: URI support ##


ambankcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ambankcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ambankcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/ambankcoin128.png` to `/usr/share/pixmaps`

ambankcoin-qt.protocol (KDE)

