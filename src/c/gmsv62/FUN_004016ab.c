/* FUN_004016ab - 0x004016ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004016ab(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  int iStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  FUN_004028ac();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_5c = 0x4016dd;
  FUN_00404e7f();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x30);
    FUN_004028df();
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  else {
    iStack_5c = 0;
    *(int **)(unaff_EBP + -0x28) = &iStack_60;
    FUN_004059fd(&DAT_00973a38);
    iVar2 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_60 = 0x401732;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar1;
    iStack_5c = 0x401741;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_5c = 0x401752;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_5c = 0x40175f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_5c = 0x40176a;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_5c = 0x4017a7;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_5c = 0x4017b4;
      FUN_004035f5();
      FUN_004027b3();
      iStack_5c = 0x4017c6;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          iStack_5c = 0x4017dd;
          FUN_00878dfb();
        }
        iStack_5c = unaff_EBP + -0x44;
        iStack_60 = 1;
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))(*(int **)(unaff_EBP + -0x1c));
        if (iVar2 != 0) break;
        iStack_5c = unaff_EBP + -0x14;
        iStack_60 = 0x401807;
        iVar2 = unaff_EBP + -0x44;
        FUN_00405a23();
        iStack_60 = iVar2;
        iStack_5c = 0;
        *(int **)(unaff_EBP + -0x2c) = &iStack_60;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_004059fd(unaff_EBP + -0x14);
        iVar2 = unaff_EBP + -0x54;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_60 = 0x401840;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x28) = iVar2;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        if (iVar2 != 0) {
          iStack_5c = 0x401856;
          iVar2 = FUN_00404c6e();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_5c = 0x401867;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_5c = 0x401874;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_5c = 0x40187f;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00402912();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00402fa6();
        }
        else {
          iVar2 = FUN_00403634();
          iStack_5c = 0x4018b2;
          FUN_00402f41();
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            iStack_5c = 0x4018bd;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              iStack_5c = 0x4018c8;
              FUN_00878dfb();
            }
          }
          iVar3 = FUN_00404ae2();
          iVar4 = FUN_00404a94();
          *(int *)(iVar2 + 4) = (iVar4 + iVar3) / 2;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            iStack_5c = 0x4018f3;
            FUN_00878dfb();
          }
          FUN_0040273b();
          iVar3 = FUN_00404b09();
          iVar4 = FUN_00404abb();
          *(int *)(iVar2 + 8) = (iVar4 + iVar3) / 2;
          FUN_00402912();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00402fa6();
        }
      }
      iStack_5c = 0x40193b;
      FUN_00402716();
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_5c = 0x40194b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_5c = 0x401956;
        FUN_00878dfb();
      }
      FUN_004027f8();
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004028fc();
      iVar2 = *(int *)(unaff_EBP + 8);
      goto LAB_00401974;
    }
    iVar2 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x30);
    FUN_004028df();
    *(undefined4 *)(unaff_EBP + -0x18) = 1;
  }
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028fc();
LAB_00401974:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


