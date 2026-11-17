/* FUN_0042dc8f - 0x0042dc8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042dc8f(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int *piStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (-2 < *(int *)(unaff_EBP + 0x20)) {
    do {
      if (-1 < *(int *)(unaff_EBP + -0x14)) {
        FUN_0087a1b0();
        iStack_58 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_5c = 0x42dcd9;
        piStack_54 = (int *)&stack0xffffffb4;
        FUN_0087a25a();
      }
      piStack_54 = (int *)(unaff_EBP + -0x20);
      iStack_58 = 0x42dcf8;
      puVar1 = (undefined4 *)FUN_00679d86();
      iStack_58 = *puVar1;
      piStack_54 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_5c = unaff_EBP + -0x18;
      iStack_60 = 0x42dd0c;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00402676();
      piStack_54 = (int *)0xff;
      iStack_58 = 3;
      iStack_60 = unaff_EBP + 0x18;
      *(int **)(unaff_EBP + -0x24) = &iStack_5c;
      uStack_64 = 0x42dd32;
      iStack_5c = extraout_ECX_00;
      FUN_0041160e();
      iStack_60 = 0;
      uStack_64 = 0;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_68;
      uStack_68 = extraout_ECX_01;
      FUN_00433bdf(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar2 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0x10));
      FUN_0042e3f0(unaff_EBP + -0x10,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 3;
        break;
      }
      piStack_54 = (int *)0x42dd76;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_54 = (int *)(unaff_EBP + -0x3c);
      iStack_58 = 0x42dd84;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_54 = (int *)0x42dd90;
        FUN_00878dfb();
      }
      piStack_54 = *(int **)(unaff_EBP + 0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_58 = 0x42dda1;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar4 == (int *)0x0) {
        piStack_54 = (int *)0x42ddb6;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iStack_5c = *(int *)(unaff_EBP + -0x3c);
      iStack_58 = *(int *)(unaff_EBP + -0x38);
      iVar3 = *piVar4;
      piStack_54 = *(int **)(unaff_EBP + -0x34);
      uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
      uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar3 = (**(code **)(iVar3 + 0x110))
                        (piVar4,-(*(int *)(unaff_EBP + 0x24) != 0) & 0x20,
                         *(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar3 < 0) {
        piStack_54 = *(int **)(unaff_EBP + -0x24);
        iStack_5c = 0x42ddfa;
        iStack_58 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_54 = (int *)0x42de07;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_54 = (int *)0x42de12;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_54 = (int *)0x42de1f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_54 = (int *)0x42de2a;
        FUN_00878dfb();
      }
      piStack_54 = (int *)0x42de34;
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004251cf();
      piStack_54 = (int *)0x42de3e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this,*(IBinding **)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_54 = (int *)0x42de4f;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + 0x20));
  }
  piStack_54 = *(int **)(unaff_EBP + 0x18);
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffffb0;
  if (piStack_54 != (int *)0x0) {
    iStack_58 = 0x42de7c;
    (**(code **)(*piStack_54 + 4))();
  }
  piStack_54 = (int *)(unaff_EBP + -0x1c);
  iStack_58 = *(undefined4 *)(unaff_EBP + 8);
  iStack_5c = 0x42de8b;
  FUN_00432836();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00426311();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
    piStack_54 = (int *)0x42deb3;
    (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
    piStack_54 = (int *)0x42dec4;
    (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


