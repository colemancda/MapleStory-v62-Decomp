/* FUN_00827654 - 0x00827654 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00827654(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(DAT_00978134 + 0x10);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8df);
  uVar2 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00829f2a(uVar2,&DAT_0097c1ac,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x10) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_ECX + 4);
  uVar2 = DAT_0097c2c8;
  *(undefined2 *)(unaff_EBP + -0x34) = 0x4003;
  *(undefined2 *)(unaff_EBP + -0x24) = 3;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  FUN_004031b7(uVar1,3);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_008278a1(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_008278a1(unaff_EBP + -0x34);
  bVar6 = DAT_0097c1ac == (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = DAT_0097c1ac;
  iVar4 = (**(code **)(*DAT_0097c1ac + 0xc))
                    (DAT_0097c1ac,800,600,*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -100),
                     *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00964018);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -100);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (DAT_0097c1ac == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = DAT_0097c1ac;
  iVar4 = (**(code **)(*DAT_0097c1ac + 0x4c))(DAT_0097c1ac,0xff000000);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00964018);
  }
  if (DAT_0097c1ac == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = (int *)FUN_0065c924(unaff_EBP + -0x10);
  iVar4 = *piVar5;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = (int *)*piVar5;
  iVar4 = (**(code **)(*piVar5 + 0x24))(piVar5,0xff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00963d08);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004125d9();
  if (DAT_0097c1ac == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = (int *)FUN_0065c956(unaff_EBP + -0x14);
  iVar4 = *piVar5;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0061766e(0xff,0xff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004125d9();
  iVar4 = FUN_004029b9(4);
  *(int *)(unaff_EBP + -0x14) = iVar4;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  if (iVar4 != 0) {
    FUN_00809fe8();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


