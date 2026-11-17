/* ptr_00855be3 - 0x00855be3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00855be3(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x855bea;
  iVar2 = FUN_0042459a();
  if (iVar2 == *(int *)(unaff_EBX + 0x2cac)) {
    iStack_4 = unaff_EBP + -0x58;
    uStack_8 = 0x855c01;
    iStack_4 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_8 = 0x855c11;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x58) + -0xc;
      uStack_8 = 0x855c25;
      FUN_00434e38();
    }
    iStack_4 = unaff_EBP + -0x60;
    uStack_8 = 0x855c31;
    iStack_4 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_8 = 0x855c44;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x60) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x60) + -0xc;
      uStack_8 = 0x855c58;
      FUN_00434e38();
    }
    iStack_4 = unaff_EBP + -0x68;
    uStack_8 = 0x855c64;
    iStack_4 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    uStack_8 = 0x855c77;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x68) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x68) + -0xc;
      uStack_8 = 0x855c8b;
      FUN_00434e38();
    }
    iStack_4 = unaff_EBP + -0x70;
    uStack_8 = 0x855c97;
    iStack_4 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    uStack_8 = 0x855caa;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x70) + -0xc;
      uStack_8 = 0x855cbe;
      FUN_00434e38();
    }
    iStack_4 = unaff_EBP + -0x78;
    uStack_8 = 0x855cca;
    iStack_4 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    uStack_8 = 0x855cdd;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      iStack_4 = *(int *)(unaff_EBP + -0x78) + -0xc;
      uStack_8 = 0x855cf1;
      FUN_00434e38();
    }
    if ((*(int *)(unaff_EBX + 0x2cac) != 0) &&
       (piVar1 = *(int **)(unaff_EBX + 0x2cb8), *piVar1 == *(int *)(unaff_EBX + 0x2088))) {
      iStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      uStack_10 = 0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_14;
      piStack_14 = piVar1;
      FUN_00679d22(&piStack_14,0xc96);
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


