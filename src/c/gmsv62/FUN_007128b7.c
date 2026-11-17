/* FUN_007128b7 - 0x007128b7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007128b7(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  DAT_00979520 = -(uint)(extraout_ECX != (undefined4 *)0xfffffffc) & (uint)extraout_ECX;
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[2] = &PTR_FUN_008e9114;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_008f0a30;
  *(undefined4 *)(unaff_EBP + -0x18) = 6;
  do {
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (bVar6) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0042a39f(unaff_EBP + -0x10,0,0,0x122,0xe,0xc0061634,unaff_EBP + -0x34,unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    puVar2 = (undefined4 *)FUN_00485656(unaff_EBP + -0x24);
    FUN_0040ee87(*puVar2,1);
    piVar3 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar3 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    iVar1 = *piVar3;
    *(int **)(unaff_EBP + -0x20) = piVar3;
    iVar1 = (**(code **)(iVar1 + 100))
                      (piVar3,*(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004125d9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar1 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffffff);
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar3,&DAT_00963df8);
    }
    FUN_004031b7(0,3);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar1 = FUN_00402bc3(unaff_EBP + -100);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    if ((*(int *)(unaff_EBP + -0x14) == 0) &&
       (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x14) == 0)) {
      FUN_00878dfb(0x80004003);
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar7 = 0xffffff;
    uVar4 = FUN_0040e53d(0xffffff);
    uVar5 = FUN_0040e48b(uVar4);
    FUN_005039eb(0,0,uVar5,uVar4,uVar7);
    FUN_005a9ee3(unaff_EBP + -0x10);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412600();
    piVar3 = (int *)(unaff_EBP + -0x18);
    *piVar3 = *piVar3 + -1;
  } while (*piVar3 != 0);
  FUN_00713013();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}


