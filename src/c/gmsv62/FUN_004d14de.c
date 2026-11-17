/* FUN_004d14de - 0x004d14de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004d14de(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  uint uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00560122();
  extraout_ECX[0x1e] = *(undefined4 *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[0x1f] = iVar1;
  extraout_ECX[0x20] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x26] = 0xffffffff;
  extraout_ECX[0x25] = 0;
  iVar1 = *(int *)(iVar1 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
  }
  extraout_ECX[0x29] = 0;
  FUN_004d20e3(iVar1 + 1,unaff_EBP + 0xb);
  extraout_ECX[0x2b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *extraout_ECX = &PTR_FUN_008ea3d8;
  extraout_ECX[1] = &PTR_LAB_008ea3b4;
  extraout_ECX[2] = &PTR_FUN_008ea3b0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while( true ) {
    iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + 4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + -4);
    }
    if (iVar1 + 1U <= *(uint *)(unaff_EBP + 8)) break;
    iVar1 = extraout_ECX[0x29] + *(int *)(unaff_EBP + -0x10);
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_0040d36c(extraout_ECX[0x1f],*(undefined4 *)(unaff_EBP + 8),iVar1);
    }
    uVar2 = *(uint *)(iVar1 + 0xc);
    while (uVar2 != 0) {
      iVar1 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


