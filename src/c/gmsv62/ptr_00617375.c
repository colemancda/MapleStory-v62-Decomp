/* ptr_00617375 - 0x00617375 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00617375(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  piVar2 = (int *)FUN_0043f93c();
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar4 == unaff_ESI) {
    FUN_00878dfb();
  }
  uVar3 = FUN_0043210d();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00412600();
  iVar4 = *(int *)(unaff_EBP + 0xc);
  *unaff_EBX = unaff_ESI;
  if (iVar4 == unaff_ESI) {
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 0xc);
  iVar4 = (**(code **)(*piVar2 + 0xd8))(piVar2);
  if (iVar4 < unaff_ESI) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  if (*(int *)(unaff_EBP + -0x14) == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(unaff_EBP + -0x14) == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + 0xc) == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + 0xc);
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uVar3 = (**(code **)(*piVar2 + 0x10))();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar5 = FUN_0040eed0();
  iVar4 = *(int *)(*(int *)(unaff_EBP + 8) + 4);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x10))();
  iVar6 = FUN_0040eea9();
  iVar4 = (**(code **)(*piVar1 + 0x40))(piVar1,*piVar2 - iVar6,iVar4 - iVar5);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963d08);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004031b7(*(int *)(unaff_EBP + -0x18) + 500,3);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)FUN_004113e5(unaff_EBP + 8);
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = (int *)*piVar2;
  iVar4 = (**(code **)(*piVar2 + 0x90))
                    (piVar2,0xff,0,*(undefined4 *)(unaff_EBP + -0x38),
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x58),
                     *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                     *(undefined4 *)(unaff_EBP + -0x4c));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  FUN_004125e6();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


