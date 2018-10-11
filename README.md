# **DuiLib_Faw**

## 描述

此项目是DuiLib的一个个人维护版本，当前拥有较激进的更新。

大众所熟知的DuiLib主分支处于较少更新的状态，几年前的激进更新派DuiLib_Ultimate、DuiLib_Redrain等也渐渐变成了保守派，也降低了更新速度，然而这个优秀的库也渐渐的无法满足当今的需要。

此仓库建立的目的是，对DuiLib做出较激进的更新优化，使得它能更好的满足当今开发的需要。

此项目的更新方式为，一方面保留自身激进的更新，另一方面原分支仓库有更新时，根据需要将更新内容同步至此仓库。

由于逐渐与原分支拉开变化，示例代码逐渐无法完整的示例整个项目，所以此项目暂时删除所有示例，使用此项目需要一定的DuiLib经验才能驾驭。

## 使用

#### 动态链接

使用动态链接的程序需在程序目录保留DuiLib*.dll，否则程序无法运行。由于动态链接有诸多不利因素（更大的软件体积、更多的文件引用等），所以在发行版中不推荐这种方式。

用法：主程序内引用如下代码

```C++
#if (defined _UNICODE) && (defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_64d.lib")
#elif (defined _UNICODE) && (defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_d.lib")
#elif (defined _UNICODE) && (!defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_64.lib")
#elif (defined _UNICODE) && (!defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib.lib")
#elif (!defined _UNICODE) && (defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_64d.lib")
#elif (!defined _UNICODE) && (defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_d.lib")
#elif (!defined _UNICODE) && (!defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_64.lib")
#elif (!defined _UNICODE) && (!defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA.lib")
#endif
```

#### 静态链接

静态链接具有诸多好处：依赖关系更少、程序体积更小等。极端的追求程序体积可以使用这种链接方式，使用VC_LTL优化项目引用并缩小程序体积，最后使用upx对程序进行压缩。

用法：主程序内引用如下代码

```C++
#if (defined _UNICODE) && (defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_64sd.lib")
#elif (defined _UNICODE) && (defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_sd.lib")
#elif (defined _UNICODE) && (!defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_64s.lib")
#elif (defined _UNICODE) && (!defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLib_s.lib")
#elif (!defined _UNICODE) && (defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_64sd.lib")
#elif (!defined _UNICODE) && (defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_sd.lib")
#elif (!defined _UNICODE) && (!defined _DEBUG) && (defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_64s.lib")
#elif (!defined _UNICODE) && (!defined _DEBUG) && (!defined _WIN64)
#	pragma comment (lib, "../lib/DuiLibA_s.lib")
#endif
```

看需求加入预处理器定义UILIB_STATIC，然后将编译选项分别设置为/MT、/MTd即可。

## 已更新内容

1. 完善链接方式，针对是否为Unicode、Debug、64位、动态或静态，4种条件16种链接方式做出完善的链接选项。
2. 修改CDuiString实现方式的底层为std::string，使得兼容性更强
3. GroupBox边框绘制时自动擦除文字位置，使得不用设置背景色，文字依旧不被边框遮盖
4. 修复Combo控件的SetText功能
5. 修复容器子元素手动右对齐，方法为子控件加入代码：floatalign="right"
6. 新增图片的dest可为负数，当为负数时，位置固定在目标控件的右边。比如Combo控件固定到右边的下拉箭头
7. Label控件新增autocalcheight，效果类似于autocalcwidth

此项目目前只支持vs2017环境下编译，如果使用其他版本编译器需要自行建立项目文件。

## 待研究或待添加

1. 实现内存加载控件图片
2. 实现虚拟列表效果
3. 文字无阴影效果
4. 图片没有autocalcwidth、autocalcheight
5. 容器不支持根据子元素大小来计算大小
6. 考虑新增Ribbon控件

## 许可证：MIT+原始许可
