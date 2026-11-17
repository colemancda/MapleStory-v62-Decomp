/* FUN_007a1a68 - 0x007a1a68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a1a68(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar4;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1990;
  extraout_ECX[-1] = &PTR_LAB_008f196c;
  *extraout_ECX = &PTR_FUN_008f1968;
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  extraout_ECX[0x1c] = &PTR_LAB_008f1954;
  uVar1 = extraout_ECX[0x35c];
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  FUN_00432942(uVar1);
  if (extraout_ECX[0x91a] != 0) {
    FUN_007d4061(extraout_ECX[0x91a]);
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_00429328(unaff_EBP + -0x14);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x34) = DAT_0097bb34;
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -0x30) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x2c) = DAT_0097bb3c;
  *(int **)(unaff_EBP + -0x10) = piVar2;
  iVar3 = (**(code **)(iVar3 + 100))
                    (piVar2,*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004125d9();
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00403191(&DAT_00980690);
  bVar4 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (bVar4) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_00429328(unaff_EBP + -0x10);
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar3 = (**(code **)(iVar3 + 0x90))
                    (piVar2,0,0,*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  extraout_ECX[0x93d] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  extraout_ECX[0x937] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_007b4664();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_007b4664();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  extraout_ECX[0x929] = &PTR_FUN_008f19dc;
  FUN_007b4b26();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  extraout_ECX[0x924] = &PTR_FUN_008f19dc;
  FUN_007b4b26();
  piVar2 = (int *)extraout_ECX[0x923];
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x91b] = &PTR_FUN_008ecb0c;
  FUN_005d10de();
  piVar2 = (int *)extraout_ECX[0x914];
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x8fb] = &PTR_FUN_008f19e0;
  FUN_007b499c();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0074d4c3();
  iVar3 = extraout_ECX[0x7b6];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 != 0) {
    FUN_004d2023(0);
    extraout_ECX[0x7b6] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x7ab] = &PTR_FUN_008f19e4;
  FUN_007b4812();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_00978358 = 0;
  FUN_0078b437();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


