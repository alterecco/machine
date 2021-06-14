if [[ $OS_NAME == 'macos']]; then
  eval "$(/opt/homebrew/bin/brew shellenv)"
fi

declare -A ZINIT
ZINIT[HOME_DIR]="$ZDOTDIR"/zinit
ZINIT[BIN_DIR]="$ZDOTDIR"/zinit/bin
ZINIT[PLUGINS_DIR]="$ZDOTDIR"/zinit/plugins
ZINIT[COMPLETIONS_DIR]="$ZDOTDIR"/zinit/completions
ZINIT[SNIPPETS_DIR]="$ZDOTDIR"/zinit/snippets
