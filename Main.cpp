int SummateTwo(int a, int b)
{
  int Result = a + b;
  return Result;
}

void Increment(out int a, int b = 1)
{
  a = SummateTwo(a, b);
}

void Decrement(out int a, int b = 1)
{
  a = SummateTwo(a, (b * -1));
}

int SummateArray(int* a)
{
  int i = sizeof(a);
  int Result = 0;
  int b = 0;
  
  do {
    Increment(Result, a[b]);
    Increment(b);
    Decrement(i);
  } while (i > 0);
  
  return Result;
}
