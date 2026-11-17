/* FUN_004695e1 - 0x004695e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004695e1(void)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int iVar9;
  undefined1 *puStack_64;
  int *piStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_5c = (int *)0x469607;
  FUN_0045f595();
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_5c = (int *)0x80004003;
    piStack_60 = (int *)0x469616;
    FUN_00878dfb();
  }
  piStack_5c = (int *)0x46961e;
  piStack_60 = (int *)FUN_0040cf4d();
  piStack_5c = (int *)(unaff_EBP + 0xf);
  puStack_64 = (undefined1 *)0x46962a;
  FUN_004699c9();
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  iVar9 = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_5c = (int *)0x80004003;
      piStack_60 = (int *)0x46963e;
      FUN_00878dfb();
    }
    piStack_5c = (int *)0x469646;
    uVar3 = FUN_0040cf4d();
    if (uVar3 <= *(uint *)(unaff_EBP + 0xc)) break;
    piStack_5c = (int *)0x469657;
    FUN_0087a1b0();
    piStack_5c = (int *)0x0;
    piStack_60 = (int *)0x0;
    puStack_64 = &stack0xffffffa8;
    uVar4 = FUN_00412335(*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_64;
    FUN_004033a1(uVar4);
    iVar7 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar7);
    FUN_004048a4(iVar7);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_64 = (undefined1 *)0x469692;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    piStack_5c = (int *)(unaff_EBP + -0x14);
    piStack_60 = (int *)0x4696a1;
    piStack_5c = (int *)FUN_00404b30();
    if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
      piStack_60 = (int *)0x4696b2;
      FUN_00878dfb();
    }
    piStack_5c = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_60 = (int *)0x4696bf;
    piVar5 = (int *)FUN_00402bc3();
    piStack_60 = piStack_5c;
    if ((int)piVar5 < 0) {
      piStack_60 = (int *)0x4696ca;
      piStack_5c = piVar5;
      FUN_00878dfb();
      piStack_60 = extraout_ECX;
    }
    piStack_5c = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_60;
    puStack_64 = (undefined1 *)0x569;
    FUN_00679e4e(&piStack_60);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d();
    piStack_60 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_64 = (undefined1 *)0x469702;
    uVar4 = FUN_00412550();
    piStack_5c = *(int **)(unaff_EBP + 0xc);
    piStack_60 = (int *)0x469710;
    puVar6 = (undefined4 *)FUN_00469a1a();
    *puVar6 = uVar4;
    piStack_5c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_60 = (int *)0x46971f;
    piVar5 = (int *)FUN_00402bc3();
    piStack_60 = piStack_5c;
    if ((int)piVar5 < 0) {
      piStack_60 = (int *)0x46972a;
      piStack_5c = piVar5;
      FUN_00878dfb();
      piStack_60 = extraout_ECX_00;
    }
    piStack_5c = (int *)0x0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_60;
    puStack_64 = (undefined1 *)0x56a;
    FUN_00679e4e(&piStack_60);
    puStack_64 = (undefined1 *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d();
    piStack_60 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_64 = (undefined1 *)0x469763;
    uVar4 = FUN_00412550();
    piStack_5c = *(int **)(unaff_EBP + 0xc);
    piStack_60 = (int *)0x469771;
    iVar7 = FUN_00469a1a();
    *(undefined4 *)(iVar7 + 4) = uVar4;
    piStack_5c = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_60 = (int *)0x469781;
    piVar5 = (int *)FUN_00402bc3();
    if ((int)piVar5 < 0) {
      piStack_60 = (int *)0x46978e;
      piStack_5c = piVar5;
      FUN_00878dfb();
      piStack_5c = extraout_ECX_01;
    }
    puStack_64 = (undefined1 *)&piStack_5c;
    *(int ***)(unaff_EBP + -0x18) = &piStack_5c;
    piStack_60 = (int *)0x56b;
    FUN_00679e4e();
    piStack_60 = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_64 = (undefined1 *)0x4697b4;
    FUN_0040263d();
    puStack_64 = (undefined1 *)0x4697bb;
    psVar8 = (short *)FUN_004048a4();
    sVar1 = *psVar8;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (sVar1 == 8) {
      piStack_60 = *(int **)(psVar8 + 4);
    }
    else {
      piStack_60 = (int *)&DAT_0097812c;
    }
    piStack_5c = (int *)0xffffffff;
    puStack_64 = (undefined1 *)0x4697dd;
    FUN_00454081();
    piStack_5c = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_60 = (int *)0x4697ea;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      piStack_60 = (int *)0x4697f5;
      FUN_00878dfb();
    }
    *(undefined4 *)(iVar9 + 0x10 + *piVar2) = 0xffffffff;
    iVar7 = *piVar2;
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    *(undefined4 *)(iVar9 + 0x14 + iVar7) = 0;
    *(undefined4 *)(iVar9 + 0x18 + *piVar2) = 0;
    iVar9 = iVar9 + 0x1c;
  }
  piStack_5c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_5c != (int *)0x0) {
    piStack_60 = (int *)0x469823;
    (**(code **)(*piStack_5c + 8))();
  }
  piStack_5c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_5c != (int *)0x0) {
    piStack_60 = (int *)0x469834;
    (**(code **)(*piStack_5c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


