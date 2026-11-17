/* FUN_004456be - 0x004456be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004456be(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  piVar1 = (int *)(extraout_ECX + 0xcdc);
  if (*piVar1 == 0) {
    iStack_3c = 0xff;
    uStack_40 = 0;
    iStack_48 = extraout_ECX + 0xccc;
    *(undefined4 **)(unaff_EBP + -0x10) = &local_44;
    uStack_4c = 0x4456f9;
    FUN_0041160e();
    iStack_48 = 0;
    uStack_4c = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_50;
    FUN_00433bdf(extraout_ECX + 0xcac);
    piVar3 = (int *)FUN_0042e3f0(unaff_EBP + -0x10,u_Effect_ItemEff_img_2022269_00964104,0);
    piVar3 = (int *)*piVar3;
    piVar2 = (int *)*piVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar2 != piVar3) {
      *piVar1 = (int)piVar3;
      FUN_00424ed4();
      if (piVar2 != (int *)0x0) {
        iStack_3c = 0x44573d;
        (**(code **)(*piVar2 + 8))();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_3c = 0x44574e;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    iStack_3c = 0x44575a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_3c = unaff_EBP + -0x34;
    uStack_40 = 0x445769;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_3c = 0x445775;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_3c = 0x445782;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iStack_3c = unaff_EBP + -0x24;
    uStack_40 = 0x44578c;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_3c = 0x445798;
      FUN_00878dfb();
    }
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      iStack_3c = 0x4457ab;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    local_44 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_40 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_3c = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
    iVar4 = (**(code **)(*piVar1 + 0x110))(piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


