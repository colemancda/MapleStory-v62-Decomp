/* FUN_0085c6e1 - 0x0085c6e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0085c6e1(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 0x2b40) == 0) || (*(int *)(param_1 + 0x2b44 + param_2 * 4) != 0)) {
    if (*(int *)(param_1 + 0x2b40) == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x2b2c);
    }
    else {
      puVar2 = (undefined4 *)(param_2 * 0x10 + 0x2c0e + param_1);
    }
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
    param_3[2] = puVar2[2];
    uVar1 = 1;
    param_3[3] = puVar2[3];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


