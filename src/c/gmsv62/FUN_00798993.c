/* FUN_00798993 - 0x00798993 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00799e12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00798993(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  double dVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  bool bVar11;
  int *piStack_204;
  undefined *puStack_200;
  int *piStack_1fc;
  int iStack_1f8;
  int *piStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined8 uStack_168;
  int *piStack_160;
  int *piStack_15c;
  int *piStack_158;
  int *piStack_154;
  
  FUN_00879bb8();
  iVar5 = *extraout_ECX;
  *(int **)(unaff_EBP + -0x30) = extraout_ECX;
  piStack_154 = (int *)0x7989ae;
  uVar4 = (**(code **)(iVar5 + 4))();
  *(undefined4 *)(unaff_EBP + -0x74) = uVar4;
  piStack_154 = (int *)&DAT_0097bf68;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x7989c5;
  FUN_006f5b1a();
  piStack_154 = (int *)0x7989cc;
  cVar3 = FUN_006f5bb6();
  if (cVar3 != '\0') {
    piStack_154 = *(int **)(*(int *)(unaff_EBP + -0x74) + 0x374);
    piStack_158 = (int *)(*(int *)(unaff_EBP + -0x74) + 0x36c);
    piStack_15c = (int *)0x7989ea;
    iVar5 = FUN_00413367();
    iVar5 = iVar5 + -1;
    *(int *)(unaff_EBP + -0x68) = iVar5;
    if ((*(int *)(unaff_EBP + 0x1c) != 0) && (iVar5 == -1)) goto LAB_00799ec8;
    piStack_154 = (int *)0x5;
    piStack_158 = (int *)0x798a0a;
    iVar6 = FUN_0079b949();
    iVar9 = *(int *)(iVar6 + 0x14);
    *(int *)(unaff_EBP + -0x14) = iVar6;
    if (iVar9 == 0) {
      *(int *)(unaff_EBP + -0x28) = iVar6;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      piStack_154 = (int *)0x3b1;
      piStack_158 = (int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_15c = (int *)0x798a34;
      puVar7 = (undefined4 *)FUN_00679d86();
      piStack_15c = (int *)*puVar7;
      piStack_154 = (int *)0x0;
      piStack_158 = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      piStack_160 = (int *)0x798a45;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piStack_154 = (int *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        piStack_158 = (int *)0x798a5b;
        FUN_00403384();
      }
      piStack_154 = (int *)0x3;
      piStack_158 = (int *)0xfffff830;
      piStack_15c = (int *)0x798a6b;
      FUN_004031b7();
      piVar8 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar8 == (int *)0x0) {
        piStack_154 = (int *)0x80004003;
        piStack_158 = (int *)0x798a80;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x1c);
      }
      iVar5 = *piVar8;
      piStack_160 = *(int **)(unaff_EBP + -100);
      piStack_15c = *(int **)(unaff_EBP + -0x60);
      piStack_158 = *(int **)(unaff_EBP + -0x5c);
      piStack_154 = *(int **)(unaff_EBP + -0x58);
      uStack_168 = 0;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0xa0))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00403384();
      }
      FUN_00486ada();
      FUN_0040ee87();
      piVar8 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x24);
      }
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004125d9();
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00403191();
      piVar8 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x24);
      }
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0x90))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      FUN_004031b7();
      piVar8 = *(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x24);
      }
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0xa0))();
      if (iVar5 < 0) {
        iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_1d8 = 0x798c7e;
        iStack_1d4 = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_1d0 = 0x798c8b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798c96;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1d0 = 0x798cab;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_1d0 = 0x798cb8;
      FUN_00403191();
      iStack_1d0 = 0;
      iStack_1d4 = unaff_EBP + -100;
      iStack_1d8 = unaff_EBP + -0x44;
      *(int ***)(unaff_EBP + -0x54) = &piStack_1dc;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_1d4 = 0x798d05;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      iStack_1d0 = 0x798d14;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_1d0 = 0x798d25;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_1d0 = 0x798d35;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798d40;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_1d0 = 0x798d4d;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798d58;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1d0 = 0x798d65;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798d70;
        FUN_00878dfb();
      }
      iStack_1d0 = 0x798d79;
      FUN_00403191();
      iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_1d4 = 0x798d86;
      FUN_0040ee87();
      bVar11 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (bVar11) {
        iStack_1d0 = 0x798d9c;
        FUN_00878dfb();
      }
      iStack_1d0 = unaff_EBP + -0x44;
      iStack_1d4 = 4;
      iStack_1d8 = 0;
      piStack_1dc = (int *)0x0;
      puVar7 = (undefined4 *)FUN_0042a39f();
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x14) + 0x14);
      iStack_1d0 = 0x798dc8;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar7);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_1d0 = 0x798ddd;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798de8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1d0 = 0x798df5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1d0 = 0x798e00;
        FUN_00878dfb();
      }
      iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_1d4 = 0x798e0d;
      FUN_0040ee87();
      iVar5 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (iVar5 == 0) {
        iStack_1d0 = 0x798e1f;
        FUN_00878dfb();
      }
      iStack_1d8 = *(undefined4 *)(unaff_EBP + -0x44);
      iStack_1d4 = *(int *)(unaff_EBP + -0x40);
      piStack_1dc = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x14);
      iVar5 = *piStack_1dc;
      iStack_1d0 = *(undefined4 *)(unaff_EBP + -0x3c);
      *(int **)(unaff_EBP + -0x10) = piStack_1dc;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      FUN_0043f93c();
      FUN_0040ee87();
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x14);
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      piVar8 = (int *)(**(code **)(iVar5 + 0xfc))();
      if ((int)piVar8 < 0) {
        iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x10);
        puStack_200 = (undefined *)0x798ecc;
        piStack_1fc = piVar8;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_1f8 = 0x798ed9;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x798ee4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00412600();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x18;
      iStack_1f8 = 0x798f02;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_1f8 = 0x798f0f;
      FUN_00403191();
      iStack_1f8 = 0;
      piStack_1fc = (int *)(unaff_EBP + -100);
      puStack_200 = (undefined *)(unaff_EBP + -0x44);
      *(int ***)(unaff_EBP + -0x54) = &piStack_204;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00679e4e(&piStack_204,0x968);
      iVar5 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00405a1d(iVar5);
      FUN_00402660();
      FUN_00404a02(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_1fc = (int *)0x798f5c;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      iStack_1f8 = 0x798f6b;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_1f8 = 0x798f7c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1f8 = 0x798f8c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x798f97;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_1f8 = 0x798fa4;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x798faf;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1f8 = 0x798fbc;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x798fc7;
        FUN_00878dfb();
      }
      iStack_1f8 = 0x798fd0;
      FUN_00403191();
      iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x20);
      piStack_1fc = (int *)0x798fdd;
      FUN_0040ee87();
      bVar11 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (bVar11) {
        iStack_1f8 = 0x798ff3;
        FUN_00878dfb();
      }
      iStack_1f8 = unaff_EBP + -0x44;
      piStack_1fc = (int *)0x4;
      puStack_200 = (undefined *)0x0;
      piStack_204 = (int *)0x0;
      puVar7 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x10,0,0);
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x14) + 0x14);
      iStack_1f8 = 0x79901f;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar7);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_1f8 = 0x799034;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x79903f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1f8 = 0x79904c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_1f8 = 0x799057;
        FUN_00878dfb();
      }
      iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x24);
      piStack_1fc = (int *)0x799064;
      FUN_0040ee87();
      iVar5 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (iVar5 == 0) {
        iStack_1f8 = 0x799076;
        FUN_00878dfb();
      }
      puStack_200 = *(undefined **)(unaff_EBP + -0x44);
      piStack_1fc = *(int **)(unaff_EBP + -0x40);
      piStack_204 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x14);
      iVar5 = *piStack_204;
      iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x3c);
      *(int **)(unaff_EBP + -0x10) = piStack_204;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      puVar7 = (undefined4 *)FUN_0043f93c(unaff_EBP + -0x18);
      FUN_0040ee87(*puVar7,1);
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x14);
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + -0x10) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0xfc))
                        (piVar8,*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38));
      if (iVar5 < 0) {
        piStack_154 = (int *)&DAT_00963df8;
        piStack_158 = *(int **)(unaff_EBP + -0x10);
        piStack_160 = (int *)0x799123;
        piStack_15c = (int *)iVar5;
        FUN_00878e09();
      }
      piStack_154 = (int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_158 = (int *)0x799130;
      piStack_154 = (int *)FUN_00402bc3();
      if ((int)piStack_154 < 0) {
        piStack_158 = (int *)0x79913b;
        FUN_00878dfb();
      }
      piStack_154 = (int *)0x799143;
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -0x2c) = 1;
      *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x14) + 0x2c;
      do {
        iVar5 = *(int *)(unaff_EBP + -0x2c) + 1;
        *(int *)(unaff_EBP + -0x54) = iVar5;
        *(int *)(unaff_EBP + -0x10) = iVar5 / 2;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        piStack_154 = (int *)0x3b1;
        piStack_158 = (int *)(unaff_EBP + -0xb0);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        piStack_15c = (int *)0x799188;
        puVar7 = (undefined4 *)FUN_00679d86();
        piStack_15c = (int *)*puVar7;
        piStack_154 = (int *)0x0;
        piStack_158 = (int *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        piStack_160 = (int *)0x799199;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        if (*(int *)(unaff_EBP + -0xb0) != 0) {
          piStack_154 = (int *)(*(int *)(unaff_EBP + -0xb0) + -0xc);
          piStack_158 = (int *)0x7991b3;
          FUN_00403384();
        }
        piStack_154 = (int *)0x3b1;
        piStack_158 = (int *)(unaff_EBP + -0xb4);
        piStack_15c = (int *)0x7991c3;
        puVar7 = (undefined4 *)FUN_00679d86();
        piStack_15c = (int *)*puVar7;
        piStack_154 = (int *)0x0;
        piStack_158 = (int *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        piStack_160 = (int *)0x7991d4;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        if (*(int *)(unaff_EBP + -0xb4) != 0) {
          piStack_154 = (int *)(*(int *)(unaff_EBP + -0xb4) + -0xc);
          piStack_158 = (int *)0x7991ee;
          FUN_00403384();
        }
        piStack_154 = (int *)0x1;
        piStack_158 = *(int **)(unaff_EBP + -0x1c);
        piStack_15c = (int *)0x7991fc;
        FUN_0040ee87();
        piVar8 = *(int **)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piVar8 == (int *)0x0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x799211;
          FUN_00878dfb();
          piVar8 = *(int **)(unaff_EBP + -0x4c);
        }
        iVar5 = *piVar8;
        piStack_160 = *(int **)(unaff_EBP + -0x44);
        piStack_15c = *(int **)(unaff_EBP + -0x40);
        piStack_158 = *(int **)(unaff_EBP + -0x3c);
        *(int **)(unaff_EBP + -0x18) = piVar8;
        piStack_154 = *(int **)(unaff_EBP + -0x38);
        uStack_168._0_4_ = (undefined1 *)0x799229;
        uStack_168._4_4_ = piVar8;
        iVar5 = (**(code **)(iVar5 + 100))();
        if (iVar5 < 0) {
          uStack_168._0_4_ = &DAT_00963de8;
          FUN_00878e09();
        }
        uStack_168._0_4_ = (undefined1 *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        uStack_168._0_4_ = (undefined1 *)FUN_00402bc3();
        if ((int)(undefined1 *)uStack_168 < 0) {
          FUN_00878dfb();
        }
        uStack_168._0_4_ = (undefined1 *)(unaff_EBP + -0xc0);
        FUN_00486ada();
        uStack_168._0_4_ = (undefined1 *)0x1;
        FUN_0040ee87();
        piVar8 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (piVar8 == (int *)0x0) {
          uStack_168._0_4_ = (undefined1 *)0x80004003;
          FUN_00878dfb();
          piVar8 = *(int **)(unaff_EBP + -0x14);
        }
        iVar5 = *piVar8;
        *(int **)(unaff_EBP + -0x18) = piVar8;
        uStack_168 = CONCAT44(uStack_168._4_4_,*(undefined4 *)(unaff_EBP + -0x144));
        iVar5 = (**(code **)(iVar5 + 100))();
        if (iVar5 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_004125d9();
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00403191();
        piVar8 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (piVar8 == (int *)0x0) {
          FUN_00878dfb();
          piVar8 = *(int **)(unaff_EBP + -0x14);
        }
        iVar5 = *piVar8;
        *(int **)(unaff_EBP + -0x18) = piVar8;
        iVar5 = (**(code **)(iVar5 + 0x90))();
        if (iVar5 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_00878dfb();
        }
        iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x98))();
        if (iVar5 < 0) {
          FUN_00878e09();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        if (*(int *)(unaff_EBP + -0x4c) == 0) {
          FUN_00878dfb();
        }
        piVar8 = *(int **)(unaff_EBP + -0x4c);
        dVar2 = (double)*(int *)(unaff_EBP + -0x2c) * _DAT_008f1890;
        *(int **)(unaff_EBP + -0x18) = piVar8;
        *(double *)(unaff_EBP + -0x5c) = dVar2;
        FUN_0087adc4();
        uVar4 = __ftol();
        *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
        FUN_0087ae74();
        __ftol();
        piStack_1dc = *(int **)(unaff_EBP + -0xd0);
        iStack_1d8 = *(undefined4 *)(unaff_EBP + -0xcc);
        iStack_1d4 = *(int *)(unaff_EBP + -200);
        iStack_1d0 = *(undefined4 *)(unaff_EBP + -0xc4);
        iVar5 = (**(code **)(*piVar8 + 0x90))();
        if (iVar5 < 0) {
          iStack_1f8 = 0x799473;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        if (*(int *)(unaff_EBP + -0x2c) < 6) {
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          iStack_1f8 = 0x7994df;
          FUN_0041354c();
          iVar5 = *(int *)(unaff_EBP + -0xbc);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
        }
        else {
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          iStack_1f8 = 0x799517;
          FUN_0041354c();
          iVar5 = *(int *)(unaff_EBP + -0x98);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
        }
        if (iVar5 != 0) {
          FUN_00403384();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        FUN_00403191();
        iStack_1f8 = unaff_EBP + -0x100;
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_1fc = (int *)0x79956f;
        puStack_200 = (undefined *)FUN_00411641();
        *(int ***)(unaff_EBP + -0x34) = &piStack_1fc;
        piStack_204 = (int *)0x79957b;
        FUN_004033a1();
        puStack_200 = (undefined *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_204 = (int *)0x79958b;
        FUN_00405a1d();
        piStack_204 = (int *)0x799592;
        FUN_00402660();
        piStack_204 = (int *)0x799599;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x9c) = iVar5;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        if (((iVar5 != 0) && (iVar5 = FUN_0041a581(), iVar5 < 0)) && (iVar5 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        FUN_004031b7();
        bVar11 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (bVar11) {
          FUN_00878dfb();
        }
        iStack_1f8 = 0;
        piStack_1fc = (int *)0x0;
        puStack_200 = (undefined *)0x0;
        piStack_204 = (int *)0x0;
        puVar7 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0xb8);
        p_Var1 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x50);
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar7);
        FUN_00412600();
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          FUN_00878dfb();
        }
        FUN_0040ee87();
        iVar5 = *(int *)p_Var1;
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        if (iVar5 == 0) {
          FUN_00878dfb();
        }
        piStack_1fc = (int *)**(undefined4 **)(unaff_EBP + -0x50);
        iVar5 = *piStack_1fc;
        iStack_1f8 = *(undefined4 *)(unaff_EBP + -0x94);
        *(int **)(unaff_EBP + -0x34) = piStack_1fc;
        puStack_200 = (undefined *)0x799708;
        iVar5 = (**(code **)(iVar5 + 100))();
        if (iVar5 < 0) {
          puStack_200 = &DAT_00963de8;
          piStack_204 = *(int **)(unaff_EBP + -0x34);
          FUN_00878e09(iVar5);
        }
        puStack_200 = (undefined *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_204 = (int *)0x79972a;
        puStack_200 = (undefined *)FUN_00402bc3();
        if ((int)puStack_200 < 0) {
          piStack_204 = (int *)0x799735;
          FUN_00878dfb();
        }
        puStack_200 = (undefined *)(unaff_EBP + -0x70);
        piStack_204 = (int *)0x799744;
        puVar7 = (undefined4 *)FUN_0043f93c();
        piStack_204 = (int *)*puVar7;
        puStack_200 = (undefined *)0x1;
        FUN_0040ee87();
        iVar5 = **(int **)(unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        if (iVar5 == 0) {
          puStack_200 = (undefined *)0x80004003;
          piStack_204 = (int *)0x799769;
          FUN_00878dfb();
        }
        piVar8 = (int *)**(undefined4 **)(unaff_EBP + -0x50);
        iVar5 = *piVar8;
        piStack_204 = *(int **)(unaff_EBP + -0x7c);
        *(int **)(unaff_EBP + -0x34) = piVar8;
        puStack_200 = *(undefined **)(unaff_EBP + -0x78);
        iVar5 = (**(code **)(iVar5 + 0xfc))
                          (piVar8,*(undefined4 *)(unaff_EBP + -0x84),
                           *(undefined4 *)(unaff_EBP + -0x80));
        if (iVar5 < 0) {
          piStack_154 = (int *)&DAT_00963df8;
          piStack_158 = *(int **)(unaff_EBP + -0x34);
          piStack_160 = (int *)0x79979b;
          piStack_15c = (int *)iVar5;
          FUN_00878e09();
        }
        piStack_154 = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x36;
        piStack_158 = (int *)0x7997ab;
        piStack_154 = (int *)FUN_00402bc3();
        if ((int)piStack_154 < 0) {
          piStack_158 = (int *)0x7997b6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        piStack_154 = (int *)0x7997c2;
        FUN_00412600();
        piStack_154 = *(int **)(unaff_EBP + -0x48);
        *(int ***)(unaff_EBP + -0x34) = &piStack_154;
        piStack_158 = (int *)0x7997d2;
        FUN_004125f3();
        *(int ***)(unaff_EBP + -0x34) = &piStack_158;
        piStack_15c = *(int **)(unaff_EBP + -0x50);
        piStack_160 = (int *)0x7997e0;
        piStack_158 = extraout_ECX_00;
        FUN_0041160e();
        piStack_15c = (int *)0x7997e5;
        FUN_0042ea7d();
        piStack_154 = (int *)0x7997ef;
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        if (*(int *)(unaff_EBP + -0x6c) != 0) {
          piStack_154 = (int *)(*(int *)(unaff_EBP + -0x6c) + -0xc);
          piStack_158 = (int *)0x799803;
          FUN_00403384();
        }
        piStack_154 = (int *)0x79980c;
        FUN_004125d9();
        piStack_154 = (int *)0x799814;
        FUN_004125d9();
        *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x50) + 0x18;
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x54);
      } while (*(int *)(unaff_EBP + -0x54) < 0xb);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
      piStack_154 = (int *)0x799835;
      FUN_004125e6();
      piStack_154 = (int *)0x79983d;
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_154 = (int *)0x799849;
      FUN_004125d9();
      iVar6 = *(int *)(unaff_EBP + -0x14);
      iVar5 = *(int *)(unaff_EBP + -0x68);
    }
    if ((*(int *)(unaff_EBP + 0x1c) == 0) && (iVar5 == 0)) {
      if (*(int *)(iVar6 + 0x14) == 0) {
        piStack_154 = (int *)0x80004003;
        piStack_158 = (int *)0x799871;
        FUN_00878dfb();
      }
      piStack_154 = (int *)0x799878;
      uVar4 = FUN_0042a378();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(int **)(unaff_EBP + -0x48) = (int *)(iVar6 + 0x14);
      do {
        piStack_154 = &DAT_00980690;
        piStack_158 = (int *)0x799891;
        FUN_00403191();
        piStack_154 = (int *)0x3;
        *(undefined4 *)(unaff_EBP + -4) = 0x38;
        piStack_158 = (int *)((*(int *)(unaff_EBP + -0x2c) % 6) * 0x3c + 200 +
                             *(int *)(unaff_EBP + -0x28));
        piStack_15c = (int *)0x7998bc;
        FUN_004031b7();
        iVar5 = **(int **)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        if (iVar5 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x7998d1;
          FUN_00878dfb();
        }
        piStack_154 = (int *)(unaff_EBP + -0x70);
        piStack_158 = (int *)0x7998dc;
        piVar8 = (int *)FUN_004113e5();
        iVar5 = *piVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        if (iVar5 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x7998f0;
          FUN_00878dfb();
        }
        piStack_160 = *(int **)(unaff_EBP + -0x94);
        piStack_15c = *(int **)(unaff_EBP + -0x90);
        iVar5 = *(int *)*piVar8;
        piStack_158 = *(int **)(unaff_EBP + -0x8c);
        piStack_154 = *(int **)(unaff_EBP + -0x88);
        *(int **)(unaff_EBP + -0x54) = (int *)*piVar8;
        uStack_168 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x7c))
        ;
        iVar5 = (**(code **)(iVar5 + 0x90))();
        if (iVar5 < 0) {
          piStack_154 = (int *)&DAT_00963de8;
          piStack_158 = *(int **)(unaff_EBP + -0x54);
          piStack_160 = (int *)0x799930;
          piStack_15c = (int *)iVar5;
          FUN_00878e09();
        }
        piStack_154 = (int *)0x799938;
        FUN_004125d9();
        piStack_154 = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        piStack_158 = (int *)0x799948;
        piStack_154 = (int *)FUN_00402bc3();
        if ((int)piStack_154 < 0) {
          piStack_158 = (int *)0x799953;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_154 = (int *)(unaff_EBP + -0x94);
        piStack_158 = (int *)0x799963;
        piStack_154 = (int *)FUN_00402bc3();
        if ((int)piStack_154 < 0) {
          piStack_158 = (int *)0x79996e;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
        *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + 0x18;
      } while (*(int *)(unaff_EBP + -0x2c) < 0xc);
      goto LAB_00799bbe;
    }
    if (iVar5 < 1) {
      if (*(int *)(iVar6 + 0x14) == 0) {
        piStack_154 = (int *)0x80004003;
        piStack_158 = (int *)0x799997;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(iVar6 + 0x14);
      iVar5 = *piVar8;
      piStack_154 = (int *)0xffffff;
LAB_007999be:
      piStack_15c = (int *)0x7999c5;
      piStack_158 = piVar8;
      iVar5 = (**(code **)(iVar5 + 0xe0))();
      if (iVar5 < 0) {
        piStack_15c = (int *)&DAT_00963df8;
        uStack_168 = CONCAT44(iVar5,0x7999d5);
        piStack_160 = piVar8;
        FUN_00878e09();
      }
      if (*(int *)(iVar6 + 0x2c) == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x7999e7;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(iVar6 + 0x2c);
      iVar5 = *piVar8;
      piStack_15c = (int *)0xffffff;
    }
    else {
      if (iVar5 < 6) {
        if (*(int *)(iVar6 + 0x14) == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x7999b7;
          FUN_00878dfb();
        }
        piVar8 = *(int **)(iVar6 + 0x14);
        iVar5 = *piVar8;
        piStack_154 = (int *)0xffffffff;
        goto LAB_007999be;
      }
      if (*(int *)(iVar6 + 0x14) == 0) {
        piStack_154 = (int *)0x80004003;
        piStack_158 = (int *)0x799a02;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(iVar6 + 0x14);
      piStack_154 = (int *)0xffffff;
      piStack_15c = (int *)0x799a13;
      piStack_158 = piVar8;
      iVar5 = (**(code **)(*piVar8 + 0xe0))();
      if (iVar5 < 0) {
        piStack_15c = (int *)&DAT_00963df8;
        uStack_168 = CONCAT44(iVar5,0x799a23);
        piStack_160 = piVar8;
        FUN_00878e09();
      }
      if (*(int *)(iVar6 + 0x2c) == 0) {
        piStack_15c = (int *)0x80004003;
        piStack_160 = (int *)0x799a35;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(iVar6 + 0x2c);
      iVar5 = *piVar8;
      piStack_15c = (int *)0xffffffff;
    }
    uStack_168 = CONCAT44(0x799a43,(undefined1 *)uStack_168);
    piStack_160 = piVar8;
    iVar5 = (**(code **)(iVar5 + 0xe0))();
    if (iVar5 < 0) {
      piStack_154 = (int *)&DAT_00963df8;
      piStack_160 = (int *)0x799a53;
      piStack_15c = (int *)iVar5;
      piStack_158 = piVar8;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 1;
    *(int *)(unaff_EBP + -0x1c) = iVar6 + 0x44;
    do {
      if ((*(int *)(unaff_EBP + -0x68) == *(int *)(unaff_EBP + -0x20)) &&
         (*(int *)(unaff_EBP + 0x1c) == 0)) {
        piStack_154 = &DAT_00980690;
        piStack_158 = (int *)0x799a89;
        FUN_00403191();
        piStack_154 = &DAT_00980690;
        *(undefined4 *)(unaff_EBP + -4) = 0x3b;
        piStack_158 = (int *)0x799a9c;
        FUN_00403191();
        iVar5 = **(int **)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (iVar5 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x799ab1;
          FUN_00878dfb();
        }
        piStack_160 = *(int **)(unaff_EBP + -0x94);
        piStack_15c = *(int **)(unaff_EBP + -0x90);
        iVar5 = *(int *)**(undefined4 **)(unaff_EBP + -0x1c);
        piStack_158 = *(int **)(unaff_EBP + -0x8c);
        piStack_154 = *(int **)(unaff_EBP + -0x88);
        *(int **)(unaff_EBP + -0x28) = (int *)**(undefined4 **)(unaff_EBP + -0x1c);
        uStack_168 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x7c))
        ;
        iVar5 = (**(code **)(iVar5 + 0x110))();
        if (iVar5 < 0) {
          piStack_154 = (int *)&DAT_00963df8;
          piStack_158 = *(int **)(unaff_EBP + -0x28);
          piStack_160 = (int *)0x799af3;
          piStack_15c = (int *)iVar5;
          FUN_00878e09();
        }
        piStack_154 = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        piStack_158 = (int *)0x799b03;
        piStack_154 = (int *)FUN_00402bc3();
        if ((int)piStack_154 < 0) {
          piStack_158 = (int *)0x799b0e;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piStack_154 = (int *)(unaff_EBP + -0x94);
        piStack_158 = (int *)0x799b1e;
        piStack_154 = (int *)FUN_00402bc3();
        if ((int)piStack_154 < 0) {
          piStack_158 = (int *)0x799b29;
          FUN_00878dfb();
        }
      }
      if ((*(int *)(unaff_EBP + -0x68) < *(int *)(unaff_EBP + -0x20) + 5) &&
         (*(int *)(unaff_EBP + -0x20) <= *(int *)(unaff_EBP + -0x68))) {
        piVar8 = *(int **)(unaff_EBP + -0x1c);
        if (*piVar8 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x799b4a;
          FUN_00878dfb();
        }
        piVar10 = (int *)*piVar8;
        iVar5 = *piVar10;
        piStack_154 = (int *)0xffffffff;
LAB_00799b94:
        piStack_15c = (int *)0x799b9b;
        piStack_158 = piVar10;
        iVar5 = (**(code **)(iVar5 + 0xe0))();
        if (iVar5 < 0) {
          piStack_154 = (int *)&DAT_00963df8;
          piStack_160 = (int *)0x799bab;
          piStack_15c = (int *)iVar5;
          piStack_158 = piVar10;
          FUN_00878e09();
        }
      }
      else {
        piVar8 = *(int **)(unaff_EBP + -0x1c);
        if (*piVar8 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x799b63;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x799b6a;
        iVar5 = FUN_00432a57();
        if (iVar5 == 0) {
          if (*piVar8 == 0) {
            piStack_154 = (int *)0x80004003;
            piStack_158 = (int *)0x799b8b;
            FUN_00878dfb();
          }
          piVar10 = (int *)*piVar8;
          iVar5 = *piVar10;
          piStack_154 = (int *)0xffffff;
          goto LAB_00799b94;
        }
        *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x17a4) = 1;
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      *(int **)(unaff_EBP + -0x1c) = piVar8 + 6;
    } while (*(int *)(unaff_EBP + -0x20) < 0xb);
  }
LAB_00799bbe:
  piStack_154 = (int *)&DAT_0097bf38;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x799bd2;
  FUN_006f5b1a();
  piStack_154 = (int *)0x799bd9;
  cVar3 = FUN_006f5bb6();
  iVar5 = *(int *)(unaff_EBP + -0x30);
  if (cVar3 != '\0') {
    piStack_154 = (int *)0x0;
    piStack_158 = (int *)0x799beb;
    iVar9 = FUN_0043f90a();
    if (((-1 < iVar9) && (iVar9 < 2)) || (iVar9 == 99)) {
      piStack_154 = (int *)0x0;
      piStack_158 = (int *)0x64;
      piStack_15c = (int *)0x6;
      piStack_160 = (int *)0x799c05;
      (**(code **)(*(int *)(iVar5 + 0x78) + 0x10))();
    }
  }
  piStack_154 = (int *)&DAT_0097bf28;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x799c19;
  FUN_006f5b1a();
  piStack_154 = (int *)0x799c20;
  cVar3 = FUN_006f5bb6();
  if (cVar3 != '\0') {
    piStack_154 = (int *)0x0;
    piStack_158 = (int *)0x64;
    piStack_15c = (int *)0x6;
    piStack_160 = (int *)0x799c32;
    (**(code **)(*(int *)(iVar5 + 0x78) + 0x10))();
  }
  piStack_154 = (int *)&DAT_0097bf18;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x799c46;
  FUN_006f5b1a();
  piStack_154 = (int *)0x799c4d;
  cVar3 = FUN_006f5bb6();
  iVar9 = *(int *)(unaff_EBP + -0x74);
  if (cVar3 != '\0') {
    piStack_154 = *(int **)(iVar9 + 0x530);
    piStack_158 = (int *)(iVar9 + 0x528);
    piStack_15c = (int *)0x799c66;
    piStack_158 = (int *)FUN_00413367();
    piStack_154 = (int *)0x0;
    piStack_15c = (int *)0x799c71;
    FUN_0079c757();
  }
  piStack_154 = (int *)&DAT_0097bf08;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x799c85;
  FUN_006f5b1a();
  piStack_154 = (int *)0x799c8c;
  cVar3 = FUN_006f5bb6();
  if (cVar3 != '\0') {
    piStack_154 = *(int **)(iVar9 + 0x554);
    piStack_158 = (int *)(iVar9 + 0x54c);
    piStack_15c = (int *)0x799ca2;
    piStack_158 = (int *)FUN_00413367();
    piStack_154 = (int *)0x0;
    piStack_15c = (int *)0x799cad;
    FUN_0079c68e();
  }
  piStack_154 = (int *)&DAT_0097bf58;
  piStack_158 = (int *)(unaff_EBP + -0xac);
  piStack_15c = (int *)0x799cc1;
  FUN_006f5b1a();
  piStack_154 = (int *)0x799cc8;
  cVar3 = FUN_006f5bb6();
  if (cVar3 != '\0') {
    piStack_154 = (int *)0x4df8f1;
    piStack_158 = (int *)0x799ce0;
    uVar4 = FUN_0064d61f();
    piStack_154 = (int *)0xe;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    piStack_158 = (int *)0x799cec;
    uVar4 = FUN_0079b949();
    piVar8 = *(int **)(iVar9 + 0x958);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    piStack_154 = (int *)0x799cfc;
    cVar3 = (**(code **)(*piVar8 + 4))();
    if (cVar3 == '\0') {
      if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) != 0) {
        piStack_154 = (int *)(unaff_EBP + -0x28);
        piStack_158 = (int *)0x799e28;
        piVar8 = (int *)FUN_004113e5();
        iVar5 = *piVar8;
        *(undefined4 *)(unaff_EBP + -4) = 0x43;
        if (iVar5 == 0) {
          piStack_154 = (int *)0x80004003;
          piStack_158 = (int *)0x799e3f;
          FUN_00878dfb();
        }
        piStack_154 = (int *)0x799e46;
        iVar5 = FUN_00404a94();
        piStack_154 = *(int **)(unaff_EBP + -0x28);
        *(bool *)(unaff_EBP + 0x1f) = iVar5 != 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piStack_154 != (int *)0x0) {
          piStack_158 = (int *)0x799e5d;
          (**(code **)(*piStack_154 + 8))();
        }
        if (*(char *)(unaff_EBP + 0x1f) != '\0') {
          if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x14) == 0) {
            piStack_154 = (int *)0x80004003;
            piStack_158 = (int *)0x799e74;
            FUN_00878dfb();
          }
          piStack_154 = (int *)(unaff_EBP + 0x1c);
          piStack_158 = (int *)0x799e80;
          piVar8 = (int *)FUN_004113e5();
          iVar5 = *piVar8;
          *(undefined4 *)(unaff_EBP + -4) = 0x44;
          if (iVar5 == 0) {
            piStack_154 = (int *)0x80004003;
            piStack_158 = (int *)0x799e97;
            FUN_00878dfb();
          }
          piVar8 = (int *)*piVar8;
          piStack_154 = (int *)0x0;
          piStack_158 = (int *)0x0;
          piStack_160 = (int *)0x799ea1;
          piStack_15c = piVar8;
          piVar10 = (int *)(**(code **)(*piVar8 + 0x40))();
          if ((int)piVar10 < 0) {
            piStack_154 = (int *)&DAT_00963d08;
            piStack_160 = (int *)0x799eb1;
            piStack_15c = piVar10;
            piStack_158 = piVar8;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_154 = (int *)0x799ebd;
          FUN_004125d9();
        }
      }
    }
    else {
      iVar9 = *(int *)(unaff_EBP + 0x1c);
      *(undefined4 *)(iVar5 + 0x1e48) = 0;
      if (iVar9 == 0) {
        piStack_154 = (int *)(unaff_EBP + -0x18);
        piStack_158 = (int *)0x799d1f;
        FUN_00790038();
        piStack_154 = (int *)&DAT_0096bf00;
        *(undefined4 *)(unaff_EBP + -4) = 0x3d;
        piStack_158 = (int *)0x799d33;
        FUN_00432cfc();
        piStack_154 = (int *)0x3;
        piStack_158 = (int *)0x7fffffff;
        piStack_15c = (int *)0x3e8;
        *(int ***)(unaff_EBP + -0x28) = &piStack_160;
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        uStack_168 = CONCAT44(&piStack_160,0x799d52);
        piStack_160 = extraout_ECX_01;
        FUN_0043f93c();
        uStack_168._0_4_ = (undefined1 *)((int)&uStack_168 + 4);
        *(int *)(unaff_EBP + -0x54) = (int)&uStack_168 + 4;
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        uStack_168._4_4_ = (int *)extraout_ECX_02;
        FUN_00486ada();
        uStack_168._0_4_ = (undefined1 *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        FUN_00432f57();
        *(undefined1 *)(unaff_EBP + -4) = 0x42;
        uStack_168._0_4_ = (undefined1 *)0x799d89;
        FUN_00424e27();
        uStack_168._0_4_ = (undefined1 *)0x799d90;
        uVar4 = FUN_0043210d();
        uStack_168 = CONCAT44(uStack_168._4_4_,uVar4);
        FUN_004091f9();
        FUN_00424e82();
        FUN_0042d941();
        if (*(int *)(unaff_EBP + 0x1c) != 0) {
          piStack_154 = (int *)0x799db1;
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_154 = (int *)0x799dc4;
          FUN_004030b1();
        }
        piStack_154 = (int *)0x1e;
        piStack_158 = (int *)0x4df8f1;
        piStack_15c = (int *)0x799dd0;
        FUN_007d3e08();
        piStack_154 = (int *)0x799dd7;
        iVar9 = FUN_007d1e08();
        *(int *)(iVar5 + 0x1e48) = iVar9;
        if (iVar9 == 0) {
          *(undefined4 *)(iVar5 + 0x1e48) = 1;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_154 = (int *)0x799dff;
          FUN_004030b1();
        }
      }
    }
  }
  piStack_154 = (int *)0x0;
  piStack_158 = *(int **)(unaff_EBP + 0x18);
  piStack_15c = (int *)0x799ec8;
  FUN_00799ed9();
LAB_00799ec8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


