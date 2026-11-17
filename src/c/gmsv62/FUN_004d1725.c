/* FUN_004d1725 - 0x004d1725 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d1725(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar6;
  int iStack_9c;
  int aiStack_98 [7];
  int *piStack_7c;
  undefined *puStack_78;
  int *piStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  sVar2 = FUN_00424561();
  *(int *)(extraout_ECX + 0xb0) = (int)sVar2;
  sVar2 = FUN_00424561();
  *(int *)(extraout_ECX + 0xb4) = (int)sVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978138;
  FUN_00424561();
  uVar3 = FUN_004d19c1();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_007f10ea();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar4 = FUN_004d31ad();
  if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  FUN_007f113f();
  (**(code **)(**(int **)(unaff_EBP + 8) + 4))();
  iStack_60 = 0x4d17ef;
  FUN_00403191();
  iStack_60 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_64 = 0x4d17fe;
  FUN_004031b7();
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar6) {
    iStack_60 = 0x4d1814;
    FUN_00878dfb();
  }
  iStack_60 = unaff_EBP + -0x2c;
  uStack_64 = 0;
  uStack_68 = 0;
  piStack_6c = (int *)0x0;
  puStack_70 = (undefined *)0x0;
  piStack_74 = (int *)0x0;
  puStack_78 = (undefined *)(unaff_EBP + -0x14);
  piStack_7c = (int *)0x4d1830;
  puVar5 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x8c);
  iStack_60 = 0x4d183f;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_60 = 0x4d1854;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_60 = 0x4d185f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x4d186c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_60 = 0x4d1877;
    FUN_00878dfb();
  }
  iStack_60 = *(undefined4 *)(extraout_ECX + 0x90);
  uStack_64 = 0x4d1888;
  FUN_0040ee87();
  iVar4 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar4 == 0) {
    iStack_60 = 0x4d189a;
    FUN_00878dfb();
  }
  piStack_6c = *(int **)this;
  iVar4 = *piStack_6c;
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piStack_6c;
  puStack_70 = (undefined *)0x4d18b1;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    puStack_70 = &DAT_00963de8;
    piStack_74 = *(int **)(unaff_EBP + -0x14);
    piStack_7c = (int *)0x4d18c5;
    puStack_78 = (undefined *)iVar4;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_70 = (undefined *)(unaff_EBP + -0x3c);
  piStack_74 = (int *)0x4d18d2;
  puStack_70 = (undefined *)FUN_00402bc3();
  if ((int)puStack_70 < 0) {
    piStack_74 = (int *)0x4d18dd;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x8c) == 0) {
    puStack_70 = (undefined *)0x80004003;
    piStack_74 = (int *)0x4d18f5;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(extraout_ECX + 0x8c);
  puStack_70 = (undefined *)0xffffffff;
  puStack_78 = (undefined *)0x4d1902;
  piStack_74 = piVar1;
  iVar4 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar4 < 0) {
    puStack_78 = &DAT_00963df8;
    aiStack_98[5] = 0x4d1912;
    aiStack_98[6] = iVar4;
    piStack_7c = piVar1;
    FUN_00878e09();
  }
  puStack_78 = (undefined *)0x4d1919;
  FUN_004d1daf();
  puStack_78 = (undefined *)0x4d1920;
  FUN_004d1b24();
  puStack_78 = (undefined *)0xd3e;
  piStack_7c = (int *)(unaff_EBP + -0x18);
  aiStack_98[6] = 0x4d1933;
  puVar5 = (undefined4 *)FUN_00679d22();
  puStack_78 = *(undefined **)(unaff_EBP + -0x10);
  piStack_7c = (int *)*puVar5;
  aiStack_98[6] = extraout_ECX + 0x88;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  aiStack_98[5] = 0x4d1949;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  aiStack_98[0] = extraout_ECX_00;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_78 = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    piStack_7c = (int *)0x4d1960;
    FUN_00434e38();
    aiStack_98[0] = (int)puStack_78;
  }
  puStack_78 = (undefined *)0x0;
  piStack_7c = (int *)0x0;
  aiStack_98[6] = 0;
  aiStack_98[5] = 0;
  aiStack_98[4] = 0;
  aiStack_98[3] = 0;
  aiStack_98[2] = 0;
  aiStack_98[1] = 1000;
  iStack_9c = extraout_ECX + 0x90;
  *(int **)(unaff_EBP + -0x14) = aiStack_98;
  FUN_00433bdf();
  *(int **)(unaff_EBP + -0x1c) = &iStack_9c;
  FUN_0041160e(extraout_ECX + 0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_00449713();
  FUN_00560272(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


