The Junuary Project

A hack that implements most of the non-redundant things in the Gigaleak.

August 16th 2020 - Present

Two years have gone by, just like dust.

Sometimes, Beta Hacks just don't work out.

In development longer than Super Mario 64.
# HOW TO COMPILE
!!MAC OS IS NOT SUPPORTED!!

1.In case if you are using Windows OS, you must install [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10) with a Debian or Ubuntu =< 18.04

2.Install dependencies:
```
sudo apt install -y binutils-mips-linux-gnu build-essential git pkgconf python3
```

3.Put a real SM64 ROM with the name of `baserom.<VERSION>.z64` into the root folder. SM64 versions: US, EU, JP, SH.

4.Run `make` to build the ROM (defaults to `VERSION=us`).
Other examples:
```
make VERSION=jp -j4       # build (J) version instead with 4 jobs
make VERSION=eu COMPARE=0 # build (EU) version but do not compare ROM hashes
```

Resulting artifacts can be found in the `build` directory.

The full list of configurable variables are listed below, with the default being the first listed:

* ``VERSION``: ``jp``, ``us``, ``eu``, ``sh``, ``cn``
* ``GRUCODE``: ``f3d_old``, ``f3d_new``, ``f3dex``, ``f3dex2``, ``f3dzex``
* ``COMPARE``: ``1`` (compare ROM hash), ``0`` (do not compare ROM hash)
* ``NON_MATCHING``: Use functionally equivalent C implementations for non-matchings. Also will avoid instances of undefined behavior.
* ``CROSS``: Cross-compiler tool prefix (Example: ``mips64-elf-``).
  ## Project Structure
```
	sm64
	├── actors: object behaviors, geo layout, and display lists
	├── asm: handwritten assembly code, rom header
	│   └── non_matchings: asm for non-matching sections
	├── assets: animation and demo data
	│   ├── anims: animation data
	│   └── demos: demo data
	├── bin: C files for ordering display lists and textures
	├── build: output directory
	├── data: behavior scripts, misc. data
	├── doxygen: documentation infrastructure
	├── enhancements: example source modifications
	├── include: header files
	├── levels: level scripts, geo layout, and display lists
	├── lib: SDK library code
	├── rsp: audio and Fast3D RSP assembly code
	├── sound: sequences, sound samples, and sound banks
	├── src: C source code for game
	│   ├── audio: audio code
	│   ├── buffers: stacks, heaps, and task buffers
	│   ├── engine: script processing engines and utils
	│   ├── game: behaviors and rest of game source
	│   ├── goddard: Mario intro screen
	│   └── menu: title screen and file, act, and debug level selection menus
	├── text: dialog, level names, act names
	├── textures: skybox and generic texture data
	└── tools: build tools
```

