/* FUN_00696410 - 0x00696410 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00696410(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0x60);
  if (iVar1 < 1) {
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    FUN_00414f8b(*(int *)(param_1 + 0xac) + iVar1 * 4);
  }
  FUN_00414f8b(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb4) == 0) {
    *param_3 = 9;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x80) + 0x60);
    if (iVar1 == 0) {
      *param_3 = 1;
    }
    else if (iVar1 == 1) {
      *param_3 = 2;
    }
    else if (iVar1 == 2) {
      *param_3 = 3;
    }
    else if (iVar1 == 3) {
      *param_3 = 5;
    }
    else if (iVar1 == 4) {
      *param_3 = 7;
    }
    else if (iVar1 == 5) {
      *param_3 = 8;
    }
  }
  return;
}


