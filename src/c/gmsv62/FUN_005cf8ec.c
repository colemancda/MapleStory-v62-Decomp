/* FUN_005cf8ec - 0x005cf8ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005cf8ec(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0xdc);
  puVar5 = *(undefined4 **)(extraout_ECX + 0xe0);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(int *)(unaff_EBP + -0x24) = iVar6;
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = iVar6 / 4 << 2;
    *(int *)(unaff_EBP + -0x20) = iVar6;
    while( true ) {
      iVar4 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
      uVar1 = *puVar5;
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      FUN_00424ed4();
      iVar4 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) < iVar6) {
        *(undefined4 *)(unaff_EBP + -0x18) = 4;
      }
      else {
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x24) % 4;
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x14) % 4;
      iVar6 = __ftol();
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_00425067(unaff_EBP + -0x30,unaff_EBP + -0x50);
      iVar3 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(int *)(unaff_EBP + -0x18) = *piVar2;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_00425067(unaff_EBP + -0x2c,unaff_EBP + -0x40);
      iVar3 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(int *)(unaff_EBP + -0x28) = *piVar2;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      iVar3 = FUN_0040eed0();
      *(int *)(unaff_EBP + -0x18) = ((iVar4 / 4) * -0x10 + 0x10) - iVar3;
      iVar4 = FUN_0040eea9();
      iVar6 = (**(code **)(*piVar2 + 0x90))
                        (piVar2,iVar6 - iVar4,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x60),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                         *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,piVar2,&DAT_00963de8);
      }
      FUN_004125e6();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x50);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x60);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      piVar2 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      if (*(int *)(unaff_EBP + -0x1c) == 0) break;
      puVar5 = *(undefined4 **)(unaff_EBP + -0x1c);
      iVar6 = *(int *)(unaff_EBP + -0x20);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


