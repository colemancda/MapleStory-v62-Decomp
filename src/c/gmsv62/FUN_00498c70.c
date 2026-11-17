/* FUN_00498c70 - 0x00498c70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00498c70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    if (*(int *)(param_1 + 0x54) == 0) goto LAB_00498cab;
    iVar1 = FUN_005265f8(1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      FUN_00498f74(0);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x34) == 0)) {
    return;
  }
LAB_00498cab:
  if ((1 < *(int *)(param_1 + 0x3c)) &&
     (iVar1 = FUN_007d1e08(), *(uint *)(param_1 + 0x40) < (uint)(iVar1 - *(int *)(param_1 + 0x44))))
  {
    FUN_004990a7();
  }
  return;
}


