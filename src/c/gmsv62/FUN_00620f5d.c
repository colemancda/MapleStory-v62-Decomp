/* FUN_00620f5d - 0x00620f5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00620f5d(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int *piVar3;
  int unaff_EBP;
  undefined1 *puStack_74;
  int iStack_70;
  int aiStack_6c [2];
  int *piStack_64;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int **)(unaff_EBP + -0x14) = (int *)(extraout_ECX + 0x24);
  if (iVar1 == 0) {
    piStack_64 = &DAT_00980690;
    aiStack_6c[1] = 0x620f8e;
    FUN_00403191();
    piStack_64 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    aiStack_6c[1] = 0x620f9a;
    FUN_00403191();
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    aiStack_6c[0] = unaff_EBP + -0x40;
    iStack_70 = unaff_EBP + -0x30;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_74;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679e4e(&puStack_74,0x6b5);
    iVar1 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    aiStack_6c[0] = 0x620fe6;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      piStack_64 = (int *)(unaff_EBP + -0x18);
      aiStack_6c[1] = 0x621001;
      piStack_64 = (int *)FUN_00404b30();
      if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
        aiStack_6c[1] = 0x62100f;
        FUN_00878dfb();
      }
    }
    piStack_64 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    aiStack_6c[1] = 0x62101c;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x621027;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    aiStack_6c[1] = 0x621034;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x62103f;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x62104c;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x621057;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_00;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x5c6;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x62107c;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x621083;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    aiStack_6c[0] = 0x62108e;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x62109d;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x6210ab;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x6210b8;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x6210c3;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_01;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x6b6;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x6210e8;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x6210ef;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    aiStack_6c[0] = 0x6210fa;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x621109;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x621117;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x621124;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x62112f;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_02;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x6b4;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x621154;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x62115b;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    aiStack_6c[0] = 0x621166;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x621175;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x621183;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x621190;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x62119b;
      FUN_00878dfb();
    }
    piVar3 = (int *)**(int **)(unaff_EBP + -0x14);
    if (piVar3 != *(int **)(unaff_EBP + -0x10)) {
      **(int **)(unaff_EBP + -0x14) = (int)*(int **)(unaff_EBP + -0x10);
      piStack_64 = (int *)0x6211ae;
      FUN_004125cc();
      if (piVar3 != (int *)0x0) {
        aiStack_6c[1] = 0x6211b8;
        piStack_64 = piVar3;
        (**(code **)(*piVar3 + 8))();
      }
    }
    piStack_64 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_64 != (int *)0x0) {
      aiStack_6c[1] = 0x6211c9;
      (**(code **)(*piStack_64 + 8))();
    }
  }
  piStack_64 = (int *)**(int **)(unaff_EBP + -0x14);
  piVar3 = *(int **)(unaff_EBP + 8);
  *piVar3 = (int)piStack_64;
  if (piStack_64 != (int *)0x0) {
    aiStack_6c[1] = 0x6211dd;
    (**(code **)(*piStack_64 + 4))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar3;
}


