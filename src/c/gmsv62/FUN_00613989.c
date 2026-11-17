/* FUN_00613989 - 0x00613989 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00613989(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(unaff_EBP + 8);
  FUN_0042459a();
  uVar2 = FUN_0061aa2e();
  *(undefined4 *)(extraout_ECX + 0x78) = uVar2;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434e38();
  }
  FUN_004245d2();
  iVar3 = FUN_0061411c();
  if (iVar3 != 0) {
    sVar1 = FUN_0045f084();
    *(int *)(extraout_ECX + 0x98) = (int)sVar1;
    uVar4 = FUN_0045f03e();
    *(uint *)(extraout_ECX + 0x9c) = uVar4 & 0xff;
    sVar1 = FUN_0045f084();
    *(int *)(extraout_ECX + 0xa0) = (int)sVar1;
    if (*(int *)(extraout_ECX + 0x78) != 0) {
      FUN_0045e3a0();
    }
  }
  FUN_00613f35();
  sVar1 = FUN_00424561();
  *(int *)(extraout_ECX + 0x1a8) = (int)sVar1;
  sVar1 = FUN_00424561();
  *(int *)(extraout_ECX + 0x1ac) = (int)sVar1;
  *(undefined4 *)(extraout_ECX + 0x1a0) = *(undefined4 *)(extraout_ECX + 0x1a8);
  *(undefined4 *)(extraout_ECX + 0x1a4) = *(undefined4 *)(extraout_ECX + 0x1ac);
  uVar4 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xe0) = uVar4 & 0xff;
  FUN_00424561();
  FUN_004d19c1();
  piVar5 = (int *)FUN_00486ada();
  uVar4 = -(uint)(*piVar5 != 0) & *piVar5 - 0xcU;
  FUN_004125d9();
  uVar2 = FUN_007fdc6e();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  FUN_007fdcc3();
  iVar3 = **(int **)(extraout_ECX + 0x84);
  *(undefined4 *)(unaff_EBP + -0x14) = **(undefined4 **)(unaff_EBP + 8);
  (**(code **)(iVar3 + 8))();
  (**(code **)(*(int *)(unaff_EBP + -0x14) + 4))();
  *(undefined4 *)(extraout_ECX + 0xe0) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x140);
  iStack_5c = 0x613b5b;
  iVar3 = FUN_00618ea1();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_5c = 0x613b6e;
    FUN_00878dfb();
  }
  *(undefined4 *)(extraout_ECX + 200) = 0;
  iStack_5c = 0x613b81;
  FUN_00403191();
  iStack_5c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_60 = 0x613b93;
  FUN_004031b7();
  bVar7 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar7) {
    iStack_5c = 0x613ba9;
    FUN_00878dfb();
  }
  iStack_5c = unaff_EBP + -0x28;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  iStack_74 = unaff_EBP + -0x18;
  uStack_78 = 0x613bc5;
  puVar6 = (undefined4 *)FUN_0042a39f();
  iStack_5c = 0x613bd2;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x114),
             (IBinding *)*puVar6);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_5c = 0x613bdf;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_5c = 0x613bec;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_5c = 0x613bf7;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_5c = 0x613c04;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_5c = 0x613c0f;
    FUN_00878dfb();
  }
  FUN_0042452b();
  uVar2 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x180) = uVar2;
  FUN_0042452b();
  uVar2 = FUN_0055a766();
  *(undefined4 *)(extraout_ECX + 0x18c) = uVar2;
  iStack_5c = extraout_ECX + 0x178;
  uStack_60 = 0x613c5b;
  uVar2 = *(undefined4 *)(extraout_ECX + 0x180);
  iVar3 = FUN_004cd670();
  uStack_78 = uVar2;
  if (iVar3 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x10);
  }
  iStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  iStack_74 = 0x3eb;
  iStack_7c = unaff_EBP + 8;
  *(undefined4 **)(unaff_EBP + 0xc) = &uStack_78;
  FUN_00617e41();
  *(int **)(unaff_EBP + -0x14) = &iStack_7c;
  FUN_0041160e(extraout_ECX + 0x114);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = FUN_00449713();
  FUN_00560272(uVar2);
  iVar3 = FUN_0048bb31(uVar4 + 0x11c,*(undefined4 *)(uVar4 + 0x124));
  FUN_00615de7(iVar3 != 0,1);
  FUN_006142ef();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


