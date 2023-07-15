//@version=5
//Modified copypasta from CryptoM173
indicator(title='Dual EMA', shorttitle='Dual EMA', overlay=true)
fmaplot = input(true, title='Show FAST EMA on chart')
len = input.int(50, minval=1, title='FAST EMA Length')
src = input(title='Source', defval=close)
offset = input.int(0, minval=-100, title='Offset')
out1 = ta.ema(src, len)
up = out1 > out1[1]
down = out1 < out1[1]
color_1 = color.new(#FFFFFF, 0)
color_2 = color.new(#ff0004, 0)
color_3 = color.new(#0086ff, 0)
mycolor = up ? color_1 : down ? color_2 : color_3
plot(out1 and fmaplot ? out1 : na, offset=offset, title='FAST EMA', color=mycolor, linewidth=3)


smaplot = input(true, title='Show Slow EMA on chart')
len2 = input.int(200, minval=1, title='Slow EMA Length')
src2 = input(title='Source', defval=close)
offset2 = input.int(0, minval=-100, title='Slow EMA Offset')
out2 = ta.ema(src2, len2)
up2 = out2 > out2[1]
down2 = out2 < out2[1]
color_4 = color.new(#FFFFFF, 0)
color_5 = color.new(#ff0004, 0)
color_6 = color.new(#0086ff, 0)
mycolor2 = up2 ? color_4 : down2 ? color_5 : color_6
plot(out2 and smaplot ? out2 : na, offset=offset2, title='Slow EMA', color=mycolor2, linewidth=2)





