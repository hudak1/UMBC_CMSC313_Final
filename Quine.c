#define SIZE 22
int Q[SIZE];
int pos = -1;

insQ(int e) {
  ++pos;
  Q[pos] = e;
}

main() {
  insQ("#define SIZE 50");
  insQ("int Q[SIZE];");
  insQ("int pos = -1;");
  insQ("");
  insQ("insQ(int e) {");
  insQ("  ++pos;");
  insQ("  Q[pos] = e;");
  insQ("}");
  insQ("");
  insQ("main() {");
  insQ("  insQ(");
  insQ(");");
  insQ("");
  insQ("  for (int i = 0; i < 10; i++)");
  insQ("    printf(Q[i]);");
  insQ("");
  insQ("  for (int i = 0; i < SIZE; i++)");
  insQ("    printf(Q[10] + \" + Q[i] + \" + Q[11]);");
  insQ("");
  insQ("  for (int i = 12; i < SIZE; i++)");
  insQ("    printf(Q[i]);");
  insQ("}");
  
  for (int i = 0; i < 10; i++)
    printf(Q[i]);

  for (int i = 0; i < SIZE; i++)
    printf(Q[10] + \" + Q[i] + \" + Q[11]);

  for (int i = 12; i < SIZE; i++)
    printf(Q[i]);
}
