/* FUN_006037e3 - 0x006037e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006037e3(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  uVar3 = 0;
  puVar4 = (undefined4 *)(iVar1 + 4);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if ((*(uint *)(iVar1 + -4) <= uVar3) || (*(int *)*puVar4 == param_2)) break;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 2;
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(uint *)(iVar1 + -4) <= uVar3) {
    return;
  }
  FUN_00609e22(iVar1 + uVar3 * 8);
  param_1[1] = -1;
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(undefined4 *)(*param_1 + -4);
  }
  FUN_00609419(uVar2,param_1[2]);
  FUN_008161f1(0);
  return;
}


