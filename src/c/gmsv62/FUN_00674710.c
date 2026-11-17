/* FUN_00674710 - 0x00674710 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00674710(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  do {
    if (iVar4 == 0) {
      uVar2 = 0x40;
    }
    else if (iVar4 == 1) {
      uVar2 = 0x20;
    }
    else if (iVar4 == 2) {
      uVar2 = 0x10;
    }
    else if (iVar4 == 3) {
      uVar2 = 8;
    }
    else {
      uVar2 = 0;
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c + iVar4 * 4);
    while (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + -8);
      FUN_00674779(iVar3,uVar2);
      iVar3 = iVar1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


