#include <iostream>
#include <string>
#include <vector>


int main()
{
    size_t i;
    char quote = 34;
    
    vector<string> self;
    self.push_back("#include <iostream>");
    self.push_back("#include <string>");
    self.push_back("#include <vector>");
    self.push_back("");
    self.push_back("");
    self.push_back("int main()");
    self.push_back("{");
    self.push_back("    size_t i;");
    self.push_back("    char quote = 34;");
    self.push_back("");
    self.push_back("    vector<string> self;");
    self.push_back("    self.push_back(");
    self.push_back(");");
    self.push_back("");
    self.push_back("    for (i = 0; i != 11; ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[i] << endl;");
    self.push_back("    }");
    self.push_back("    for (i = 0; i != self.size(); ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[11] << quote << self[i] << quote << self[12] << endl;");
    self.push_back("    }");
    self.push_back("    for (i = 13; i != self.size(); ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[i] << endl;");
    self.push_back("    }");
    self.push_back("");
    self.push_back("    return 0;");
    self.push_back("}");

    for (i = 0; i != 11; ++i)
    {
        cout << self[i] << endl;
    }
    for (i = 0; i != self.size(); ++i)
    {
        cout << self[11] << quote << self[i] << quote << self[12] << endl;
    }
    for (i = 13; i != self.size(); ++i)
    {
        cout << self[i] << endl;
    }
    
    return 0;
}
