/* FUN_00592656 - 0x00592656 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00592831) */

void FUN_00592656(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xec) == 0) {
    iStack_48 = 0xff;
    uStack_4c = 0;
    iStack_54 = extraout_ECX + 0xe8;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_50;
    uStack_58 = 0x59268f;
    FUN_0041160e();
    iStack_54 = 0xffffff73;
    uStack_58 = 0xffffffda;
    iStack_5c = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar2 = FUN_004489f5();
    *(int **)(unaff_EBP + -0x20) = &iStack_5c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0048bccf(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d86(unaff_EBP + -0x14,0x551);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar2 = FUN_00411641(0);
    puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xf0);
    iStack_48 = 0x5926f3;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_48 = 0x592700;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_48 = 0x59271d;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    iStack_48 = 0x592729;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_48 = unaff_EBP + -0x40;
    uStack_4c = 0x592737;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_48 = 0x592743;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 6;
    iStack_48 = 0x592750;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_48 = unaff_EBP + -0x30;
    uStack_4c = 0x59275e;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_48 = 0x59276a;
      FUN_00878dfb();
    }
    iVar4 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar4 == 0) {
      iStack_48 = 0x59277d;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar4 = *piVar1;
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_5c = *(int *)(unaff_EBP + -0x2c);
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x18) = piVar1;
    iStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x30));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(extraout_ECX + 0xec) = 1;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x4db);
    uVar2 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 8;
    FUN_007d3cdd(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  else if ((*(int *)(extraout_ECX + 0xf0) != 0) && (iVar4 = FUN_00432a57(), iVar4 == 0)) {
    FUN_004dec2d();
    *(undefined4 *)(extraout_ECX + 0xec) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


