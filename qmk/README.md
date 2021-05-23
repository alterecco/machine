# alterecco's QMK userspace

## Setup qmk firmware with required PRs

```sh
git checkout git@github.com:alterecco/qmk_firmware.git firmware
cd firmware
git remote add upstream https://github.com/qmk/qmk_firmware.git
git config --add remote.upstream.fetch +refs/pull/*/head:refs/pull/upstream/*
git checkout -b alterecco
git pull upstream refs/pull/12653/head
git pull upstream refs/pull/11422/head
git pull upstream refs/pull/8591/head
```
