/* FUN_00486573 - 0x00486573 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00486573(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004865cc();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c4) == param_2) {
      if (param_4 == 0) {
        *(undefined4 *)(param_1 + 0x3c8) = 0;
        *(undefined4 *)(param_1 + 0x3c4) = 0;
      }
    }
    else {
      *(int *)(param_1 + 0x3c4) = param_2;
      *(undefined4 *)(param_1 + 0x3c8) = param_3;
    }
    FUN_007c52d9(*(undefined4 *)(param_1 + 0x3c4));
  }
  return;
}


