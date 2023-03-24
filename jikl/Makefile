DIRS  = converter/usb_usb/keymaps/jikl
DIRS += ergodox_ez/keymaps/jikl
DIRS += gboards/gergo/keymaps/jikl
#IRS += geekboards/macropad_v2/keymaps/tarsius
DIRS += handwired/dactyl_manuform/5x6/keymaps/jikl
DIRS += hidtech/bastyl/keymaps/jikl
DIRS += keyboardio/atreus/keymaps/jikl
DIRS += planck/keymaps/jikl

.PHONY: rules.mk clang-format

rules.mk:
	@for d in $(DIRS); do cp -v $@ ../keyboards/$$d/$@; done

clang-format:
	clang-format -i $(addsuffix /keymap.c,$(addprefix ../keyboards/,$(DIRS)))

compile:
	qmk compile --keymap jikl --keyboard converter/usb_usb
	qmk compile --keymap jikl --keyboard ergodox_ez
	qmk compile --keymap jikl --keyboard gboards/gergo
	qmk compile --keymap tarsius --keyboard geekboards/macropad_v2
	qmk compile --keymap jikl --keyboard handwired/dactyl_manuform/5x6
	qmk compile --keymap jikl --keyboard hidtech/bastyl
	qmk compile --keymap jikl --keyboard keyboardio/atreus
	qmk compile --keymap jikl --keyboard planck/rev6
