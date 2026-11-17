/* FUN_004b8c01 - 0x004b8c01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004b8c01(byte param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = FUN_004133f0();
  *param_2 = bVar1;
  param_2[1] = bVar1 ^ param_1;
  iVar2 = FUN_0087a034(bVar1 ^ 0xbaadf00d,5);
  return iVar2 + (uint)(bVar1 ^ param_1);
}


