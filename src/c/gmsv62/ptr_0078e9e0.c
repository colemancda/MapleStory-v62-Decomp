/* ptr_0078e9e0 - 0x0078e9e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0078eaf9) */

void ptr_0078e9e0(void)

{
  IBinding *pIVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var10;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar11;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  int *piStack_10;
  int *piStack_c;
  code *pcStack_8;
  
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  pcStack_8 = (code *)0x78e9ea;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_8 = (code *)0x78e9f5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402fa6();
  unaff_EBX[0x792] = 0;
  pcStack_8 = (code *)0x78eab9;
  uVar4 = FUN_0079b949();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  pcStack_8 = (code *)0x78eac7;
  piVar5 = (int *)FUN_00486ada();
  uVar11 = -(uint)(*piVar5 != 0) & *piVar5 - 0xcU;
  FUN_004125d9();
  iVar3 = FUN_0078ffdf();
  if (iVar3 == 0) {
    if (((*(int *)(uVar11 + 0x16c) == 0) && (*(int *)(uVar11 + 0x170) != 0)) &&
       (*(int *)((-(uint)(unaff_EBX[0x35d] != 0) & unaff_EBX[0x35d] - 0xcU) + 0x110) != 0)) {
      pcStack_8 = (code *)0x78ed51;
      FUN_0064d61f();
      pcStack_8 = (code *)0xff;
      piStack_c = (int *)0x3;
      piStack_14 = (int *)&piStack_10;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_10;
      piStack_18 = (int *)0x78ed6a;
      FUN_0043f93c();
      piStack_14 = (int *)0x0;
      piStack_18 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x20) = &piStack_1c;
      *(undefined4 *)(unaff_EBP + -4) = 0x2a;
      FUN_00486ada(&piStack_1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_0079005e(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      FUN_00424e27();
      uVar4 = FUN_0043210d();
      uVar4 = FUN_004091f9(uVar4);
      puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x28,uVar4);
      pIVar1 = (IBinding *)*puVar6;
      p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                (*(int *)(unaff_EBP + -0x18) + 0x14);
      *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = p_Var10;
      pcStack_8 = (code *)0x78edcd;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,pIVar1);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
      pcStack_8 = (code *)0x78edef;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x2e;
      pcStack_8 = (code *)0x78edff;
      FUN_00403191();
      iVar3 = **(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (iVar3 == 0) {
        pcStack_8 = (code *)0x78ee14;
        FUN_00878dfb();
      }
      piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
      piStack_10 = *(int **)(unaff_EBP + -0x54);
      piStack_c = *(int **)(unaff_EBP + -0x50);
      iVar3 = *piVar5;
      pcStack_8 = *(code **)(unaff_EBP + -0x4c);
      piStack_1c = *(int **)(unaff_EBP + -0x60);
      piStack_18 = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x28) = piVar5;
      piStack_14 = *(int **)(unaff_EBP + -0x58);
      iVar3 = (**(code **)(iVar3 + 0x110))(piVar5,0,*(undefined4 *)(unaff_EBP + -100));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      iVar3 = FUN_00402bc3(unaff_EBP + -100);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (**(int **)(unaff_EBP + -0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x28);
      iVar3 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x30;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar5 = (int *)*piVar5;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x40))(piVar5,0xfe,0);
      if ((int)piVar7 < 0) {
        piStack_10 = (int *)0x78eed4;
        piStack_c = piVar7;
        pcStack_8 = (code *)piVar5;
        FUN_00878e09();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
    }
    else {
      piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
      pcStack_8 = (code *)0x78eef5;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        if (*piVar5 == 0) {
          pcStack_8 = (code *)0x78ef0b;
          FUN_00878dfb();
        }
        pcStack_8 = (code *)0x78ef16;
        piVar7 = (int *)FUN_004113e5();
        *(int **)(unaff_EBP + -0x28) = piVar7;
        iVar3 = *piVar7;
        *(undefined4 *)(unaff_EBP + -4) = 0x31;
        if (iVar3 == 0) {
          pcStack_8 = (code *)0x78ef2e;
          FUN_00878dfb();
        }
        iVar3 = FUN_00404a94();
        *(bool *)(unaff_EBP + -0xd) = iVar3 == 0xff;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
        if (*(char *)(unaff_EBP + -0xd) != '\0') {
          if (*piVar5 == 0) {
            pcStack_8 = (code *)0x78ef61;
            FUN_00878dfb();
          }
          pcStack_8 = (code *)0x78ef6c;
          piVar5 = (int *)FUN_004113e5();
          iVar3 = *piVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0x32;
          if (iVar3 == 0) {
            pcStack_8 = (code *)0x78ef83;
            FUN_00878dfb();
          }
          piVar5 = (int *)*piVar5;
          pcStack_8 = (code *)0x0;
          piStack_10 = (int *)0x78ef8d;
          piStack_c = piVar5;
          piVar7 = (int *)(**(code **)(*piVar5 + 0x40))();
          if ((int)piVar7 < 0) {
            piStack_10 = (int *)0x78ef9d;
            piStack_c = piVar7;
            pcStack_8 = (code *)piVar5;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004125d9();
        }
      }
    }
    if (unaff_EBX[0x793] != 0) {
      pcStack_8 = (code *)0x78efbf;
      FUN_007d4061();
      unaff_EBX[0x793] = 0;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
              (*(int *)(unaff_EBP + -0x18) + 0x14);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = p_Var10;
    if (iVar3 == 0) {
LAB_0078eb4f:
      pcStack_8 = (code *)0x78eb5f;
      uVar4 = FUN_0064d61f();
      pcStack_8 = (code *)0xff;
      piStack_c = (int *)0x3;
      piStack_14 = (int *)&piStack_10;
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_10;
      piStack_18 = (int *)0x78eb79;
      FUN_0043f93c();
      piStack_14 = (int *)0x0;
      piStack_18 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x1c) = &piStack_1c;
      *(undefined4 *)(unaff_EBP + -4) = 0x24;
      FUN_00486ada(&piStack_1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uVar4 = FUN_0040f150(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      FUN_00424e27();
      uVar4 = FUN_0043210d();
      uVar4 = FUN_004091f9(uVar4);
      puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x24,uVar4);
      pcStack_8 = (code *)0x78ebd8;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,(IBinding *)*puVar6);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402fa6();
      pcStack_8 = (code *)0x78ebf9;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0x28;
      pcStack_8 = (code *)0x78ec0d;
      FUN_00403191();
      iVar3 = *(int *)p_Var10;
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (iVar3 == 0) {
        pcStack_8 = (code *)0x78ec1f;
        FUN_00878dfb();
      }
      piVar5 = (int *)**(undefined4 **)(unaff_EBP + -0x18);
      piStack_10 = *(int **)(unaff_EBP + -0x54);
      piStack_c = *(int **)(unaff_EBP + -0x50);
      iVar3 = *piVar5;
      pcStack_8 = *(code **)(unaff_EBP + -0x4c);
      piStack_1c = *(int **)(unaff_EBP + -0x60);
      piStack_18 = *(int **)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x28) = piVar5;
      piStack_14 = *(int **)(unaff_EBP + -0x58);
      piVar5 = (int *)(**(code **)(iVar3 + 0x110))(piVar5,0x20,*(undefined4 *)(unaff_EBP + -100));
      if ((int)piVar5 < 0) {
        pcStack_8 = *(code **)(unaff_EBP + -0x28);
        piStack_10 = (int *)0x78ec5c;
        piStack_c = piVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      pcStack_8 = (code *)0x78ec69;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        pcStack_8 = (code *)0x78ec74;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      pcStack_8 = (code *)0x78ec81;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        pcStack_8 = (code *)0x78ec8c;
        FUN_00878dfb();
      }
      if (unaff_EBX[0x793] != 0) {
        pcStack_8 = (code *)0x78ec9c;
        FUN_007d4061();
      }
      pcStack_8 = ptr_004f5c6d;
      piStack_c = (int *)0x78eca9;
      iVar3 = FUN_007d3e08();
      p_Var10 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18);
      unaff_EBX[0x793] = iVar3;
    }
    else {
      pcStack_8 = (code *)0x78eb0e;
      piVar5 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x28) = piVar5;
      iVar3 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0x23;
      if (iVar3 == 0) {
        pcStack_8 = (code *)0x78eb26;
        FUN_00878dfb();
      }
      iVar3 = FUN_00404a94();
      *(bool *)(unaff_EBP + -0xd) = iVar3 != 0xff;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      if (*(char *)(unaff_EBP + -0xd) != '\0') goto LAB_0078eb4f;
    }
    if (unaff_EBX[0x34f] == 0) {
      pcStack_8 = (code *)0x78ecc8;
      FUN_00878dfb();
    }
    iVar3 = *(int *)p_Var10;
    *(int *)(unaff_EBP + -0x28) = unaff_EBX[0x34f];
    if (iVar3 == 0) {
      pcStack_8 = (code *)0x78ecdf;
      FUN_00878dfb();
    }
    piVar5 = *(int **)p_Var10;
    FUN_0043210d();
    piStack_c = (int *)0x78ecf3;
    pcStack_8 = (code *)piVar5;
    piVar7 = (int *)(**(code **)(*piVar5 + 0xd8))();
    if ((int)piVar7 < 0) {
      piStack_10 = (int *)0x78ed07;
      piStack_c = piVar7;
      pcStack_8 = (code *)piVar5;
      FUN_00878e09();
    }
  }
  FUN_0043fd71();
  iVar3 = 0;
  do {
    puVar6 = *(undefined4 **)(iVar3 + 4 + unaff_EBX[0x5d1]);
    if (puVar6 == (undefined4 *)0x0) break;
    (**(code **)*puVar6)();
    iVar3 = iVar3 + 8;
  } while (iVar3 < 0x18);
  uVar11 = unaff_EBX[0x5f3];
  while (uVar11 != 0) {
    *(uint *)(unaff_EBP + -0x28) = uVar11;
    iVar3 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(uVar11 + 4);
    FUN_0079d8f3();
    *(undefined4 *)(unaff_EBP + -4) = 0x33;
    if ((*(int *)(unaff_EBP + -0x2c) != 0) && (iVar8 = FUN_0051d663(), iVar8 != 0)) {
      FUN_0079d910();
      pcStack_8 = (code *)0x78f04b;
      FUN_0079de92();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0079d910();
    uVar11 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
  }
  pcStack_8 = (code *)0x0;
  piStack_c = (int *)0x78f064;
  FUN_004031b7();
  iVar3 = unaff_EBX[0x5fc];
  *(undefined4 *)(unaff_EBP + -4) = 0x34;
  if (iVar3 == 0) {
    pcStack_8 = (code *)0x78f07d;
    FUN_00878dfb();
  }
  pcStack_8 = (code *)(unaff_EBP + -0x28);
  piStack_c = (int *)0x78f090;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  pcStack_8 = (code *)0x78f09c;
  cVar2 = FUN_004115ef();
  if (cVar2 == '\0') {
    if (unaff_EBX[0x5fc] == 0) {
      pcStack_8 = (code *)0x78f0b2;
      FUN_00878dfb();
    }
    iVar3 = FUN_00432a57();
    cVar2 = '\x01' - (iVar3 != 0);
    *(char *)(unaff_EBP + -0xd) = cVar2;
    if (cVar2 == '\0') goto LAB_0078f0ce;
    *(undefined1 *)(unaff_EBP + -0xd) = 1;
  }
  else {
LAB_0078f0ce:
    *(undefined1 *)(unaff_EBP + -0xd) = 0;
  }
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_8 = (code *)0x78f0e7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_8 = (code *)0x78f0f2;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    pcStack_8 = (code *)0xfffffffe;
    piStack_c = (int *)0x78f104;
    FUN_004031b7();
    iVar3 = unaff_EBX[0x5fc];
    *(undefined4 *)(unaff_EBP + -4) = 0x36;
    if (iVar3 == 0) {
      pcStack_8 = (code *)0x78f11d;
      FUN_00878dfb();
    }
    pcStack_8 = (code *)(unaff_EBP + -0x28);
    piStack_c = (int *)0x78f130;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_8 = (code *)0x78f145;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      pcStack_8 = (code *)0x78f150;
      FUN_00878dfb();
    }
  }
  piVar5 = (int *)unaff_EBX[0x78c];
  if (((piVar5 != (int *)0x0) && (-1 < *(int *)(unaff_EBP + -0x14) - *piVar5)) &&
     (unaff_EBX[0x149] == 0)) {
    if (((int *)piVar5[4] == (int *)0x0) || (iVar3 = *(int *)piVar5[4], iVar3 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(iVar3 + -4) >> 1;
    }
    if (uVar11 != 0) {
      iVar3 = (**(code **)(*unaff_EBX + 0xc))();
      if (iVar3 == 0) {
        (**(code **)(unaff_EBX[1] + 0x10))();
        pcStack_8 = (code *)0x78f1b4;
        puVar6 = (undefined4 *)(**(code **)(unaff_EBX[1] + 0x10))();
        pcStack_8 = (code *)*puVar6;
        piStack_c = (int *)0x78f1bb;
        FUN_007d3c48();
      }
      if (*(int **)(unaff_EBX[0x78c] + 0x10) == (int *)0x0) {
        piStack_c = (int *)0x0;
      }
      else {
        piStack_c = (int *)**(int **)(unaff_EBX[0x78c] + 0x10);
      }
      pcStack_8 = (code *)0x1b;
      piStack_10 = (int *)0x78f1d9;
      FUN_007d4763();
    }
    if ((*(int **)(unaff_EBX[0x78c] + 0xc) == (int *)0x0) ||
       (iVar3 = **(int **)(unaff_EBX[0x78c] + 0xc), iVar3 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(iVar3 + -4) >> 1;
    }
    if (uVar11 != 0) {
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffffc;
      pcStack_8 = (code *)0x78f213;
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
      pcStack_8 = (code *)0x78f227;
      iVar3 = FUN_0079d5bc();
      pcStack_8 = *(code **)(iVar3 + 8);
      piStack_c = (int *)0x78f231;
      iVar3 = FUN_0079d5bc();
      piStack_10 = (int *)(iVar3 + 0xc);
      *(int ***)(unaff_EBP + -0x28) = &piStack_c;
      piStack_14 = (int *)0x78f240;
      FUN_004059fd();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_10 = (int *)0x78f249;
      FUN_0079d484();
      piStack_10 = (int *)0x78f250;
      FUN_00411207();
      pcStack_8 = (code *)0x0;
      piStack_c = (int *)0x78f25b;
      FUN_004031b7();
      iVar3 = unaff_EBX[0x5fc];
      *(undefined4 *)(unaff_EBP + -4) = 0x39;
      if (iVar3 == 0) {
        pcStack_8 = (code *)0x78f274;
        FUN_00878dfb();
      }
      pcStack_8 = (code *)(unaff_EBP + -0x20);
      piStack_c = (int *)0x78f287;
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      pcStack_8 = (code *)0x78f294;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        pcStack_8 = (code *)0x78f29f;
        FUN_00878dfb();
      }
      pcStack_8 = (code *)0x78f2a8;
      cVar2 = FUN_004115ef();
      if (cVar2 == '\0') {
        if (unaff_EBX[0x5fc] == 0) {
          pcStack_8 = (code *)0x78f2c9;
          FUN_00878dfb();
        }
        piVar5 = (int *)unaff_EBX[0x5fc];
        piStack_c = (int *)0x78f2e1;
        pcStack_8 = (code *)piVar5;
        iVar3 = (**(code **)(*piVar5 + 0xd8))();
        if (iVar3 < 0) {
          piStack_c = (int *)&DAT_00963df8;
          piStack_18 = (int *)0x78f2f1;
          piStack_14 = (int *)iVar3;
          piStack_10 = piVar5;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBX[0x78c] + 8) == 0x5b) {
          piStack_10 = (int *)unaff_EBX[0x34c];
          piStack_c = (int *)0x1;
          piStack_14 = (int *)0x78f30e;
          FUN_0040ee87();
          iVar3 = unaff_EBX[0x5fc];
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (iVar3 == 0) {
            piStack_c = (int *)0x80004003;
            piStack_10 = (int *)0x78f325;
            FUN_00878dfb();
          }
          piStack_1c = (int *)unaff_EBX[0x5fc];
          iVar3 = *piStack_1c;
          piStack_18 = *(int **)(unaff_EBP + -0x54);
          piStack_14 = *(int **)(unaff_EBP + -0x50);
          piStack_10 = *(int **)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + -0x28) = piStack_1c;
          piStack_c = *(int **)(unaff_EBP + -0x48);
          iVar3 = (**(code **)(iVar3 + 100))();
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
        }
        else {
          piStack_c = (int *)(unaff_EBP + -0x24);
          piStack_10 = (int *)0x78f37e;
          puVar6 = (undefined4 *)FUN_00486ada();
          piStack_10 = (int *)*puVar6;
          piStack_c = (int *)0x1;
          piStack_14 = (int *)0x78f38b;
          FUN_0040ee87();
          iVar3 = unaff_EBX[0x5fc];
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          if (iVar3 == 0) {
            piStack_c = (int *)0x80004003;
            piStack_10 = (int *)0x78f3a2;
            FUN_00878dfb();
          }
          piStack_1c = (int *)unaff_EBX[0x5fc];
          iVar3 = *piStack_1c;
          piStack_18 = *(int **)(unaff_EBP + -0x54);
          piStack_14 = *(int **)(unaff_EBP + -0x50);
          piStack_10 = *(int **)(unaff_EBP + -0x4c);
          *(int **)(unaff_EBP + -0x28) = piStack_1c;
          piStack_c = *(int **)(unaff_EBP + -0x48);
          iVar3 = (**(code **)(iVar3 + 100))();
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x54);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_004125d9();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        FUN_00403191(&DAT_00980690);
        iVar3 = unaff_EBX[0x5fc];
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        if (iVar3 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)unaff_EBX[0x5fc];
        iVar3 = *piVar5;
        *(int **)(unaff_EBP + -0x28) = piVar5;
        piVar5 = (int *)(**(code **)(iVar3 + 0x110))
                                  (piVar5,0,*(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x38),
                                   *(undefined4 *)(unaff_EBP + -0x34),
                                   *(undefined4 *)(unaff_EBP + -0x30),
                                   *(undefined4 *)(unaff_EBP + -0x2c));
        if ((int)piVar5 < 0) {
          pcStack_8 = *(code **)(unaff_EBP + -0x28);
          piStack_10 = (int *)0x78f463;
          piStack_c = piVar5;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        pcStack_8 = (code *)0x78f470;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          pcStack_8 = (code *)0x78f47b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        pcStack_8 = (code *)0x78f488;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          pcStack_8 = (code *)0x78f493;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125e6();
    }
    FUN_0079d895();
  }
  if (unaff_EBX[0x77d] < 0) {
    pcStack_8 = (code *)0x78f4bf;
    iVar3 = FUN_0079b949();
    pcStack_8 = (code *)0x78f4ca;
    cVar2 = FUN_00433bfa();
    if (cVar2 == '\0') {
      if (*(int *)(iVar3 + 0x14) == 0) {
        pcStack_8 = (code *)0x78f4e0;
        FUN_00878dfb();
      }
      iVar3 = FUN_00432a57();
      if (iVar3 == 0) {
        pcStack_8 = (code *)0x78f508;
        FUN_0079757b();
      }
    }
  }
  else if (0 < unaff_EBX[0x77d]) {
    pcStack_8 = (code *)0x78f51c;
    iVar8 = FUN_0079b949();
    pcStack_8 = (code *)0x78f527;
    uVar4 = FUN_0079b949();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    iVar3 = unaff_EBX[0x5ed];
    if ((iVar3 == 0) || (-1 < *(int *)(unaff_EBP + -0x14) - iVar3)) {
      if (1000 < *(int *)(unaff_EBP + -0x14) - iVar3) {
        unaff_EBX[0x5ed] = 0;
      }
      iVar3 = FUN_00790008();
      if (iVar3 != 0) goto LAB_0078f592;
      if ((*(int *)(iVar8 + 0x14) == 0) && (unaff_EBX[0x77e] == 0)) {
        pcStack_8 = (code *)0x78f573;
        FUN_00797d5a();
      }
      if ((*(int *)(*(int *)(unaff_EBP + -0x20) + 0x14) == 0) && (unaff_EBX[0x77e] != 0)) {
        pcStack_8 = (code *)0x78f590;
        FUN_007980a6();
      }
    }
    else {
LAB_0078f592:
      pcStack_8 = (code *)0x78f59b;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        pcStack_8 = (code *)0x78f5a8;
        FUN_0079ba1a();
      }
      pcStack_8 = (code *)0x78f5b4;
      cVar2 = FUN_00433bfa();
      if (cVar2 == '\0') {
        pcStack_8 = (code *)0x78f5c1;
        FUN_0079ba1a();
      }
    }
    if ((unaff_EBX[0x77f] != 0) && (*(int *)(unaff_EBX[0x77f] + -4) != 0)) {
      pcStack_8 = (code *)0x78f5df;
      iVar3 = FUN_0043f90a();
      if (unaff_EBX[0x780] != iVar3) {
        pcStack_8 = (code *)0x78f5ec;
        iVar3 = FUN_0043f90a();
        unaff_EBX[0x780] = iVar3;
        pcStack_8 = (code *)0x78f5fb;
        FUN_00797d5a();
      }
    }
  }
  pcStack_8 = (code *)0x78f607;
  cVar2 = FUN_00433bfa();
  if (cVar2 == '\0') {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x35;
    do {
      iVar3 = *(int *)(unaff_EBP + -0x18);
      iVar8 = unaff_EBX[iVar3 * 6 + 0x606];
      piVar5 = unaff_EBX + iVar3 * 6 + 0x601;
      *(int **)(unaff_EBP + -0x1c) = piVar5;
      if (iVar8 != 0) {
        if (iVar3 == 0x35) {
          pcStack_8 = (code *)0x78f649;
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -4) = 0x41;
          pcStack_8 = (code *)0x78f65c;
          piVar5 = (int *)FUN_0078ffba();
          iVar3 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          if (iVar3 == 0) {
            pcStack_8 = (code *)0x78f670;
            FUN_00878dfb();
          }
          piVar5 = (int *)*piVar5;
          iVar3 = *piVar5;
          piStack_14 = (int *)0x0;
          piStack_18 = (int *)0x0;
          piStack_1c = (int *)0x0;
          piStack_10 = *(int **)(unaff_EBP + -100);
          piStack_c = *(int **)(unaff_EBP + -0x60);
          pcStack_8 = *(code **)(unaff_EBP + -0x5c);
          *(int **)(unaff_EBP + -0x28) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0x8c))(piVar5,unaff_EBP + -0x20,0,0,0,0);
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
          }
          FUN_004125d9();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar3 = FUN_00402bc3(unaff_EBP + -100);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_00403191(&DAT_00980690);
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x14);
          *(undefined4 *)(unaff_EBP + -4) = 0x43;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x14);
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x28) = piVar5;
          piVar5 = (int *)(**(code **)(iVar3 + 0x8c))
                                    (piVar5,unaff_EBP + -0x2c,0,0,0,0,0,0,0,
                                     *(undefined4 *)(unaff_EBP + -0x54),
                                     *(undefined4 *)(unaff_EBP + -0x50),
                                     *(undefined4 *)(unaff_EBP + -0x4c),
                                     *(undefined4 *)(unaff_EBP + -0x48));
          if ((int)piVar5 < 0) {
            pcStack_8 = *(code **)(unaff_EBP + -0x28);
            piStack_10 = (int *)0x78f72d;
            piStack_c = piVar5;
            FUN_00878e09();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          pcStack_8 = (code *)0x78f73a;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            pcStack_8 = (code *)0x78f745;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(uint *)(unaff_EBP + -0x28) =
               (uint)(*(int *)(unaff_EBP + -0x2c) <= *(int *)(unaff_EBP + -0x20));
        }
        if (piVar5[5] == 0) {
          pcStack_8 = (code *)0x78f767;
          FUN_00878dfb();
        }
        piVar5 = (int *)piVar5[5];
        piStack_c = (int *)0x78f776;
        pcStack_8 = (code *)piVar5;
        piVar7 = (int *)(**(code **)(*piVar5 + 0xd8))();
        if ((int)piVar7 < 0) {
          piStack_10 = (int *)0x78f786;
          piStack_c = piVar7;
          pcStack_8 = (code *)piVar5;
          FUN_00878e09();
        }
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    } while (*(int *)(unaff_EBP + -0x18) < 0x3f);
  }
  iVar3 = FUN_005a9936();
  if ((iVar3 != 0) && (unaff_EBX[0x5e3] != 0)) {
    *(undefined4 *)(unaff_EBX[0x5e3] + 4) = 1;
  }
  iVar3 = (**(code **)(*unaff_EBX + 0xc))();
  if (iVar3 != 0) goto LAB_0078ffab;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  uVar11 = unaff_EBX[0x5dc];
  *(undefined4 *)(unaff_EBP + -4) = 0x44;
  while (uVar11 != 0) {
    iVar3 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
    *(uint *)(unaff_EBP + -0x2c) = uVar11;
    FUN_0079d81d();
    FUN_005d0fed();
    puVar6 = *(undefined4 **)(*(int *)(unaff_EBP + -0x2c) + 4);
    *(undefined4 **)(unaff_EBP + -0x40) = puVar6;
    (**(code **)*puVar6)();
    uVar11 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
  }
  iVar3 = FUN_0045e2eb();
  if (0 < iVar3) {
    iVar3 = FUN_0045e2eb();
    pcStack_8 = (code *)0x78f838;
    FUN_0045e3a0();
    if (iVar3 + -0x1e < 0) {
      pcStack_8 = (code *)0x78f848;
      FUN_0045e3a0();
    }
  }
  iVar3 = FUN_0045e2eb();
  if (iVar3 < 0) {
    iVar3 = FUN_0045e2eb();
    pcStack_8 = (code *)0x78f871;
    FUN_0045e3a0();
    if (0 < iVar3 + 0x1e) {
      pcStack_8 = (code *)0x78f881;
      FUN_0045e3a0();
    }
  }
  uVar11 = unaff_EBX[0x14b];
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  if ((((uVar11 & 0xfffffffe) != 0x12) && (iVar3 = FUN_0045e2eb(), 0 < iVar3)) &&
     (unaff_EBX[0x5fe] = unaff_EBX[0x5fe] + 1, ((byte)unaff_EBX[0x5fe] & 3) < 2)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0xff808080;
  }
  iVar3 = FUN_004bed04();
  if ((iVar3 != 0) || (iVar3 = (**(code **)(*unaff_EBX + 0x10))(), iVar3 != 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x80ffffff;
  }
  iVar3 = (**(code **)(*unaff_EBX + 0x14))();
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  iVar3 = unaff_EBX[0x5ed];
  if ((iVar3 == 0) || (-1 < *(int *)(unaff_EBP + -0x14) - iVar3)) {
    if (1000 < *(int *)(unaff_EBP + -0x14) - iVar3) {
      unaff_EBX[0x5ed] = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (unaff_EBX[0x34e] == 0) {
    pcStack_8 = (code *)0x78f92a;
    FUN_00878dfb();
  }
  piVar5 = (int *)unaff_EBX[0x34e];
  piStack_c = (int *)0x78f938;
  pcStack_8 = (code *)piVar5;
  iVar3 = (**(code **)(*piVar5 + 0xe0))();
  if (iVar3 < 0) {
    piStack_c = (int *)&DAT_00963df8;
    piStack_18 = (int *)0x78f948;
    piStack_14 = (int *)iVar3;
    piStack_10 = piVar5;
    FUN_00878e09();
  }
  if (unaff_EBX[0x34f] == 0) {
    piStack_c = (int *)0x80004003;
    piStack_10 = (int *)0x78f960;
    FUN_00878dfb();
  }
  piVar5 = (int *)unaff_EBX[0x34f];
  piStack_c = *(int **)(unaff_EBP + -0x18);
  piStack_14 = (int *)0x78f96e;
  piStack_10 = piVar5;
  piVar7 = (int *)(**(code **)(*piVar5 + 0xe0))();
  if ((int)piVar7 < 0) {
    piStack_14 = (int *)&DAT_00963df8;
    piStack_1c = piVar7;
    piStack_18 = piVar5;
    FUN_00878e09();
  }
  piStack_14 = (int *)0x78f985;
  iVar3 = (**(code **)(*unaff_EBX + 0x14))();
  if ((iVar3 == 0) && (unaff_EBX[0x149] == 0)) {
    piStack_14 = (int *)0x1;
  }
  else {
    piStack_14 = (int *)0x0;
  }
  piStack_18 = (int *)0x78f9a0;
  FUN_005c9c3b();
  piVar5 = unaff_EBX + 0x678;
  *(int **)(unaff_EBP + -0x18) = piVar5;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xc;
  do {
    if (*piVar5 != 0) {
      piStack_14 = (int *)0x78f9c3;
      uVar11 = FUN_0042503d();
      if ((uVar11 & 0xff000000) < 0xd0000001) {
        if (*piVar5 == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78fb1d;
          FUN_00878dfb();
        }
        piStack_14 = (int *)0x78fb24;
        uVar11 = FUN_0042503d();
        if ((uVar11 & 0xff000000) != 0) goto LAB_0078fc9b;
        if (*piVar5 == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78fb3d;
          FUN_00878dfb();
        }
        iVar3 = *piVar5;
        *(int *)(unaff_EBP + -0x1c) = iVar3;
        if (iVar3 == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78fb50;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = *piVar5;
        piStack_14 = (int *)0x78fb5d;
        piStack_14 = (int *)FUN_0042503d();
        piStack_18 = *(int **)(unaff_EBP + -0x20);
        piStack_1c = (int *)0x78fb6a;
        iVar3 = (**(code **)(*piStack_18 + 0xe0))();
        if (iVar3 < 0) {
          piStack_1c = (int *)&DAT_00963df8;
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20));
        }
        piStack_1c = &DAT_00980690;
        FUN_00403191();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_1c = (int *)0x78fbaa;
        uVar11 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 500;
        piStack_1c = (int *)0x78fbbd;
        iVar3 = FUN_0042a378();
        piStack_1c = (int *)0x3;
        FUN_004031b7(*(int *)(unaff_EBP + -0x2c) + 500 + iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        piStack_1c = (int *)0x78fbe0;
        uVar11 = FUN_004133f0();
        iVar3 = **(int **)(unaff_EBP + -0x18);
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 0x1e + 0xe1;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_1c = (int *)(unaff_EBP + -0x3c);
        piVar5 = (int *)FUN_004113e5();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        iVar3 = *piVar5;
        piStack_1c = *(int **)(unaff_EBP + -0x78);
        *(int **)(unaff_EBP + -0x20) = piVar5;
        piVar5 = (int *)(**(code **)(iVar3 + 0x90))
                                  (piVar5,*(undefined4 *)(unaff_EBP + -0x2c),0,
                                   *(undefined4 *)(unaff_EBP + -0x74),
                                   *(undefined4 *)(unaff_EBP + -0x70),
                                   *(undefined4 *)(unaff_EBP + -0x6c),
                                   *(undefined4 *)(unaff_EBP + -0x68),
                                   *(undefined4 *)(unaff_EBP + -0x84),
                                   *(undefined4 *)(unaff_EBP + -0x80),
                                   *(undefined4 *)(unaff_EBP + -0x7c));
        if ((int)piVar5 < 0) {
          piStack_14 = (int *)&DAT_00963de8;
          piStack_18 = *(int **)(unaff_EBP + -0x20);
          piStack_1c = piVar5;
          FUN_00878e09();
        }
        piStack_14 = (int *)0x78fc68;
        FUN_004125d9();
        piStack_14 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        piStack_18 = (int *)0x78fc75;
        piStack_14 = (int *)FUN_00402bc3();
        if ((int)piStack_14 < 0) {
          piStack_18 = (int *)0x78fc80;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_14 = (int *)(unaff_EBP + -0x84);
      }
      else {
        if (*piVar5 == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78f9e1;
          FUN_00878dfb();
        }
        iVar3 = *piVar5;
        *(int *)(unaff_EBP + -0x1c) = iVar3;
        if (iVar3 == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78f9f4;
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = *piVar5;
        piStack_14 = (int *)0x78fa01;
        piStack_14 = (int *)FUN_0042503d();
        piStack_18 = *(int **)(unaff_EBP + -0x20);
        piStack_1c = (int *)0x78fa0e;
        iVar3 = (**(code **)(*piStack_18 + 0xe0))();
        if (iVar3 < 0) {
          piStack_1c = (int *)&DAT_00963df8;
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20));
        }
        piStack_1c = &DAT_00980690;
        FUN_00403191();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_1c = (int *)0x78fa4b;
        uVar11 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x2c) = uVar11 % 500;
        piStack_1c = (int *)0x78fa5e;
        iVar3 = FUN_0042a378();
        piStack_1c = (int *)0x3;
        FUN_004031b7(*(int *)(unaff_EBP + -0x2c) + 200 + iVar3);
        iVar3 = **(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piStack_1c = (int *)(unaff_EBP + -0x28);
        piVar5 = (int *)FUN_004113e5();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        if (iVar3 == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)*piVar5;
        iVar3 = *piVar5;
        piStack_1c = *(int **)(unaff_EBP + -0x48);
        *(int **)(unaff_EBP + -0x2c) = piVar5;
        piVar5 = (int *)(**(code **)(iVar3 + 0x90))
                                  (piVar5,0,0,*(undefined4 *)(unaff_EBP + -100),
                                   *(undefined4 *)(unaff_EBP + -0x60),
                                   *(undefined4 *)(unaff_EBP + -0x5c),
                                   *(undefined4 *)(unaff_EBP + -0x58),
                                   *(undefined4 *)(unaff_EBP + -0x54),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x4c));
        if ((int)piVar5 < 0) {
          piStack_14 = (int *)&DAT_00963de8;
          piStack_18 = *(int **)(unaff_EBP + -0x2c);
          piStack_1c = piVar5;
          FUN_00878e09();
        }
        piStack_14 = (int *)0x78faeb;
        FUN_004125d9();
        piStack_14 = (int *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        piStack_18 = (int *)0x78faf8;
        piStack_14 = (int *)FUN_00402bc3();
        if ((int)piStack_14 < 0) {
          piStack_18 = (int *)0x78fb03;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        piStack_14 = (int *)(unaff_EBP + -0x54);
      }
      piStack_18 = (int *)0x78fc90;
      piStack_14 = (int *)FUN_00402bc3();
      if ((int)piStack_14 < 0) {
        piStack_18 = (int *)0x78fc9b;
        FUN_00878dfb();
      }
    }
LAB_0078fc9b:
    piVar5 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x18);
    piVar7 = (int *)(unaff_EBP + -0x24);
    *piVar7 = *piVar7 + -1;
    *(int **)(unaff_EBP + -0x18) = piVar5;
  } while (*piVar7 != 0);
  piStack_14 = (int *)0x0;
  piStack_18 = (int *)0x78fcb7;
  FUN_0079c347();
  piStack_14 = *(int **)(unaff_EBP + -0x14);
  piStack_18 = (int *)0x78fcc1;
  FUN_00790087();
  if (unaff_EBX[0x5e9] != 0) {
    piStack_14 = (int *)0x5;
    piStack_18 = (int *)0x78fcd2;
    iVar3 = FUN_0079b949();
    unaff_EBX[0x5e9] = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    piVar5 = (int *)(iVar3 + 0x44);
    do {
      if (*piVar5 == 0) {
        piStack_14 = (int *)0x80004003;
        piStack_18 = (int *)0x78fcf4;
        FUN_00878dfb();
      }
      piStack_14 = (int *)0x78fcfb;
      iVar3 = FUN_00432a57();
      if (iVar3 != 0) {
        unaff_EBX[0x5e9] = 1;
        break;
      }
      if (*piVar5 == 0) {
        piStack_14 = (int *)0x80004003;
        piStack_18 = (int *)0x78fd0d;
        FUN_00878dfb();
      }
      piVar7 = (int *)*piVar5;
      piStack_14 = (int *)0xffffff;
      piStack_1c = (int *)0x78fd1d;
      piStack_18 = piVar7;
      piVar9 = (int *)(**(code **)(*piVar7 + 0xe0))();
      if ((int)piVar9 < 0) {
        piStack_14 = (int *)&DAT_00963df8;
        piStack_1c = piVar9;
        piStack_18 = piVar7;
        FUN_00878e09();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      piVar5 = piVar5 + 6;
    } while (*(int *)(unaff_EBP + -0x1c) < 0xb);
  }
  if ((0 < unaff_EBX[0x5ea]) &&
     (iVar3 = unaff_EBX[0x5ea] + -0x1e, unaff_EBX[0x5ea] = iVar3, iVar3 < 1)) {
    piStack_14 = (int *)0x78fd65;
    (**(code **)(*unaff_EBX + 4))();
    piStack_14 = (int *)0x78fd70;
    puVar6 = (undefined4 *)FUN_004c2648();
    piStack_14 = (int *)*puVar6;
    piStack_18 = (int *)0x78fd7a;
    FUN_00445548();
    piStack_14 = (int *)unaff_EBX[0x77d];
    piStack_18 = (int *)0x78fd87;
    FUN_0079757b();
  }
  if (0 < unaff_EBX[0x5eb]) {
    iVar3 = unaff_EBX[0x5eb] + -0x1e;
    unaff_EBX[0x5eb] = iVar3;
    if (unaff_EBX[0x5ec] == 0) {
      if ((iVar3 < 0x79) || (0xf0 < iVar3)) {
        if (0 < iVar3) {
          if (iVar3 < 0x79) {
            if (unaff_EBX[0x34e] == 0) {
              piStack_14 = (int *)0x80004003;
              piStack_18 = (int *)0x78fec1;
              FUN_00878dfb();
            }
            piVar5 = (int *)unaff_EBX[0x34e];
            iVar3 = *piVar5;
            piVar7 = (int *)0xb2ffffff;
            goto LAB_0078fe1c;
          }
          if (0 < iVar3) goto LAB_0078ff0f;
        }
        piStack_14 = (int *)0xffffffff;
        piStack_18 = (int *)0x78fee0;
        FUN_00424e27();
        piStack_18 = (int *)0x78fee7;
        FUN_00444e05();
        piStack_14 = (int *)0xffffffff;
        piStack_18 = (int *)0x78fef4;
        FUN_00424e27();
        piStack_18 = (int *)0x78fefb;
        FUN_00444e05();
        piStack_14 = (int *)0xffffffff;
        piStack_18 = (int *)0x78ff08;
        FUN_00424e27();
        piStack_18 = (int *)0x78ff0f;
        FUN_00444e05();
      }
      else {
        piStack_14 = (int *)0x0;
        piStack_18 = (int *)0x78fdee;
        FUN_00444e82();
        piStack_14 = (int *)unaff_EBX[0x77d];
        piStack_18 = (int *)0x78fdfb;
        FUN_0079757b();
        if (unaff_EBX[0x34e] == 0) {
          piStack_14 = (int *)0x80004003;
          piStack_18 = (int *)0x78fe13;
          FUN_00878dfb();
        }
        piVar5 = (int *)unaff_EBX[0x34e];
        iVar3 = *piVar5;
        piVar7 = (int *)0x4dffffff;
LAB_0078fe1c:
        piStack_1c = (int *)0x78fe24;
        piStack_18 = piVar5;
        piStack_14 = piVar7;
        iVar3 = (**(code **)(iVar3 + 0xe0))();
        if (iVar3 < 0) {
          piStack_1c = (int *)&DAT_00963df8;
          FUN_00878e09(iVar3,piVar5);
        }
        if (unaff_EBX[0x34f] == 0) {
          piStack_1c = (int *)0x80004003;
          FUN_00878dfb();
        }
        piVar5 = (int *)unaff_EBX[0x34f];
        piStack_1c = piVar7;
        iVar3 = (**(code **)(*piVar5 + 0xe0))(piVar5);
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
        }
        if (unaff_EBX[0x34d] == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = (int *)unaff_EBX[0x34d];
        piVar7 = (int *)(**(code **)(*piVar5 + 0xe0))(piVar5,piVar7);
        if ((int)piVar7 < 0) {
          piStack_14 = (int *)&DAT_00963df8;
          piStack_1c = piVar7;
          piStack_18 = piVar5;
          FUN_00878e09();
        }
      }
    }
    else if (iVar3 < 1) {
      piStack_14 = (int *)0x3ea;
      piStack_18 = (int *)0x78fdbf;
      FUN_00444e82();
      piStack_14 = (int *)unaff_EBX[0x77d];
      piStack_18 = (int *)0x78fdcc;
      FUN_0079757b();
    }
  }
LAB_0078ff0f:
  piVar5 = unaff_EBX + 1;
  piStack_14 = (int *)0x78ff1a;
  piVar7 = (int *)(**(code **)(unaff_EBX[1] + 0x14))();
  piStack_14 = (int *)0x78ff23;
  piVar9 = (int *)(**(code **)(*piVar5 + 0x10))();
  if (*piVar9 == *piVar7) {
    piStack_14 = (int *)0x78ff30;
    iVar3 = (**(code **)(*piVar5 + 0x14))();
    piStack_14 = (int *)0x78ff39;
    iVar8 = (**(code **)(*piVar5 + 0x10))();
    if (*(int *)(iVar8 + 4) != *(int *)(iVar3 + 4)) goto LAB_0078ff4a;
    unaff_EBX[0x794] = unaff_EBX[0x794] + 0x1e;
  }
  else {
LAB_0078ff4a:
    unaff_EBX[0x794] = 0;
  }
  piStack_14 = (int *)0x78ff56;
  iVar3 = FUN_00429303();
  if (((599999 < unaff_EBX[0x794]) &&
      (iVar8 = *(int *)(unaff_EBP + -0x14), unaff_EBX[0x795] <= iVar8)) && (iVar3 != 0)) {
    piStack_14 = (int *)0x78ff7c;
    iVar3 = FUN_004f162d();
    if ((iVar3 < 910000000) || (0x363d7f96 < iVar3)) {
      piStack_14 = (int *)0x2;
      piStack_18 = (int *)0x78ff93;
      FUN_0079d45a();
      unaff_EBX[0x795] = iVar8 + 120000;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_14 = (int *)0x78ffab;
  FUN_005d0fed();
LAB_0078ffab:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


