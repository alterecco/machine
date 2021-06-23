# Quickfixes
if [[ $OSTYPE == darwin* ]]; then
  export HOMEBREW_NO_AUTO_UPDATE=1
fi
export LC_ALL=en_US.UTF-8
eval "$(fasd --init auto)"

# Inspiration
# https://github.com/unixorn/awesome-zsh-plugins
# https://github.com/hmml/awesome-zsh
# https://elv.sh

# Zinit is crazy
# https://zdharma.github.io/zinit/wiki/Zinit-Packages/

# Almost copied 1 to 1 from
# https://github.com/decayofmind/dotfiles/blob/master/.zshrc

if [[ ! -d $ZDOTDIR/zinit ]]; then
  mkdir $ZDOTDIR/zinit
  git clone https://github.com/zdharma/zinit.git $ZDOTDIR/zinit/bin
fi

source $ZDOTDIR/zinit/bin/zinit.zsh

# https://github.com/sorin-ionescu/prezto/blob/master/modules/environment/init.zsh
zinit snippet PZT::modules/environment/init.zsh

# https://github.com/sorin-ionescu/prezto/blob/master/modules/directory/init.zsh
zinit ice wait'1' lucid; zinit snippet PZT::modules/directory/init.zsh

# https://github.com/sorin-ionescu/prezto/tree/master/modules/gnu-utility
zinit snippet PZT::modules/gnu-utility/init.zsh

if [[ $OSTYPE == darwin* ]]; then
  # TODO: maybe I can avoid this by using the above snippet
  PATH="/opt/homebrew/opt/coreutils/libexec/gnubin:$PATH"
fi

# https://github.com/sorin-ionescu/prezto/tree/master/modules/utility
zstyle ':prezto:module:utility' safe-ops 'no'
zstyle ':prezto:module:utility:ls' color 'yes'
zstyle ':prezto:module:utility:ls' dirs-first 'yes'
zinit snippet PZT::modules/utility/init.zsh

# https://github.com/sorin-ionescu/prezto/blob/master/modules/history/init.zsh
zinit snippet PZT::modules/history/init.zsh

# https://github.com/sorin-ionescu/prezto/tree/master/modules/completion
zinit snippet PZT::modules/completion/init.zsh

if [[ $OSTYPE == darwin* ]]; then
  # https://github.com/sorin-ionescu/prezto/tree/master/modules/osx
  zinit snippet PZT::modules/osx/init.zsh
fi

# https://github.com/sorin-ionescu/prezto/tree/master/modules/editor
zstyle ':prezto:module:editor' dot-expansion 'yes'
zstyle ':prezto:module:editor' key-bindings 'emacs'
zstyle ':prezto:module:editor' ps-context 'yes'
zstyle ':prezto:module:prompt' managed 'yes'
zinit snippet PZT::modules/editor/init.zsh

# https://github.com/sorin-ionescu/prezto/blob/master/modules/terminal/init.zsh
zstyle ':prezto:module:terminal' auto-title 'yes'
zinit snippet PZT::modules/terminal/init.zsh

# https://github.com/ohmyzsh/ohmyzsh/blob/master/plugins/git/git.plugin.zsh
zinit ice wait'0' lucid; zinit snippet OMZ::plugins/git/git.plugin.zsh

# https://github.com/akarzim/zsh-docker-aliases
# https://github.com/docker/cli/blob/master/contrib/completion/zsh/_docker
zinit ice wait'0' lucid; zinit light "akarzim/zsh-docker-aliases"
zinit ice wait'1' as"completion" lucid
zinit snippet https://github.com/docker/cli/blob/master/contrib/completion/zsh/_docker

zinit ice lucid from"gh-r" \
  as"command" pick"starship" \
  atload"!eval \$(starship init zsh)"
zinit light starship/starship

zinit ice wait'0' blockf lucid
zinit light zsh-users/zsh-completions

