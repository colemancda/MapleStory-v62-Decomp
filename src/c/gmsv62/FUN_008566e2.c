/* FUN_008566e2 - 0x008566e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008566e2(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  undefined4 uVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x2cac) == 0) {
    uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0x16e);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    FUN_00679d22(unaff_EBP + -0x18,0x17b);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iVar4 = 0;
    while( true ) {
      if (*(int *)(extraout_ECX + 0x2cb8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
      }
      if (iVar1 <= *(int *)(unaff_EBP + -0x14)) break;
      iVar1 = *(int *)(extraout_ECX + 0x2cbc);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      FUN_00414edd(iVar1 + iVar4,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piVar2 = (int *)FUN_004f1f89(unaff_EBP + -0x1c,&DAT_00964364,unaff_EBP + -0x10);
      iVar1 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + -4);
      }
      FUN_0045efbb(iVar1,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      iVar4 = iVar4 + 0x25;
    }
    FUN_00471102(unaff_EBP + -0x18,0xc);
    if (**(int **)(extraout_ECX + 0x2cb8) == *(int *)(extraout_ECX + 0x2088)) {
      uVar3 = FUN_00679d22(unaff_EBP + -0x1c,0x17c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00471102(uVar3,0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


