/* FUN_0075f5a0 - 0x0075f5a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0075f5a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00815de9();
    FUN_00766ba9();
  }
  if (DAT_00978358 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + *(int *)(param_1 + 0x9c) * 8);
  }
  if (iVar1 != 0) {
    FUN_006168e2(iVar1 + 0x7c);
  }
  return;
}


