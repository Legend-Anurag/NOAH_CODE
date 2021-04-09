from termcolor import colored
import colorama
colorama.init()

text=colored("HI THERE!", color="magenta", on_color="on_cyan", attrs=["blink"])
print(text)