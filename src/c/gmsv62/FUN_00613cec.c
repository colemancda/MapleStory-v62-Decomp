/* FUN_00613cec - 0x00613cec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00613cec(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar6;
  bool bVar7;
  
  FUN_00879bb8();
  uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(unaff_EBP + 8);
  uVar2 = FUN_0061aa2e(uVar2);
  *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
  *(undefined4 *)(extraout_ECX + 0x98) = 1;
  *(undefined4 *)(extraout_ECX + 0x9c) = 100;
  *(undefined4 *)(extraout_ECX + 0xa0) = 0;
  puVar3 = (undefined4 *)(**(code **)(*(int *)(*(int *)(extraout_ECX + 0x84) + 4) + 0x10))();
  *(undefined4 *)(extraout_ECX + 0x1a8) = *puVar3;
  *(undefined4 *)(extraout_ECX + 0x1ac) = puVar3[1];
  *(undefined4 *)(extraout_ECX + 0x1a0) = *puVar3;
  *(undefined4 *)(extraout_ECX + 0x1a4) = puVar3[1];
  *(undefined4 *)(extraout_ECX + 0xe0) = 1;
  FUN_00613f35();
  uVar2 = FUN_00861327(*(undefined4 *)(extraout_ECX + 0x1a0),*(undefined4 *)(extraout_ECX + 0x1a4),0
                       ,0x7fffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  piVar4 = (int *)FUN_00486ada(unaff_EBP + 0xc);
  uVar6 = -(uint)(*piVar4 != 0) & *piVar4 - 0xcU;
  piVar4 = *(int **)(unaff_EBP + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  uVar2 = FUN_007fdc6e();
  iVar5 = *(int *)(extraout_ECX + 0x78);
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  FUN_007fdcc3(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U,*(undefined4 *)(iVar5 + 8));
  (**(code **)(**(int **)(unaff_EBP + 8) + 4))
            (1,*(int *)(extraout_ECX + 0x1a0) + 0x50,*(undefined4 *)(extraout_ECX + 0x1a4),0,0,
             *(undefined4 *)(extraout_ECX + 0xe0),*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(extraout_ECX + 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x140);
  iVar5 = FUN_00618ea1(unaff_EBP + 8);
  if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb(iVar5);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iVar5 = FUN_00402e32(unaff_EBP + -0x24,&DAT_00980690);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0,3);
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar7) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)FUN_0042a39f(unaff_EBP + -0x14,0,0,0,0,0,unaff_EBP + -0x34,unaff_EBP + -0x24);
  iVar5 = *(int *)(extraout_ECX + 0x114);
  iVar1 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(int *)(unaff_EBP + -0x10) = iVar5;
  if (iVar5 != iVar1) {
    *(int *)(extraout_ECX + 0x114) = iVar1;
    FUN_00424ed4();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  iVar5 = FUN_0048bb31(uVar6 + 0x11c,*(undefined4 *)(uVar6 + 0x124));
  FUN_00615de7(iVar5 != 0,1);
  FUN_006142ef();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


