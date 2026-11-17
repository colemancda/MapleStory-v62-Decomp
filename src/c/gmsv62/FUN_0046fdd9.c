/* FUN_0046fdd9 - 0x0046fdd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0046fdd9(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 == 0) {
    puVar5 = *(undefined4 **)(unaff_EBP + 8);
    *puVar5 = 0;
    FUN_00419192(extraout_ECX);
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    iVar2 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar2 + -4) >> 1;
    }
    iVar4 = FUN_0041903e(uVar3 + iVar1,0);
    iVar2 = *extraout_ECX;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar2 + -4) >> 1;
    }
    FUN_00879c20(iVar4,iVar2,uVar3 * 2);
    if (*extraout_ECX == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*extraout_ECX + -4) >> 1;
    }
    FUN_00879c20(iVar4 + uVar3 * 2,*(undefined4 *)(unaff_EBP + 0xc),iVar1 * 2);
    if (*extraout_ECX == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*extraout_ECX + -4) >> 1;
    }
    FUN_004190dc(uVar3 + iVar1);
    puVar5 = *(undefined4 **)(unaff_EBP + 8);
    *puVar5 = 0;
    FUN_00419192(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


