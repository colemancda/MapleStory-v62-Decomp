/* FUN_0085c53b - 0x0085c53b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0085c53b(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 *param_7,undefined4 *param_8,uint *param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_3 = *(int *)(param_1 + 0x2b44 + param_2 * 4);
  FUN_00414edd(param_2 * 0xd + 0x2b5c + param_1,0xffffffff);
  iVar1 = param_1 + param_2 * 4;
  *param_5 = *(undefined4 *)(param_1 + 0x2bf6 + param_2 * 4);
  uVar2 = FUN_00482a39(*(undefined4 *)(iVar1 + 0x2baa));
  FUN_00414edd(uVar2,0xffffffff);
  *param_7 = *(undefined4 *)(iVar1 + 0x2bc2);
  *param_8 = *(undefined4 *)(iVar1 + 0x2bda);
  *param_9 = (uint)(*(int *)(param_1 + 0x2bf2) == *param_3);
  return;
}


