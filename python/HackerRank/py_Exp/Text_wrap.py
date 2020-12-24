import textwrap

def wrap(string, max_width):
    str1=''
    wrapper = textwrap.TextWrapper(width=max_width)
    word=wrapper.wrap(text=string)
    for line in word:
        str1+=(line+"\n")
    return str1


if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
