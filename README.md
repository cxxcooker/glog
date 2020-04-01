[![Build Status](https://img.shields.io/travis/google/glog/master.svg?label=Travis)](https://travis-ci.org/google/glog/builds)
[![Grunt status](https://img.shields.io/appveyor/ci/google-admin/glog/master.svg?label=Appveyor)](https://ci.appveyor.com/project/google-admin/glog/history)

This repository contains a C++ implementation of the Google logging
module.  Documentation for the implementation is in doc/.

See INSTALL for (generic) installation instructions for C++: basically
```sh
./autogen.sh && ./configure && make && make install
```

### modification
- author: niuqiang
- date: 2020-04-01 13:57:02
feature:
1. 修改文件命名后缀，并按小时轮转
2. 修改每行日志前缀
3. 添加日志等级
4. 添加对旧glog2speech格式化接口的兼容
5. 添加全局初始化设置，并支持信号捕捉
6. 添加示例