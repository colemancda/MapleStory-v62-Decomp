/* FUN_0056fe40 - 0x0056fe40 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056fe40(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xd4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_48 = unaff_EBP + -0x14;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_4c = 0x56fe79;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_48 = *puVar2;
    iStack_4c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_50 = 0x56fe97;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iStack_48 = 0xff;
    iStack_4c = 0xffffffff;
    puStack_54 = (undefined1 *)&uStack_50;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_50;
    uStack_58 = 0x56febc;
    FUN_004489f5();
    puStack_54 = (undefined1 *)0xffffffe7;
    uStack_58 = 0xffffffec;
    iStack_5c = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uVar3 = FUN_004489f5();
    *(int **)(unaff_EBP + -0x20) = &iStack_5c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0048bccf(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar3 = FUN_00411641(0);
    puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x14,uVar3);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd8);
    iStack_48 = 0x56ff08;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_48 = 0x56ff15;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_48 = 0x56ff26;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    iStack_48 = 0x56ff30;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    iStack_48 = unaff_EBP + -0x40;
    iStack_4c = 0x56ff3e;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_48 = 0x56ff4a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_48 = 0x56ff58;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_48 = unaff_EBP + -0x30;
    iStack_4c = 0x56ff66;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_48 = 0x56ff72;
      FUN_00878dfb();
    }
    iVar4 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar4 == 0) {
      iStack_48 = 0x56ff84;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    uStack_50 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar4 = *piVar1;
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_5c = *(int *)(unaff_EBP + -0x2c);
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    *(int **)(unaff_EBP + -0x18) = piVar1;
    puStack_54 = *(undefined1 **)(unaff_EBP + -0x24);
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x30));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(extraout_ECX + 0xd4) = 1;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x4db);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_007d3cdd(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  else {
    if (*(int *)(extraout_ECX + 0xd8) == 0) {
      iStack_48 = 0x570049;
      FUN_00878dfb();
    }
    iVar4 = FUN_00432a57();
    if (iVar4 == 0) {
      FUN_004dec2d();
      *(undefined4 *)(extraout_ECX + 0xd4) = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


