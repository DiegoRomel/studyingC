int main(void)
{
  long int contador, n;
  scanf("%ld", &n);

  if (n % 2 != 0)
  {
    n = n - 1;
  }

  contador = n;
  printf("%ld", n);

  for (; contador > 2;)
  {
    contador = contador - 2;
    n = n * contador;
    printf("*%ld", contador);
  }

  printf("=%ld\n", n);
}