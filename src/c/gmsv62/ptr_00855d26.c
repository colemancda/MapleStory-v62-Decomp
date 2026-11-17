/* ptr_00855d26 - 0x00855d26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855d26(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x855d2d;
  iVar4 = FUN_0042459a();
  if (iVar4 == *(int *)(unaff_EBX + 0x2cac)) {
    iStack_4 = 0x855d40;
    uVar3 = FUN_00424561();
    *(undefined2 *)(unaff_EBX + 0x2cc4) = uVar3;
    iStack_4 = 0x855d4e;
    uVar2 = FUN_0042452b();
    *(undefined1 *)(unaff_EBX + 0x2cc6) = uVar2;
    iStack_4 = 0x855d5b;
    uVar3 = FUN_00424561();
    *(undefined2 *)(unaff_EBX + 0x2cc7) = uVar3;
    iStack_4 = 0x855d69;
    uVar2 = FUN_0042452b();
    *(undefined1 *)(unaff_EBX + 0x2cc9) = uVar2;
    if ((*(int *)(unaff_EBX + 0x2cac) != 0) &&
       (piVar1 = *(int **)(unaff_EBX + 0x2cb8), *piVar1 == *(int *)(unaff_EBX + 0x2088))) {
      iStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      uStack_10 = 0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_14;
      piStack_14 = piVar1;
      FUN_00679d22(&piStack_14,0xcc4);
      FUN_007db3ad();
    }
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
      iStack_4 = 0x856297;
      FUN_0077e45e();
    }
    if (DAT_00978358 != 0) {
      iStack_4 = 0x8562ab;
      FUN_007b02be();
    }
    if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
      iStack_4 = 0x8562d0;
      FUN_0077e45e();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_4 = 0x8565cd;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_4 = 0x8565d9;
    FUN_00414ebb();
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_4 = *(int *)(unaff_EBP + 8) + -0xc;
      uStack_8 = 0x85644c;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x14) + -0xc;
      uStack_8 = 0x856465;
      FUN_00434e38();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


