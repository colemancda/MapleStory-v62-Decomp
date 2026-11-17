/* FUN_00772cb9 - 0x00772cb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00772cb9(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x70) + -4);
  }
  iVar1 = *(int *)(param_1 + 0x18) * 0x14;
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  return iVar1;
}


