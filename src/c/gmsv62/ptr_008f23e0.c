/* ptr_008f23e0 - 0x008f23e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_008f23e0(int param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  char *pcVar3;
  char *pcVar2;
  
  bVar1 = (char)in_EAX + (char)((uint)in_EAX >> 8) * '?';
  pcVar2 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)bVar1);
  *pcVar2 = *pcVar2 + bVar1;
  *pcVar2 = *pcVar2 + bVar1;
  *pcVar2 = *pcVar2 + bVar1;
  pcVar3 = pcVar2 + 1;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  *pcVar3 = *pcVar3 + (char)pcVar3;
  pcVar2[0x50dd40e4] = pcVar2[0x50dd40e4] + (char)param_1 + -1;
  pcVar2 = (char *)(param_1 + 0x51b7007e + *(int *)(param_1 + 0x7e) * -0x15d0c00);
  *pcVar2 = *pcVar2 + (char)((uint)pcVar3 >> 8);
  return;
}


