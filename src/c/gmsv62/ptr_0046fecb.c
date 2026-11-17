/* ptr_0046fecb - 0x0046fecb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046fecb(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  int *unaff_EDI;
  
  psVar1 = (short *)*unaff_EDI;
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    iVar3 = unaff_EBX * 2;
    uVar2 = FUN_0041903e(unaff_EBX,0);
    FUN_00879c20(uVar2,param_3,iVar3);
    FUN_004190dc(unaff_EBX);
  }
  else {
    iVar5 = (*(uint *)(psVar1 + -2) >> 1) + unaff_EBX;
    for (iVar3 = *(int *)(psVar1 + -4); iVar3 < iVar5; iVar3 = iVar3 * 2) {
    }
    iVar3 = FUN_0041903e(iVar3,1);
    if (*unaff_EDI == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(*unaff_EDI + -4) >> 1;
    }
    FUN_00879c20(iVar3 + uVar4 * 2,param_3,unaff_EBX * 2);
    FUN_004190dc(iVar5);
  }
  return;
}


