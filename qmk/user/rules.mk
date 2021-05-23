SRC += alterecco.c

ifeq ($(strip $(CUSTOM_ONESHOT_ENABLE)), yes)
	SRC += ./features/oneshot.c
	OPT_DEFS += -DCUSTOM_ONESHOT_ENABLE
endif

ifeq ($(strip $(CUSTOM_MODTAP_ENABLE)), yes)
	SRC += ./features/mod_hold_n_tap.c
	OPT_DEFS += -DCUSTOM_MODTAP_ENABLE
endif

ifeq ($(strip $(CUSTOM_REPEAT_KEY_ENABLE)), yes)
	SRC += ./features/repeat_last_key.c
	OPT_DEFS += -DCUSTOM_REPEAT_KEY_ENABLE
endif

ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combos.c
endif

ifeq ($(strip $(KEY_OVERRIDE_ENABLE)), yes)
	SRC += overrides.c
endif
