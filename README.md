About
## TTS Keyboard Applied to Language Learning. Pronunciation Correction The world's best Chinese learning tool,
## TTS输入法，应用于语言学习。 发音纠正，世界上最好的中文学习工具，
这份代码是启程输入法3.0版本的代码，除算法部分是dll外，其它的模块全部开源。
启程输入法从2003年发布第一版以来，得到了大量用户的好评，2009年停止更新。2018年重新开始更新，历时一年多，现在已经基本测试完成。

要编译这份代码首先要clone soui的最新master.
soui git: https://github.com/soui3/soui.git
在编译soui前,先使用soui的build.bat生成32位DLL版本. 另外还必须安装soui的向导.这样sinstar3编译时才能找到soui代码.

调试前先编译Debug版本,包含32位,和64位版本.
debug版本下所有输出都在项目的Data目录下。


编译完成后，运行data目录下的register.exe来安装输入法，正常情况下，安装以后在输入法列表应该已经可以看到输入法了。如果没有尝试重启机器，并确保所有文件都已经编译成功。

关于输入法调试:
输入法实质就是一个dll, 打开任意一个exe,例如notepad, 再notepad里打开输入法就可以了. 如果不是用vs调试方式打开notepad,你可以使用附加到进程来加载调试符号.
此外,由于win10默认打开了所有进程中自动使用相同的输入法,在调试阶段也非常麻烦,一定要在win10设置里把这个选项关掉.

皮肤仓库：https://gitee.com/setoutsoft/sinstar3.skin

启程软件  2019年9月14日
