/* FUN_0049e341 - 0x0049e341 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0049e341(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x5c) == 1) && (*(int *)(param_1 + 0x4c) == 0)) {
    iVar1 = FUN_007d1e08();
    if (300 < iVar1 - *(int *)(param_1 + 0x68)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      FUN_004b3daf();
    }
  }
  return;
}


