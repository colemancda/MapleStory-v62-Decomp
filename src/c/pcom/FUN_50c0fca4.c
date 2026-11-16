/* FUN_50c0fca4 - 0x50c0fca4 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int __cdecl FUN_50c0fca4(undefined4 *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  size_t *psVar5;
  short *psVar6;
  ushort *puVar7;
  
  puVar7 = (ushort *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  uVar2 = FUN_50c04cbc(param_2);
  if (uVar2 == 0) {
    *param_1 = 0;
  }
  else {
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      puVar7 = *(ushort **)*param_2;
    }
    uVar1 = *puVar7;
    if ((((uVar1 == 0) || (uVar1 == 0x2f)) || (uVar1 == 0x5c)) ||
       ((iVar3 = FUN_50c0fd3b(uVar1), iVar3 != 0 && (puVar7[1] == 0x3a)))) {
      iVar3 = FUN_50c10184(param_2,param_1);
      return iVar3;
    }
    if ((undefined4 *)*param_2 == (undefined4 *)0x0) {
      psVar4 = (short *)0x0;
    }
    else {
      psVar4 = *(short **)*param_2;
    }
    if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = *(short **)*param_3;
    }
    psVar5 = FUN_50c0fd6b(psVar6,psVar4);
    if (psVar5 == (size_t *)0x0) {
      return -0x7fffbffb;
    }
    *param_1 = psVar5;
  }
  return 0;
}


