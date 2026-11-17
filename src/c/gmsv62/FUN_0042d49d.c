/* FUN_0042d49d - 0x0042d49d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042d49d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBP;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int *piStack_7c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    piStack_7c = (int *)(unaff_EBP + -0x24);
    iStack_80 = 0x42d4ff;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
  }
  else {
    piStack_7c = (int *)(unaff_EBP + -0x28);
    iStack_80 = 0x42d4df;
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  piStack_7c = (int *)0x42d51b;
  FUN_00419192();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402676();
  }
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    piStack_7c = (int *)(unaff_EBP + 0x14);
    iStack_80 = 0x42d57a;
    FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
    *(undefined4 *)(unaff_EBP + -4) = 8;
  }
  else {
    piStack_7c = (int *)(unaff_EBP + -0x28);
    iStack_80 = 0x42d561;
    FUN_00679d86();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
  }
  piStack_7c = (int *)0x42d58c;
  FUN_00419192();
  *(undefined4 *)(unaff_EBP + -4) = 7;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  do {
    if (-1 < *(int *)(unaff_EBP + -0x10)) {
      FUN_0087a1b0();
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_84 = 0x42d5db;
      piStack_7c = (int *)&stack0xffffff8c;
      FUN_0087a25a();
    }
    piStack_7c = (int *)(unaff_EBP + -0x28);
    iStack_80 = 0x42d5f7;
    puVar1 = (undefined4 *)FUN_00679d86();
    iStack_80 = *puVar1;
    piStack_7c = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_84 = unaff_EBP + -0x14;
    iStack_88 = 0x42d60b;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    piStack_7c = (int *)0xff;
    iStack_80 = 3;
    iStack_88 = unaff_EBP + 0x10;
    *(int **)(unaff_EBP + -0x24) = &iStack_84;
    uStack_8c = 0x42d631;
    iStack_84 = extraout_ECX_00;
    FUN_0041160e();
    iStack_88 = 0;
    uStack_8c = 0;
    *(undefined4 **)(unaff_EBP + -0x34) = &uStack_90;
    uStack_90 = extraout_ECX_01;
    FUN_00433bdf(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uVar2 = FUN_00411641(*(undefined4 *)(unaff_EBP + 8));
    FUN_0042e3f0(unaff_EBP + 0x14,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + 0x14) == 0) break;
    piStack_7c = (int *)0x42d679;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_7c = (int *)0x42d686;
    FUN_00403191();
    piVar4 = *(int **)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar4 == (int *)0x0) {
      piStack_7c = (int *)0x42d69b;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 0x14);
    }
    iStack_84 = *(int *)(unaff_EBP + -0x74);
    iStack_80 = *(int *)(unaff_EBP + -0x70);
    iVar3 = *piVar4;
    piStack_7c = *(int **)(unaff_EBP + -0x6c);
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x60);
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + -0x24) = piVar4;
    iStack_88 = *(undefined4 *)(unaff_EBP + -0x58);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -100));
    if (iVar3 < 0) {
      piStack_7c = *(int **)(unaff_EBP + -0x24);
      iStack_84 = 0x42d6d5;
      iStack_80 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_7c = (int *)0x42d6e2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d6ed;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_7c = (int *)0x42d6fa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d705;
      FUN_00878dfb();
    }
    piStack_7c = *(int **)(unaff_EBP + 0x14);
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff88;
    if (piStack_7c != (int *)0x0) {
      iStack_80 = 0x42d71d;
      (**(code **)(*piStack_7c + 4))();
    }
    piStack_7c = (int *)0x42d725;
    FUN_00427af9();
    if (-1 < *(int *)(unaff_EBP + -0x10)) {
      FUN_0087a1b0();
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_84 = 0x42d73f;
      piStack_7c = (int *)&stack0xffffff8c;
      FUN_0087a25a();
    }
    piStack_7c = (int *)(unaff_EBP + -0x2c);
    iStack_80 = 0x42d75e;
    puVar1 = (undefined4 *)FUN_00679d86();
    iStack_80 = *puVar1;
    piStack_7c = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_84 = unaff_EBP + -0x14;
    iStack_88 = 0x42d772;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00402676();
    piStack_7c = (int *)0xff;
    iStack_80 = -1;
    iStack_88 = unaff_EBP + 0x10;
    *(int **)(unaff_EBP + -0x34) = &iStack_84;
    uStack_8c = 0x42d798;
    iStack_84 = extraout_ECX_02;
    FUN_0041160e();
    iStack_88 = 0;
    uStack_8c = 0;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_90;
    uStack_90 = extraout_ECX_03;
    FUN_00433bdf(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uVar2 = FUN_00411641(*(undefined4 *)(unaff_EBP + 8));
    puVar1 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x30,uVar2);
    piStack_7c = (int *)0x42d7cf;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x14),
               (IBinding *)*puVar1);
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      piStack_7c = (int *)0x42d7dc;
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    if (*(int *)(unaff_EBP + 0x14) == 0) break;
    piStack_7c = (int *)0x42d7f1;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    piStack_7c = (int *)(unaff_EBP + -0x54);
    iStack_80 = 0x42d800;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d80c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_7c = (int *)0x42d816;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    piStack_7c = (int *)(unaff_EBP + -0x44);
    iStack_80 = 0x42d820;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d82c;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (piVar4 == (int *)0x0) {
      piStack_7c = (int *)0x42d841;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + 0x14);
    }
    iStack_84 = *(int *)(unaff_EBP + -0x54);
    iStack_80 = *(int *)(unaff_EBP + -0x50);
    iVar3 = *piVar4;
    piStack_7c = *(int **)(unaff_EBP + -0x4c);
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x24) = piVar4;
    iStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
    iVar3 = (**(code **)(iVar3 + 0x110))(piVar4,0,*(undefined4 *)(unaff_EBP + -0x44));
    if (iVar3 < 0) {
      piStack_7c = *(int **)(unaff_EBP + -0x24);
      iStack_84 = 0x42d87b;
      iStack_80 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_7c = (int *)0x42d888;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d893;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_7c = (int *)0x42d8a0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_7c = (int *)0x42d8ab;
      FUN_00878dfb();
    }
    piStack_7c = *(int **)(unaff_EBP + 0x14);
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff88;
    if (piStack_7c != (int *)0x0) {
      iStack_80 = 0x42d8c3;
      (**(code **)(*piStack_7c + 4))();
    }
    piStack_7c = (int *)0x42d8cb;
    FUN_00427af9();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
      piStack_7c = (int *)0x42d8dc;
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    piStack_7c = (int *)0x42d91c;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    piStack_7c = (int *)0x42d92d;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


