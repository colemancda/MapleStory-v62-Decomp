/* FUN_0044fc0f - 0x0044fc0f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044fc0f(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iStack_28 = *(int *)(unaff_EBP + 8);
  if (*(int *)(extraout_ECX + 100) != iStack_28) {
    *(int *)(extraout_ECX + 100) = iStack_28;
    iStack_2c = unaff_EBP + 8;
    piStack_30 = (int *)0x44fc40;
    FUN_00552e70();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_30 = (int *)0x0;
      uStack_34 = 0;
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
      FUN_004033a1(u_book_0096428c);
      iVar2 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_38 = 0x44fc81;
      uVar1 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      piStack_30 = (int *)(unaff_EBP + -0x10);
      uStack_34 = 0x44fc95;
      piStack_30 = (int *)FUN_00404b30();
      if (((int)piStack_30 < 0) && (piStack_30 != (int *)0x80004002)) {
        uStack_34 = 0x44fca6;
        FUN_00878dfb();
      }
      piStack_30 = (int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_34 = 0x44fcb2;
      piStack_30 = (int *)FUN_00402bc3();
      if ((int)piStack_30 < 0) {
        uStack_34 = 0x44fcbd;
        FUN_00878dfb();
      }
      if (*(int *)(extraout_ECX + 0x568) != 0) {
        piStack_30 = (int *)0x44fcc8;
        iVar2 = FUN_0040cf4d();
        piStack_30 = (int *)0x0;
        *(int *)(extraout_ECX + 0x6c) = iVar2 + -1;
        uStack_34 = 0x44fcd4;
        FUN_0044fcf6();
      }
      piStack_30 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_30 != (int *)0x0) {
        uStack_34 = 0x44fce5;
        (**(code **)(*piStack_30 + 8))();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


