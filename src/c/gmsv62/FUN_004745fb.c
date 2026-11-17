/* FUN_004745fb - 0x004745fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004745fb(int param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  if (param_4 == 1) {
    bVar1 = CARRY4(*(uint *)(param_1 + 8),param_2);
    param_2 = *(uint *)(param_1 + 8) + param_2;
    param_3 = *(int *)(param_1 + 0xc) + param_3 + (uint)bVar1;
    param_4 = 0;
  }
  if (((*(int *)(param_1 + 0x18) != 0) && (param_4 == 0)) &&
     (((*(uint *)(param_1 + 0x24) < param_3 ||
       ((*(uint *)(param_1 + 0x24) == param_3 && (*(uint *)(param_1 + 0x20) <= param_2)))) ||
      ((*(uint *)(param_1 + 0x2c) <= param_3 &&
       ((*(uint *)(param_1 + 0x2c) < param_3 || (*(uint *)(param_1 + 0x28) <= param_2)))))))) {
    *(uint *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0xc) = param_3;
    return;
  }
  uVar2 = FUN_00474666(*(undefined4 *)(param_1 + 0x10),param_2,param_3,param_4);
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}


