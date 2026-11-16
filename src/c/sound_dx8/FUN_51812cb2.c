/* FUN_51812cb2 - 0x51812cb2 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812cb2(int param_1,uint param_2,int param_3,size_t param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  FUN_518017b5();
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    if (&stack0x00000000 != (undefined1 *)0xfffffff0) {
      uVar4 = *(uint *)(iVar5 + 0xc);
    }
    iVar5 = *(int *)(iVar5 + 8);
  }
  piVar1 = (int *)(param_1 + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((param_3 < 0) || (0 < param_3)) || ((-1 < param_3 && (uVar4 < param_2)))) {
    uVar2 = 0x80070057;
  }
  else {
    iVar3 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
    if ((-1 < iVar3) && ((0 < iVar3 || (uVar4 < param_4 + param_2)))) {
      param_4 = uVar4 - param_2;
    }
    memcpy(param_5,(void *)(param_2 + iVar5),param_4);
    uVar2 = 0;
  }
  return uVar2;
}


