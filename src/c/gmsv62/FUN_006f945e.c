/* FUN_006f945e - 0x006f945e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_006f945e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_006f94b9();
  if (*(int *)(param_1 + 0x664) == 0) {
    piVar2 = *(int **)(param_1 + 0x640 + iVar1 * 8);
  }
  else {
    if (*(int *)(param_1 + 0x664) != 1) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x650 + iVar1 * 8);
  }
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x18))(param_4,param_5), iVar1 == 0)
     ) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_00817f6e(0);
  }
  return;
}


