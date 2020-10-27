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

    if (byte_old > 255 || byte_old < -1)
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

    if (count == 255)
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
  int counter, byte;
  while (true)
  {
    std::cin >> counter;

    if (counter == -1)
    {
      std::cout << -1;
      return;
    }

    std::cin >> byte;

    if (counter > 255)
    {
      std::cout << "error ";
      return;
    }
    for(int i = 0; i < counter; i++)
    {
      std::cout << byte << " ";
    }
  }
return;
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
    std::cout << "0" << " ";
    decode();
  }
  return 0;
}