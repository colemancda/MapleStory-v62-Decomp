/* FUN_00500ce5 - 0x00500ce5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00500ce5(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_00424561();
  FUN_005005fa((int)sVar1 - *(int *)(param_1 + 0x728));
  *(int *)(param_1 + 0x728) = (int)sVar1;
  return;
}


