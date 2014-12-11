import sys

def main():

    quote = str(unichr(34))
    newLine = str(unichr(10))
    selfList = []

    selfList.append("================= PYTHON CODE =========================");
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
    selfList.append("    for i in range(28, 39):")
    selfList.append("        print selfList[i]")
    selfList.append("")
    selfList.append("    for string in selfList:")
    selfList.append("        sys.stdout.write(selfList[39])")
    selfList.append("        sys.stdout.write(quote)")
    selfList.append("        sys.stdout.write(string)")
    selfList.append("        sys.stdout.write(quote)")
    selfList.append("        sys.stdout.write(selfList[40])")
    selfList.append("        print newLine,")
    selfList.append("")
    selfList.append("    for i in range(41, 56):")
    selfList.append("        print selfList[i]")
    selfList.append("")
    selfList.append("main()")
    selfList.append("================= C++ CODE ============================");
    selfList.append("#include <iostream>");
    selfList.append("#include <string>");
    selfList.append("#include <vector>");
    selfList.append("");
    selfList.append("");
    selfList.append("int main()");
    selfList.append("{");
    selfList.append("    size_t i;");
    selfList.append("    char quote = 34;");
    selfList.append("");
    selfList.append("    vector<string> self;");
    selfList.append("    self.push_back(");
    selfList.append(");");
    selfList.append("");
    selfList.append("    for (i = 0; i != 11; ++i)");
    selfList.append("    {");
    selfList.append("        cout << self[i] << endl;");
    selfList.append("    }");
    selfList.append("    for (i = 0; i != self.size(); ++i)");
    selfList.append("    {");
    selfList.append("        cout << self[11] << quote << self[i] << quote << self[12] << endl;");
    selfList.append("    }");
    selfList.append("    for (i = 13; i != self.size(); ++i)");
    selfList.append("    {");
    selfList.append("        cout << self[i] << endl;");
    selfList.append("    }");
    selfList.append("");
    selfList.append("    return 0;");
    selfList.append("}");

    for i in range(28, 39):
        print selfList[i]

    for string in selfList:
        sys.stdout.write(selfList[39])
        sys.stdout.write(quote)
        sys.stdout.write(string)
        sys.stdout.write(quote)
        sys.stdout.write(selfList[40])
        print newLine,

    for i in range(41, 57):
        print selfList[i]

main()
