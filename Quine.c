#define SIZE 23
string Q[SIZE];
int i, j, k;
int pos = -1;

insQ(string e) {
  ++pos;
  Q[pos] = e;
}

main() {
  insQ("#define SIZE 50");
  insQ("string Q[SIZE];");
  insQ("int i, j, k;");
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
  insQ("  for (i = 0; i < 11; i++)");
  insQ("    printf(Q[i]);");
  insQ("");
  insQ("  for (j = 0; i < SIZE; i++)");
  insQ("    printf(Q[11] + \" + Q[i] + \" + Q[12]);");
  insQ("");
  insQ("  for (k = 13; i < SIZE; i++)");
  insQ("    printf(Q[i]);");
  insQ("}");
  
  for (i = 0; i < 11; i++)
    printf(Q[i]);

  for (j = 0; i < SIZE; i++)
    printf(Q[11] + \" + Q[i] + \" + Q[12]);

  for (k = 13; i < SIZE; i++)
    printf(Q[i]);
}
