/* FUN_0057e58e - 0x0057e58e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0057e733) */

void FUN_0057e58e(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0xcc);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar4 == 0) {
    iStack_4c = unaff_EBP + -0x10;
    uStack_50 = 0x57e5c4;
    FUN_00679d86();
    iStack_4c = 0xff;
    uStack_50 = 0xffffffff;
    puStack_58 = (undefined1 *)&uStack_54;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_54;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_5c = 0x57e5dd;
    FUN_004489f5();
    puStack_58 = (undefined1 *)0x0;
    uStack_5c = 0;
    iStack_60 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar2 = FUN_004489f5();
    *(int **)(unaff_EBP + -0x24) = &iStack_60;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0048bccf(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar2 = FUN_00411641(0);
    puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x14,uVar2);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd0);
    iStack_4c = 0x57e627;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_4c = 0x57e634;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_4c = 0x57e644;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    iStack_4c = 0x57e650;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_4c = unaff_EBP + -0x44;
    uStack_50 = 0x57e65e;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x57e66a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_4c = 0x57e674;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_4c = unaff_EBP + -0x34;
    uStack_50 = 0x57e682;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_4c = 0x57e68e;
      FUN_00878dfb();
    }
    iVar4 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      iStack_4c = 0x57e6a0;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    iVar4 = *piVar1;
    iStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_60 = *(int *)(unaff_EBP + -0x30);
    uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
    *(int **)(unaff_EBP + -0x18) = piVar1;
    puStack_58 = *(undefined1 **)(unaff_EBP + -0x28);
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x34));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xcc) = 1;
    FUN_00402676();
  }
  else if ((*(int *)(extraout_ECX + 0xd0) != 0) && (iVar4 = FUN_00432a57(), iVar4 == 0)) {
    FUN_004dec2d();
    *(undefined4 *)(extraout_ECX + 0xcc) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


