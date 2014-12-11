import java.util.*;

class Quine {
    public static void main(String[] args) {
        char quote = 34;
        ArrayList<String> self = new ArrayList<String>();

        self.add("import java.util.*;");
        self.add("");
        self.add("class Quine {");
        self.add("    public static void main(String[] args) {");
        self.add("        char quote = 34;");
        self.add("        ArrayList<String> self = new ArrayList<String>();");
        self.add("");
        self.add("        self.add(");
        self.add(");");
        self.add("");
        self.add("        for (int i = 0; i != 7; ++i) {");
        self.add("            System.out.println(self.get(i));");
        self.add("        }");
        self.add("        for (int i = 0; i != self.size(); ++i) {");
        self.add("            System.out.println(self.get(7) + quote + self.get(i) + quote + self.get(8));");
        self.add("        }");
        self.add("        for (int i = 9; i != self.size(); ++i) {");
        self.add("            System.out.println(self.get(i));");
        self.add("        }");
        self.add("    }");
        self.add("}");

        for (int i = 0; i != 7; ++i) {
            System.out.println(self.get(i));
        }
        for (int i = 0; i != self.size(); ++i) {
            System.out.println(self.get(7) + quote + self.get(i) + quote + self.get(8));
        }
        for (int i = 9; i != self.size(); ++i) {
            System.out.println(self.get(i));
        }
    }
}
