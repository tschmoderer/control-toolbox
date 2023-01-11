# Control Toolbox - Projets Branch 

This branch aims to collect all *.tex* and *.pdf* files for student projects.

## Clone repository

```bash
git clone --branch projets git@github.com:tschmoderer/control-toolbox.git
```

## Add a new project

All projects go into the *./projets* folder.

```bash
cd projets
touch projet_XX.tex
```

Then edit *projet_XX.tex* with your favorite editor.

## Compile your new project

You can compile your using the cmake automation tool. The following commands will compile all *.tex* files and place the *.pdf* files in the *projets/* folder. 

```bash
mkdir build
cd build
cmake ..
make projets
```

## Limitation

There is no support for bibtex yet. 