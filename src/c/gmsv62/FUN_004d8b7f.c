/* FUN_004d8b7f - 0x004d8b7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_004d8b7f(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x88) + -4);
  }
  iVar1 = (uint)(iVar1 * 0xe) / 0x14 + 1;
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  return iVar1;
}


