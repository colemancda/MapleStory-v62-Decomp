/* FUN_004a1a29 - 0x004a1a29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a1a29(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 local_4c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x28) = &local_4c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  local_4c = 0;
  FUN_00414f8b();
  (**(code **)(*extraout_ECX + 0x20))();
  iVar3 = extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    iStack_58 = 0x4a1a73;
    FUN_00878dfb();
  }
  iVar2 = FUN_00424ee1();
  iVar3 = extraout_ECX[0xe];
  iVar1 = extraout_ECX[0x18];
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = iVar2 + (iVar3 - iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar3 = FUN_004b3d90();
  if (((iVar3 == 0) || (*(int *)(unaff_EBP + 0x14) == -1)) || (*(int *)(unaff_EBP + 0x18) == -1)) {
    iVar3 = (**(code **)(extraout_ECX[1] + 0x20))();
    piVar5 = extraout_ECX + 0x1a;
    if (iVar3 == 0) {
      piVar5 = extraout_ECX + 0x1b;
    }
    piStack_70 = (int *)0x4a1e48;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*piVar5);
    piStack_70 = (int *)0x4a1e56;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_70 = (int *)0x4a1e63;
    FUN_00403191();
    piStack_70 = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_74 = 0x4a1e77;
    iStack_74 = FUN_00449749();
    iStack_78 = 0x4a1e80;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 0x14) = &iStack_78;
    iStack_78 = extraout_ECX_01;
    FUN_00448a17(uVar4);
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004115d9(iVar2,uVar4);
    FUN_00448e3a(iVar2,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_70 = (int *)0x4a1eb0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1ebb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    iStack_58 = 0x4a1aba;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)extraout_ECX[0x1a]);
    iStack_58 = 0x4a1ac8;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_58 = 0x4a1ad5;
    FUN_00403191();
    iStack_58 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_5c = 0x4a1ae9;
    uStack_5c = FUN_00449749();
    iStack_60 = *(int *)(unaff_EBP + 0x14);
    FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_60 = 0x4a1b06;
    FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_60;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_58 = 0x4a1b3d;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_58 = 0x4a1b4b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x4a1b56;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_58 = 0x4a1b63;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x4a1b6e;
      FUN_00878dfb();
    }
    iStack_58 = 0x4a1b77;
    FUN_00403191();
    iStack_58 = *(int *)(unaff_EBP + 0x14);
    iStack_60 = unaff_EBP + -0x1c;
    uStack_5c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_58 = 0x4a1b9b;
    uStack_5c = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_58;
    iStack_60 = 0x4a1ba7;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_5c = 0x4a1bb3;
    FUN_0044974c();
    uStack_5c = 0x4a1bba;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_58 = 0x4a1bd6;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x4a1be1;
      FUN_00878dfb();
    }
    iVar2 = iVar2 + *(int *)(unaff_EBP + -0x18);
    iStack_58 = 0x4a1bef;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)extraout_ECX[0x1c]);
    iStack_58 = 0x4a1bf8;
    FUN_00403191();
    iStack_58 = *(int *)(unaff_EBP + 0x18);
    iStack_60 = unaff_EBP + -0x1c;
    uStack_5c = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0045e053();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_58 = 0x4a1c1d;
    uStack_5c = FUN_00449713();
    *(int **)(unaff_EBP + -0x28) = &iStack_58;
    iStack_60 = 0x4a1c29;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_5c = 0x4a1c35;
    FUN_0044974c();
    uStack_5c = 0x4a1c3c;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_58 = 0x4a1c58;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_58 = 0x4a1c63;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    if (piVar5 == (int *)0x0) {
      iStack_58 = 0x4a1c74;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iStack_58 = extraout_ECX[0x1f];
    iStack_60 = (extraout_ECX[0x11] - extraout_ECX[0xf]) + *(int *)(unaff_EBP + 0xc);
    uStack_5c = *(undefined4 *)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x1c) = piVar5;
    iVar3 = (**(code **)(*piVar5 + 0x8c))();
    if (iVar3 < 0) {
      piStack_70 = *(int **)(unaff_EBP + -0x1c);
      iStack_78 = 0x4a1cae;
      iStack_74 = iVar3;
      FUN_00878e09();
    }
    piStack_70 = (int *)0x4a1cb7;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_70 = (int *)0x4a1cc4;
    FUN_00403191();
    piStack_70 = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_74 = 0x4a1cd8;
    iStack_74 = FUN_00449749();
    iStack_78 = *(int *)(unaff_EBP + 0x18);
    FUN_0045e053(unaff_EBP + -0x1c,*(undefined4 *)(unaff_EBP + 0x14));
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_78 = 0x4a1cf6;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 0x14) = &iStack_78;
    FUN_00448a17(uVar4);
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = iVar2;
    FUN_004115d9(iVar2,uVar4);
    FUN_00448e3a(iVar3,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_70 = (int *)0x4a1d32;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1d3d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_70 = (int *)0x4a1d4a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1d55;
      FUN_00878dfb();
    }
    iVar2 = iVar2 + *(int *)(unaff_EBP + -0x18);
    piStack_70 = (int *)0x4a1d63;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)extraout_ECX[0x1a]);
    piStack_70 = (int *)0x4a1d6d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_70 = (int *)(unaff_EBP + -0x48);
    iStack_74 = 0x4a1d77;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1d83;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_70 = (int *)0x4a1d91;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_70 = (int *)(unaff_EBP + -0x38);
    iStack_74 = 0x4a1d9b;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1da7;
      FUN_00878dfb();
    }
    piStack_70 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_74 = 0x4a1dbb;
    iStack_74 = FUN_00449749();
    iStack_78 = -1;
    FUN_0045e053(unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x18));
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_78 = 0x4a1dd8;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 0x18) = &iStack_78;
    iStack_78 = extraout_ECX_00;
    FUN_00448a17(uVar4);
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    FUN_004115d9(iVar2,uVar4);
    FUN_00448e3a(iVar2,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    piStack_70 = (int *)0x4a1e14;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1e1f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  piStack_70 = (int *)0x4a1ec8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_70 = (int *)0x4a1ed3;
    FUN_00878dfb();
  }
  iVar3 = (**(code **)(extraout_ECX[1] + 0x20))();
  if (((iVar3 != 0) && (extraout_ECX[0x14] != 0)) && (*(int *)(extraout_ECX[0x14] + -4) != 0)) {
    if (extraout_ECX[6] == 0) {
      piStack_70 = (int *)0x4a1f0c;
      FUN_00878dfb();
    }
    iVar3 = FUN_00424ee1();
    *(int *)(unaff_EBP + -0x28) = iVar3 + (extraout_ECX[0xe] - extraout_ECX[0x18]);
    piStack_70 = (int *)0x4a1f29;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_70 = (int *)(unaff_EBP + -0x48);
    iStack_74 = 0x4a1f33;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1f3f;
      FUN_00878dfb();
    }
    piStack_70 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_74 = 0x4a1f50;
    piVar5 = (int *)FUN_004a313b();
    piStack_70 = (int *)(*piVar5 + extraout_ECX[0x12]);
    iStack_74 = unaff_EBP + 0x14;
    iStack_78 = 0x4a1f62;
    FUN_0045e070();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_70 = (int *)0x4a1f6d;
    iStack_74 = FUN_00449713();
    *(int ***)(unaff_EBP + 0x18) = &piStack_70;
    iStack_78 = 0x4a1f79;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_74 = 0x4a1f85;
    FUN_0044974c();
    iStack_74 = 0x4a1f8c;
    uVar4 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + 0x18) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_70 = (int *)0x4a1fa8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_70 = (int *)0x4a1fb3;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 0x14) = 1;
    while ((extraout_ECX[0x14] != 0 &&
           (*(uint *)(unaff_EBP + 0x14) < *(uint *)(extraout_ECX[0x14] + -4)))) {
      piStack_70 = (int *)0x4a1fde;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_70 = (int *)(unaff_EBP + -0x48);
      iStack_74 = 0x4a1fe8;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_70 = (int *)0x4a1ff4;
        FUN_00878dfb();
      }
      piStack_70 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_74 = 0x4a2006;
      piVar5 = (int *)FUN_004a3308();
      piStack_70 = (int *)(*piVar5 + extraout_ECX[0x12]);
      iStack_74 = unaff_EBP + -0x20;
      iStack_78 = 0x4a2018;
      FUN_0045e070();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_70 = (int *)0x4a2023;
      iStack_74 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x24) = &piStack_70;
      iStack_78 = 0x4a202f;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_74 = 0x4a203d;
      FUN_0044974c();
      iStack_74 = 0x4a2044;
      uVar4 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_70 = (int *)0x4a2060;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_70 = (int *)0x4a206b;
        FUN_00878dfb();
      }
      iVar3 = extraout_ECX[0x1a];
      *(uint *)(unaff_EBP + -0x18) = (extraout_ECX[0x15] + 1 == *(int *)(unaff_EBP + 0x14)) + 1;
      if (iVar3 == 0) {
        piStack_70 = (int *)0x4a208a;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x24) = extraout_ECX[0x1a];
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_70 = (int *)0x4a209f;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 8);
      FUN_004a270d();
      iStack_78 = (extraout_ECX[0x1f] - *(int *)(unaff_EBP + -0x18)) + *(int *)(unaff_EBP + 0xc);
      piStack_70 = *(int **)(unaff_EBP + -0x18);
      iStack_74 = (*(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + 0x18)) + -2;
      iVar3 = (**(code **)(*piVar5 + 0x8c))
                        (piVar5,*(int *)(unaff_EBP + 0x18) + 1 + *(int *)(unaff_EBP + -0x28));
      if (iVar3 < 0) {
        iStack_78 = 0x4a20e5;
        iStack_74 = iVar3;
        piStack_70 = piVar5;
        FUN_00878e09();
      }
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_70 = (int *)0x4a2104;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_70 = (int *)0x4a2121;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


