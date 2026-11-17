/* FUN_005c52ed - 0x005c52ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c52ed(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar3 = *(int *)(extraout_ECX + 0x160), iVar3 == 0))
  {
    iVar3 = *(int *)(extraout_ECX + 0x15c);
  }
  uVar2 = FUN_004b8c9b(iVar3 + 0xc,*(undefined4 *)(iVar3 + 0x14));
  iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  puVar4 = (undefined4 *)
           (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(*(undefined4 *)(iVar3 + 4));
  uVar5 = FUN_007d3c48(*puVar4);
  FUN_007d4267(uVar2,1,uVar5);
  uVar2 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x348) = uVar2;
  FUN_005c5f49();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  iVar3 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0xec) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xec);
  iVar3 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar3 = (**(code **)(iVar3 + 0x8c))
                    (piVar1,extraout_ECX + 0x480,extraout_ECX + 0x484,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  if (*(int *)(extraout_ECX + 0xec) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0xec);
  iVar3 = (**(code **)(*piVar1 + 0x40))
                    (piVar1,*(undefined4 *)(extraout_ECX + 0x480),
                     *(undefined4 *)(extraout_ECX + 0x484));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963d08);
  }
  uVar2 = FUN_0055a766();
  uVar5 = 0;
  *(undefined4 *)(extraout_ECX + 0x3d8) = uVar2;
  uVar2 = FUN_005c5474(0);
  FUN_005cdf7c(0xc,uVar2,uVar5);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


