/* ptr_00498e05 - 0x00498e05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_00498e05(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((((param_2 < iVar1) || (*(int *)(param_1 + 0x18) - iVar1 <= param_2)) || (param_3 < iVar1)) ||
     (*(int *)(param_1 + 0x1c) - iVar1 <= param_3)) {
    if (*(int *)(param_1 + 0x44) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 1;
    uVar2 = 1;
  }
  FUN_00498e6c(uVar2,0);
  return 0;
}


