/* FUN_006aacde - 0x006aacde in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006aacde(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == -1) {
    iStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    *(int **)(unaff_EBP + 8) = &iStack_5c;
    uStack_60 = 0xffffffff;
    puStack_64 = &DAT_0096a83c;
    FUN_0045f0f3();
    uStack_60 = 0x6aad13;
    FUN_007db3ad();
    iStack_50 = 0x6aad22;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5a0),
               (IBinding *)0x0);
    *(undefined4 *)(extraout_ECX + 0x57c) = 0;
    *(undefined4 *)(extraout_ECX + 0x578) = 0;
    iStack_50 = 0x6aad3e;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x58c) + 4) + 0x1c))();
    iStack_50 = 1;
    uStack_54 = 0x6aad4f;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x594) + 4) + 0x1c))();
  }
  else {
    iStack_50 = 0x6aad5f;
    puVar3 = (undefined4 *)FUN_004489f5();
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_50 = 0x6aad74;
    puVar3 = (undefined4 *)FUN_004489f5();
    iStack_50 = 0xff;
    uStack_54 = 1;
    *(undefined4 *)(unaff_EBP + -0x14) = *puVar3;
    iStack_5c = unaff_EBP + -0x10;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_58;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_60 = 0x6aad94;
    FUN_0052359e();
    iStack_5c = 0x3c;
    uStack_60 = 2;
    *(undefined ***)(unaff_EBP + -0x28) = &puStack_64;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00523572(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piVar4 = (int *)FUN_0042e3f0(unaff_EBP + -0x18,u_UI_UIWindow_img_EnchantSkill_Eff_0096a7f4,0);
    piVar4 = (int *)*piVar4;
    piVar2 = *(int **)(extraout_ECX + 0x5a0);
    piVar1 = (int *)(extraout_ECX + 0x5a0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar2 != piVar4) {
      *piVar1 = (int)piVar4;
      FUN_00424ed4();
      if (piVar2 != (int *)0x0) {
        iStack_50 = 0x6aadea;
        (**(code **)(*piVar2 + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_50 = 0x6aadfb;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_50 = 0x6aae0c;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_50 = 0x6aae1d;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    iStack_50 = 0x6aae29;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iStack_50 = unaff_EBP + -0x48;
    uStack_54 = 0x6aae37;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_50 = 0x6aae43;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iStack_50 = 0x6aae50;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_50 = unaff_EBP + -0x38;
    uStack_54 = 0x6aae5e;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      iStack_50 = 0x6aae6a;
      FUN_00878dfb();
    }
    iVar5 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar5 == 0) {
      iStack_50 = 0x6aae7d;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x48);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
    iVar5 = *piVar1;
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    puStack_64 = *(undefined **)(unaff_EBP + -0x34);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
    *(int **)(unaff_EBP + -0x20) = piVar1;
    iStack_5c = *(int *)(unaff_EBP + -0x2c);
    iVar5 = (**(code **)(iVar5 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x38));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    FUN_007d3cdd(u_Enchant_0096a7e4);
    *(undefined4 *)(extraout_ECX + 0x580) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x584) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(extraout_ECX + 0x57c) = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


