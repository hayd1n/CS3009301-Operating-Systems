# Make Usage

- `make`: This command builds the entire NachOS system and user programs in the `test` directory.
- `make clean`: This command cleans up NachOS build files and executables, while keeping the executable user programs in the `test` directory.
- `make distclean`: This command cleans up NachOS build files and executables, and also removes the executable user programs in the `test` directory.
- `make print`: This command prints the source code and Makefile of NachOS to the printer. (deprecated, preserved for historical purposes)

If you're in the `test` directory:

- `make`: This command builds the user programs in the current directory.