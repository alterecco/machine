# fast key repeat
# Test here: https://mac-os-key-repeat.vercel.app
defaults write -g InitialKeyRepeat -int 12
defaults write -g KeyRepeat -int 1

# disable press-and-hold
defaults write -g ApplePressAndHoldEnabled -bool false

# show hidden files in finder
# this can now be accomplished with Cmd+Shift+. so retire the default
defaults write com.apple.finder AppleShowAllFiles -bool false
