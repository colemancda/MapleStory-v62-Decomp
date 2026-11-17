/* FUN_004fde2a - 0x004fde2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fde2a(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x40) != 0) && (*(int *)(extraout_ECX + 0xc) == 1)) {
    if (*(int *)(extraout_ECX + 0x40) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x10);
    iVar2 = *piVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_00404a94();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
    if (iVar2 != 0) {
      if (*(int *)(extraout_ECX + 0x40) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x10);
      iVar2 = *piVar1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)*piVar1;
      iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,0xff,0xff);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar1,&DAT_00963d08);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      FUN_00403191(&DAT_00980690);
      iVar2 = *(int *)(extraout_ECX + 0x40);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_0042a378();
      FUN_004031b7(iVar2 + *(int *)(extraout_ECX + 0x20) * 1000,3);
      iVar2 = *(int *)(extraout_ECX + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)FUN_004113e5(unaff_EBP + -0x14);
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_00424f2f(0,0,unaff_EBP + -0x24,unaff_EBP + -0x34);
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


