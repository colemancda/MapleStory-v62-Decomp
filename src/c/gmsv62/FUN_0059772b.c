/* FUN_0059772b - 0x0059772b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059772b(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  
  FUN_00879bb8();
  puStack_54 = &stack0xffffffb8;
  if (*(int *)(unaff_EBP + 8) < 0) {
    puStack_4c = (undefined4 *)0x3;
    iStack_50 = 0;
    puStack_54 = (undefined1 *)0x597753;
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      puStack_4c = (undefined4 *)0x80004003;
      iStack_50 = 0x597766;
      FUN_00878dfb();
    }
    puStack_4c = (undefined4 *)(unaff_EBP + -0x28);
    iStack_50 = unaff_EBP + -0x10;
    puStack_54 = (undefined1 *)0x597776;
    piVar1 = (int *)FUN_00425067();
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      puStack_4c = (undefined4 *)0x80004003;
      iStack_50 = 0x597786;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    puStack_4c = (undefined4 *)0xffffffff;
    iStack_50 = 600;
    puStack_54 = (undefined1 *)0x320;
    iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,0,0);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
    }
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  else {
    puStack_4c = (undefined4 *)0x5977e0;
    FUN_0087a1b0();
    puStack_4c = (undefined4 *)0x0;
    iStack_50 = 0;
    uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + 8));
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_54;
    FUN_004033a1(uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x28;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    puStack_54 = (undefined1 *)0x59781d;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar2 != 0) {
      puStack_4c = (undefined4 *)(unaff_EBP + -0x10);
      iStack_50 = 0x597833;
      puStack_4c = (undefined4 *)FUN_0041a581();
      if (((int)puStack_4c < 0) && (puStack_4c != (undefined4 *)0x80004002)) {
        iStack_50 = 0x597844;
        FUN_00878dfb();
      }
    }
    puStack_4c = (undefined4 *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_50 = 0x597851;
    puStack_4c = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_4c < 0) {
      iStack_50 = 0x59785c;
      FUN_00878dfb();
    }
    puStack_4c = &DAT_00980690;
    iStack_50 = 0x597869;
    FUN_00403191();
    puStack_4c = (undefined4 *)0x3;
    iStack_50 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_54 = (undefined1 *)0x597877;
    FUN_004031b7();
    iVar2 = *(int *)(extraout_ECX + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar2 == 0) {
      puStack_4c = (undefined4 *)0x80004003;
      iStack_50 = 0x59788b;
      FUN_00878dfb();
    }
    puStack_4c = (undefined4 *)(unaff_EBP + -0x38);
    iStack_50 = unaff_EBP + -0x18;
    puStack_54 = (undefined1 *)0x59789b;
    piVar1 = (int *)FUN_00425067();
    iVar2 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      puStack_4c = (undefined4 *)0x80004003;
      iStack_50 = 0x5978ab;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    iVar2 = *piVar1;
    puStack_54 = *(undefined1 **)(unaff_EBP + -0x44);
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + -0x14) = piVar1;
    puStack_4c = *(undefined4 **)(unaff_EBP + -0x3c);
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar1,0,0,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x48))
    ;
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
    }
    piVar1 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar1 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


