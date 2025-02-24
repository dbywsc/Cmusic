## 此文件为作者初中所作，如今上传以示纪念


这是一个用来整活的C语言库，主要功能为通过宏定义和自建函数操控蜂鸣器更改频率发出音调，技术含量不高，大家看看就好
库提供一个`.h`文件`CMUSIC.H`与一个`.C`文件`CMUSIC.C`，引用库为`windows.h`
库中原理实现为调用windows.h中的`Beep()`函数，`Beep()`有两个参数，第一个为发声频率，第二个为持续时间（单位ms），无返回值

本库通过将特定频率宏定义再作为函数参数的方式间接调用Beep函数，例如:

```c
    void ScaleDo(int beat) {
    Beep(Do, beat);
}
```

该函数功能为发出`Do`但只需要一个参数即Beep()的第二个时间参数
对此库中定义了结构体`beat`，内容如下:

```c
struct beat {
    int beatTime;
    int halfBeatTime;
    int quarterBeatTime;
    int oneThirdBeatTime;
};
```

对于节拍数的控制，库中通过函数`aBeatTime()`的返回值作为节拍持续时间实现，内容如下:

```c
int aBeatTime(int beatsPerMinute) {
    return (60.0 / beatsPerMinute) * 1000;
}
```

下面提供一个例程：

```c
#include "CMUSIC.H"
#include <time.h>

int main(void) {
    struct beat bt;
    bt.beatTime = aBeatTime(120); //设定每分钟一百二十拍
    bt.halfBeatTime = bt.beatTime / 2;
    bt.quarterBeatTime = bt.beatTime / 4;
    bt.oneThirdBeatTime = bt.beatTime / 3;

    //发出Do到Mi，持续节拍为一拍
    ScaleDo(bt.beatTime); ScaleRe(bt.beatTime); ScaleMi(bt.beatTime);

    Sleep(bt.beatTime);    /*空拍可以用Sleep()函数实现*/

    //发出低音Do到Mi,持续节拍为二分之一拍
    Scale_qdo(bt.halfBeatTime); Scale_qre(bt.halfBeatTime); Scale_qmi(bt.halfBeatTime);

    Sleep(bt.beatTime);

    //发出高音Do到Mi,持续节拍为三分之一拍
    ScaleDo1(bt.oneThirdBeatTime); ScaleRe1(bt.oneThirdBeatTime); ScaleMi1(bt.oneThirdBeatTime);

    return 0;
}
```

注：对于节拍数和音调的不同要求，库中还有部分未应用的宏定义，如有要求可自行实现（其实是懒）
