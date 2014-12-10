import sys

def main():

    quote = str(unichr(34))
    newLine = str(unichr(10))
    selfList = []

    selfList.append("import sys")
    selfList.append("")
    selfList.append("def main():")
    selfList.append("")
    selfList.append("    quote = str(unichr(34))")
    selfList.append("    newLine = str(unichr(10))")
    selfList.append("    selfList = []")
    selfList.append("")
    selfList.append("    selfList.append(")
    selfList.append(")")
    selfList.append("")
    selfList.append("    for i in range(8):")
    selfList.append("        print selfList[i]")
    selfList.append("")
    selfList.append("    for string in selfList:")
    selfList.append("        sys.stdout.write(selfList[8])")
    selfList.append("        sys.stdout.write(quote)")
    selfList.append("        sys.stdout.write(string)")
    selfList.append("        sys.stdout.write(quote)")
    selfList.append("        sys.stdout.write(selfList[9])")
    selfList.append("        print newLine,")
    selfList.append("")
    selfList.append("    for i in range(10, len(selfList)):")
    selfList.append("        print selfList[i]")
    selfList.append("")
    selfList.append("main()")

    for i in range(8):
        print selfList[i]

    for string in selfList:
        sys.stdout.write(selfList[8])
        sys.stdout.write(quote)
        sys.stdout.write(string)
        sys.stdout.write(quote)
        sys.stdout.write(selfList[9])
        print newLine,

    for i in range(10, len(selfList)):
        print selfList[i]

main()
