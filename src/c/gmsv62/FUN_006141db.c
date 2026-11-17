/* FUN_006141db - 0x006141db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006141db(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0061425f(0);
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 4) + 0x10;
  iVar5 = FUN_006155ca(iVar1);
  if (iVar5 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a4);
    uVar3 = *(uint *)(param_1 + 0xe0);
    uVar4 = *(undefined4 *)(param_1 + 0x1a0);
    piVar6 = (int *)FUN_00411537(param_2,iVar1);
    if ((uVar3 & 1) == 0) {
      piVar6[2] = -piVar6[2];
      *piVar6 = -*piVar6;
      FUN_004459fe(piVar6,piVar6 + 2);
    }
    (*DAT_0097b54c)(piVar6,uVar4,uVar2);
  }
  else {
    (*DAT_0097b508)(param_2);
  }
  return;
}