# https://github.com/zdharma/history-search-multi-word
zinit ice wait"0" lucid; zinit load zdharma/history-search-multi-word

# Colors {{{
# https://github.com/chriskempson/base16-shell
# https://github.com/arcticicestudio/nord-dircolors
zinit light 'chrissicool/zsh-256color'
zinit ice atclone"dircolors -b src/dir_colors > c.zsh" \
            atpull'%atclone' \
            pick"c.zsh" \
            nocompile'!'
zinit light arcticicestudio/nord-dircolors
# zinit ice atload"base16_chalk"
# zinit light "chriskempson/base16-shell"
# zinit ice lucid wait'0' \
#             src"bash/base16-chalk.config" \
#             pick"bash/base16-chalk.config" nocompile'!'
# zinit light 'nicodebo/base16-fzf'
# }}}

# Helps you remembering the aliases you defined once.
# https://github.com/sei40kr/zsh-fast-alias-tips
zinit ice from'gh-r' as'program'
zinit light sei40kr/fast-alias-tips-bin
zinit light sei40kr/zsh-fast-alias-tips

# nvm
export NVM_DIR="$HOME/.config/nvm"
export NVM_LAZY_LOAD=true
export NVM_AUTO_USE=true
export NVM_COMPLETION=true
export NVM_SYMLINK_CURRENT="true"
zinit light lukechilds/zsh-nvm

# zsh-autosuggestions
zinit ice lucid wait"1" lucid atload"!_zsh_autosuggest_start"
zinit load "zsh-users/zsh-autosuggestions"
zinit ice wait"1" atinit"zpcompinit; zpcdreplay" lucid
zinit light zdharma/fast-syntax-highlighting
zinit light zsh-users/zsh-history-substring-search
  zmodload zsh/terminfo
  [ -n "${terminfo[kcuu1]}" ] && bindkey "${terminfo[kcuu1]}" history-substring-search-up
  [ -n "${terminfo[kcud1]}" ] && bindkey "${terminfo[kcud1]}" history-substring-search-down
  bindkey -M emacs '^P' history-substring-search-up
  bindkey -M emacs '^N' history-substring-search-down
  bindkey -M vicmd 'k' history-substring-search-up
  bindkey -M vicmd 'j' history-substring-search-down

autoload -Uz compinit

if [ $(date +'%j') != $(date -r ${ZDOTDIR:-$HOME}/.zcompdump +'%j') ]; then
  compinit;
else
  compinit -C;
fi

if [[ $OSTYPE == darwin* ]]; then
  # Setup fzf
  # ---------
  if [[ ! "$PATH" == */opt/homebrew/opt/fzf/bin* ]]; then
    export PATH="${PATH:+${PATH}:}/opt/homebrew/opt/fzf/bin"
  fi

  # Auto-completion
  # ---------------
  [[ $- == *i* ]] && source "/opt/homebrew/opt/fzf/shell/completion.zsh" 2> /dev/null

  # Key bindings
  # ------------
  source "/opt/homebrew/opt/fzf/shell/key-bindings.zsh"
fi

# https://github.com/BurntSushi/ripgrep
# https://github.com/sharkdp/fd
# https://github.com/sharkdp/bat
# https://github.com/junegunn/fzf
# https://github.com/clvv/fasd

alias re-source="source $ZDOTDIR/.zshrc"

alias find=fd
alias grep=rg
alias ag=rg
alias j=z
alias ld=lazydocker
alias lg=lazygit

if [[ $OSTYPE == linux* ]]; then
  alias bat=batcat
fi
alias cat=bat
export BAT_THEME=gruvbox-light

if [[ $OSTYPE == darwin* ]]; then
  alias as-amd="PATH=\"/usr/local/opt/arm-gcc-bin@8/bin:/usr/local/opt/avr-gcc@8/bin:/usr/local/bin:$PATH\" /usr/bin/arch -x86_64"
  alias amdbrew="/usr/bin/arch -x86_64 /usr/local/bin/brew"
fi
