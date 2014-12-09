#include <iostream>
#include <string>


int main()
{
    size_t i;
    char quote = 34;
    
    vector<string> self;
    self.push_back("#include <iostream>");
    self.push_back("#include <string>");
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
    self.push_back("    for (i = 0; i != 10; ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[i] << endl;");
    self.push_back("    }");
    self.push_back("    for (i = 0; i != self.size(); ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[10] << quote << self[i] << quote << self[11] << endl;");
    self.push_back("    }");
    self.push_back("    for (i = 12; i != self.size(); ++i)");
    self.push_back("    {");
    self.push_back("        cout << self[i] << endl;");
    self.push_back("    }");
    self.push_back("");
    self.push_back("    return 0;");
    self.push_back("}");

    for (i = 0; i != 10; ++i)
    {
        cout << self[i] << endl;
    }
    for (i = 0; i != self.size(); ++i)
    {
        cout << self[10] << quote << self[i] << quote << self[11] << endl;
    }
    for (i = 12; i != self.size(); ++i)
    {
        cout << self[i] << endl;
    }
    
    return 0;
}
