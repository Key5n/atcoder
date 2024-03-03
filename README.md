- [online-judge](https://github.com/online-judge-tools/oj)
- [atcoder-online-judge](https://github.com/Tatamo/atcoder-cli)

# インストール方法
```
npm install -g atcoder-cli
pip3 install online-judge-tools
```

# 使い方
```
acc login # login your atcoder account
acc session # check login status
# your login session will be saved to a local file, but your password won't be saved
# to delete the session file, use `acc logout`
acc new abc001 # "abc001/" directory will be created
cd abc001/
acc contest # show the contest information
acc tasks # show task list
acc add
cd a/
vim main.cpp # write your solution
acc submit main.cpp # to use submit function, you have to install online-judge-tools
```

# 設定方法

```
acc config -h
acc config # show all global options
acc config <key> <value> # set option
cd `acc config-dir`
cat config.json # global config file
```