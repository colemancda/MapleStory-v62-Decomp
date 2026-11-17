/* ptr_008ed700 - 0x008ed700 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Control flow encountered bad instruction data */

void __fastcall ptr_008ed700(byte param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *in_EAX;
  int *unaff_EDI;
  byte in_AF;
  uint uVar4;
  char *pcVar5;
  
  *unaff_EDI = *unaff_EDI >> (param_1 & 0x1f);
  bVar2 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar2;
  *in_EAX = *in_EAX + bVar2;
  *in_EAX = *in_EAX + bVar2;
  bVar1 = 9 < (bVar2 & 0xf) | in_AF;
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2 + bVar1 * -6) & 0xffffff0f;
  cVar3 = (char)uVar4;
  pcVar5 = (char *)CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)((uint)in_EAX >> 8) - bVar1,cVar3)
                           );
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


