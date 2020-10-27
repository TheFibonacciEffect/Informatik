#include <iostream>

void encoder(int byte)
{
  if (byte == -1)
  {
    return;
  }
  int count = 0;
  int byte_old;
  do
  {
    byte_old = byte;
    std::cin >> byte;

    if (byte > 255 || byte < -1)
    {
      std::cout << "error ";
      return;
    }
    count++;

    if (byte != byte_old)
    {
      std::cout << count << " " << byte_old << " ";
      encoder(byte);
      return;
    }


  } while (true);

  return;
}

void encode()
{
  std::cout << 1 << " ";
  int byte;
  std::cin >> byte;
  encoder(byte);
  std::cout << -1;
}

void decode()
{
  // do
  // {

  // }while(byte != -1);
}

int main()
{
  int task;
  std::cin >> task;

  if (task == 0)
  {
    encode();
  }
  else
  {
    decode();
  }
  return 0;
}