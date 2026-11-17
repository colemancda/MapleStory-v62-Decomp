/* FUN_00826ab0 - 0x00826ab0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00826ab0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00679d22(unaff_EBP + -0x10,0x48f);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0x30;
  *(undefined4 *)(unaff_EBP + -0x48) = 0x48;
  *(code **)(unaff_EBP + -0x44) = FUN_0082c96c;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  uVar1 = (*DAT_0097b380)(0);
  *(undefined4 *)(unaff_EBP + -0x38) = uVar1;
  uVar1 = (*DAT_0097b380)(0,0x65);
  uVar1 = (*DAT_0097b5ec)(uVar1);
  *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  (*DAT_0097b548)(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_00679d22(unaff_EBP + -0x1c,0x48f);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  uVar1 = FUN_00679d22(unaff_EBP + -0x1c,0x490);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x490);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uVar1 = (*DAT_0097b538)(-(DAT_0097c2c8 != 0) & 8,*(undefined4 *)(unaff_EBP + -0x10),uVar1,
                          (-(uint)(DAT_0097c2c8 != 0) & 0x7ff80000) + 0x80000,0,0,800,600,0,0,
                          *(undefined4 *)(unaff_EBP + -0x38),extraout_ECX);
  *(undefined4 *)(extraout_ECX + 4) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  if (*(int *)(extraout_ECX + 4) == 0) {
    uVar1 = (*DAT_0097b49c)();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_008f9b80);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


