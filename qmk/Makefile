atreus_flash: setup
	cd firmware && /usr/bin/arch -x86_64 qmk flash -kb keyboardio/atreus -km alterecco

ferris_compile: setup
	cd firmware && /usr/bin/arch -x86_64 qmk compile -kb ferris/0_2 -km alterecco

ferris_flash: setup
	cd firmware && /usr/bin/arch -x86_64 qmk flash -kb ferris/0_2 -km alterecco

setup:
	test -L ./firmware/users/alterecco || ln -s ../../user ./firmware/users/alterecco
	test -L ./firmware/keyboards/keyboardio/atreus/keymaps/alterecco || ln -s ../../../../../keyboards/atreus ./firmware/keyboards/keyboardio/atreus/keymaps/alterecco
	test -L ./firmware/keyboards/planck/keymaps/alterecco || ln -s ../../../../keyboards/planck ./firmware/keyboards/planck/keymaps/alterecco
	test -L ./firmware/keyboards/ferris/keymaps/alterecco || ln -s ../../../../keyboards/ferris ./firmware/keyboards/ferris/keymaps/alterecco

unlink:
	rm ./firmware/users/alterecco
	rm ./firmware/keyboards/keyboardio/atreus/keymaps/alterecco
	rm ./firmware/keyboards/planck/keymaps/alterecco
	rm ./firmware/keyboards/ferris/keymaps/alterecco
