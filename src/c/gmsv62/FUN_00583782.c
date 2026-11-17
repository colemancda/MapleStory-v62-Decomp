/* FUN_00583782 - 0x00583782 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00583782(void)

{
  char *pcVar1;
  char *pcVar2;
  IBinding *pIVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  char *extraout_ECX_05;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char *pcStack_338;
  undefined4 uStack_334;
  char *pcStack_330;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcVar1 = (char *)(extraout_ECX + 0x94);
  uStack_334 = 0x5837b1;
  pcStack_330 = pcVar1;
  uVar5 = FUN_00413367();
  uStack_334 = *(undefined4 *)(extraout_ECX + 0xa8);
  pcVar2 = (char *)(extraout_ECX + 0xa0);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  pcStack_338 = pcVar2;
  uVar6 = FUN_00413367();
  uVar5 = *(undefined4 *)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
  uVar6 = FUN_00413367(extraout_ECX + 0xac,uVar5);
  uVar5 = *(undefined4 *)(extraout_ECX + 0xc0);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
  iVar7 = FUN_00413367(extraout_ECX + 0xb8,uVar5);
  *(int *)(unaff_EBP + -0x10) = (*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x20) * 2) * 2;
  iVar9 = *(int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x10) = iVar7 + *(int *)(unaff_EBP + -0x24);
  if (_DAT_008ec350 <= (float)iVar9 - (float)*(int *)(unaff_EBP + -0x10) * _DAT_008ec354) {
    pcStack_330 = (char *)0x58382c;
    puVar8 = (undefined4 *)FUN_0045f1e3();
    *puVar8 = 1;
  }
  pcStack_330 = (char *)(extraout_ECX + 0xac);
  uStack_334 = 0x583844;
  uVar5 = FUN_00413367();
  uStack_334 = *(undefined4 *)(extraout_ECX + 0xc0);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  pcStack_338 = (char *)(extraout_ECX + 0xb8);
  uVar6 = FUN_00413367();
  uVar5 = *(undefined4 *)(extraout_ECX + 0x9c);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
  uVar6 = FUN_00413367(pcVar1,uVar5);
  uVar5 = *(undefined4 *)(extraout_ECX + 0xa8);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
  iVar7 = FUN_00413367(pcVar2,uVar5);
  *(int *)(unaff_EBP + -0x10) = (*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x20) * 2) * 2;
  iVar9 = *(int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x10) = iVar7 + *(int *)(unaff_EBP + -0x24);
  if (_DAT_008ec350 <= (float)iVar9 - (float)*(int *)(unaff_EBP + -0x10) * _DAT_008ec354) {
    pcStack_330 = (char *)0x5838b3;
    puVar8 = (undefined4 *)FUN_0045f1e3();
    *puVar8 = 2;
  }
  uStack_334 = 0x5838c5;
  pcStack_330 = pcVar2;
  uVar5 = FUN_00413367();
  uStack_334 = *(undefined4 *)(extraout_ECX + 0x9c);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
  pcStack_338 = pcVar1;
  uVar6 = FUN_00413367();
  uVar5 = *(undefined4 *)(extraout_ECX + 0xb4);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
  uVar6 = FUN_00413367(extraout_ECX + 0xac,uVar5);
  uVar5 = *(undefined4 *)(extraout_ECX + 0xc0);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
  iVar7 = FUN_00413367(extraout_ECX + 0xb8,uVar5);
  *(int *)(unaff_EBP + -0x10) = (*(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x20) * 2) * 2;
  iVar9 = *(int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x10) = iVar7 + *(int *)(unaff_EBP + -0x24);
  if (_DAT_008ec350 <= (float)iVar9 - (float)*(int *)(unaff_EBP + -0x10) * _DAT_008ec354) {
    pcStack_330 = (char *)0x58393a;
    puVar8 = (undefined4 *)FUN_0045f1e3();
    *puVar8 = 3;
  }
  pcStack_330 = (char *)(extraout_ECX + 0xb8);
  uStack_334 = 0x583952;
  uVar5 = FUN_00413367();
  uStack_334 = *(undefined4 *)(extraout_ECX + 0xa8);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  pcStack_338 = pcVar2;
  iVar9 = FUN_00413367();
  iVar7 = FUN_00413367(pcVar1,*(undefined4 *)(extraout_ECX + 0x9c));
  iVar10 = FUN_00413367(extraout_ECX + 0xac,*(undefined4 *)(extraout_ECX + 0xb4));
  *(int *)(unaff_EBP + -0x10) = (iVar9 + *(int *)(unaff_EBP + -0x10) * 2) * 2;
  iVar9 = *(int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x10) = iVar10 + iVar7;
  if (_DAT_008ec350 <= (float)iVar9 - (float)*(int *)(unaff_EBP + -0x10) * _DAT_008ec354) {
    pcStack_330 = (char *)0x5839b9;
    puVar8 = (undefined4 *)FUN_0045f1e3();
    *puVar8 = 4;
  }
  iVar9 = *(int *)(unaff_EBP + -0x28);
  if ((iVar9 == 0) || (*(int *)(iVar9 + -4) == 0)) {
    pcStack_330 = (char *)0x5839d7;
    puVar8 = (undefined4 *)FUN_0045f1e3();
    *puVar8 = 0;
    iVar9 = *(int *)(unaff_EBP + -0x28);
  }
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + -4);
  }
  pcStack_330 = (char *)(iVar9 * 0x40 + 0x14);
  uStack_334 = 0x16d;
  pcStack_338 = (char *)(unaff_EBP + -0x20);
  puVar8 = (undefined4 *)FUN_005828e1();
  pIVar3 = (IBinding *)*puVar8;
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x5b4);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x10) = this;
  pcStack_330 = (char *)0x583a12;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar3);
  FUN_00412600();
  pcStack_330 = (char *)0x0;
  uStack_334 = 0x583a28;
  FUN_004031b7();
  iVar9 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar9 == 0) {
    pcStack_330 = (char *)0x583a3a;
    FUN_00878dfb();
  }
  pcStack_330 = (char *)(unaff_EBP + -0x18);
  uStack_334 = 0x583a4e;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcStack_330 = (char *)0x583a5e;
  iVar9 = FUN_00402bc3();
  if (iVar9 < 0) {
    pcStack_330 = (char *)0x583a69;
    FUN_00878dfb();
  }
  iVar9 = *(int *)(unaff_EBP + -0x28);
  if (iVar9 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar9 + -4);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(uint *)(unaff_EBP + -0x5c) = (-(uint)(iVar7 != 1) & 0xfffffffe) - 1;
  do {
    if (iVar9 == 0) {
LAB_00584e33:
      pcStack_330 = (char *)0x584e39;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      pcStack_330 = (char *)(unaff_EBP + -0x4c);
      uStack_334 = 0x584e43;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584e4f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      pcStack_330 = (char *)0x584e59;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      pcStack_330 = (char *)(unaff_EBP + -0x3c);
      uStack_334 = 0x584e63;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584e6f;
        FUN_00878dfb();
      }
      iVar9 = **(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      if (iVar9 == 0) {
        pcStack_330 = (char *)0x584e85;
        FUN_00878dfb();
      }
      piVar4 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
      pcStack_338 = *(char **)(unaff_EBP + -0x4c);
      uStack_334 = *(undefined4 *)(unaff_EBP + -0x48);
      pcStack_330 = *(char **)(unaff_EBP + -0x44);
      iVar9 = (**(code **)(*piVar4 + 0x90))
                        (piVar4,0xfffffe7f,0xb1,*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30));
      if (iVar9 < 0) {
        FUN_00878e09(iVar9,piVar4,&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5d;
      iVar9 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar9 < 0) {
        FUN_00878dfb(iVar9);
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_00584ee4:
      iVar9 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar9 < 0) {
        FUN_00878dfb(iVar9);
      }
      piVar4 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00445a30();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    if (*(uint *)(iVar9 + -4) <= *(uint *)(unaff_EBP + -0x20)) {
      if ((iVar9 != 0) && (*(int *)(iVar9 + -4) == 1)) {
        pcStack_330 = (char *)0x584d83;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        pcStack_330 = (char *)(unaff_EBP + -0x4c);
        uStack_334 = 0x584d8d;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584d99;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        pcStack_330 = (char *)0x584da3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        pcStack_330 = (char *)(unaff_EBP + -0x3c);
        uStack_334 = 0x584dad;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584db9;
          FUN_00878dfb();
        }
        iVar9 = **(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x5c;
        if (iVar9 == 0) {
          pcStack_330 = (char *)0x584dcf;
          FUN_00878dfb();
        }
        piVar4 = (int *)**(undefined4 **)(unaff_EBP + -0x10);
        pcStack_338 = *(char **)(unaff_EBP + -0x4c);
        uStack_334 = *(undefined4 *)(unaff_EBP + -0x48);
        pcStack_330 = *(char **)(unaff_EBP + -0x44);
        iVar9 = (**(code **)(*piVar4 + 0x90))
                          (piVar4,0xfffffe7f,0xbe,*(undefined4 *)(unaff_EBP + -0x3c),
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30));
        if (iVar9 < 0) {
          FUN_00878e09(iVar9,piVar4,&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x5b;
        iVar9 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar9 < 0) {
          FUN_00878dfb(iVar9);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        goto LAB_00584ee4;
      }
      goto LAB_00584e33;
    }
    pcStack_330 = (char *)0x583ab6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pcStack_330 = (char *)0x583ac6;
    FUN_00403191();
    pcStack_330 = (char *)(unaff_EBP + -0x318);
    pcStack_338 = (char *)(unaff_EBP + -0x8c);
    uStack_334 = 0x1f;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_334 = 0x583af3;
    uStack_334 = FUN_00449749();
    *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
    pcStack_338 = extraout_ECX_00;
    FUN_00679e4e(&pcStack_338,0x1080);
    iVar9 = *(int *)(unaff_EBP + -0x20) * 0x46 + *(int *)(unaff_EBP + -0x5c);
    *(int *)(unaff_EBP + -0x1c) = iVar9;
    iVar9 = iVar9 + 10;
    uVar5 = 0xf;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004115d9(0xf,iVar9);
    FUN_00448e3a(uVar5,iVar9);
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pcStack_330 = (char *)0x583b49;
    iVar9 = FUN_00402bc3();
    if (iVar9 < 0) {
      pcStack_330 = (char *)0x583b54;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    pcStack_330 = (char *)0x583b64;
    iVar9 = FUN_00402bc3();
    if (iVar9 < 0) {
      pcStack_330 = (char *)0x583b6f;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    pcStack_330 = &DAT_00978474;
    uStack_334 = 0x583b82;
    FUN_00414edd();
    iVar9 = *(int *)(*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x20) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar9 == 0) {
      pcStack_330 = (char *)0x584aa5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x148));
      pcStack_330 = (char *)(unaff_EBP + -0x148);
      uStack_334 = 0x584ab2;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584abe;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      pcStack_330 = (char *)0x584acb;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x128));
      pcStack_330 = (char *)(unaff_EBP + -0x128);
      uStack_334 = 0x584ad8;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584ae4;
        FUN_00878dfb();
      }
      pcStack_330 = (char *)(unaff_EBP + -0x128);
      pcStack_338 = (char *)(unaff_EBP + -0x98);
      uStack_334 = 0x1f;
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      uStack_334 = 0x584b11;
      uStack_334 = FUN_00449749();
      *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
      FUN_00679e4e(&pcStack_338,0x1091);
      iVar9 = *(int *)(unaff_EBP + -0x1c) + 10;
      uVar5 = 0x8a;
      *(undefined1 *)(unaff_EBP + -4) = 0x51;
      FUN_004115d9(0x8a,iVar9);
      FUN_00448e3a(uVar5,iVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      if (*(int **)(unaff_EBP + -0x98) != (int *)0x0) {
        pcStack_330 = (char *)0x584b58;
        (**(code **)(**(int **)(unaff_EBP + -0x98) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      pcStack_330 = (char *)0x584b68;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584b73;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      pcStack_330 = (char *)0x584b83;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584b8e;
        FUN_00878dfb();
      }
      pcStack_330 = (char *)0x584b97;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x188));
      pcStack_330 = (char *)(unaff_EBP + -0x188);
      uStack_334 = 0x584ba4;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584bb0;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      pcStack_330 = (char *)0x584bbd;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x168));
      pcStack_330 = (char *)(unaff_EBP + -0x168);
      uStack_334 = 0x584bca;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584bd6;
        FUN_00878dfb();
      }
      pcStack_330 = (char *)(unaff_EBP + -0x168);
      pcStack_338 = (char *)(unaff_EBP + -0xa0);
      uStack_334 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      uStack_334 = 0x584c03;
      uStack_334 = FUN_00449749();
      *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
      FUN_00679e4e(&pcStack_338,0x1092);
      iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x1e;
      uVar5 = 0xf;
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      FUN_004115d9(0xf,iVar9);
      FUN_00448e3a(uVar5,iVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      if (*(int **)(unaff_EBP + -0xa0) != (int *)0x0) {
        pcStack_330 = (char *)0x584c47;
        (**(code **)(**(int **)(unaff_EBP + -0xa0) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      pcStack_330 = (char *)0x584c57;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584c62;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      pcStack_330 = (char *)0x584c72;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584c7d;
        FUN_00878dfb();
      }
      pcStack_330 = (char *)0x584c83;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      pcStack_330 = (char *)(unaff_EBP + -0x3c);
      uStack_334 = 0x584c8d;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584c99;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      pcStack_330 = (char *)0x584ca3;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      pcStack_330 = (char *)(unaff_EBP + -0x4c);
      uStack_334 = 0x584cad;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584cb9;
        FUN_00878dfb();
      }
      pcStack_330 = (char *)(unaff_EBP + -0x4c);
      pcStack_338 = (char *)(unaff_EBP + -0xa8);
      uStack_334 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      uStack_334 = 0x584ce0;
      uStack_334 = FUN_00449749();
      *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
      pcStack_338 = extraout_ECX_05;
      FUN_00679e4e(&pcStack_338,0x1093);
      iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
      uVar5 = 0xf;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      FUN_004115d9(0xf,iVar9);
      FUN_00448e3a(uVar5,iVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      if (*(int **)(unaff_EBP + -0xa8) != (int *)0x0) {
        pcStack_330 = (char *)0x584d24;
        (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      pcStack_330 = (char *)0x584d31;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (char *)0x584d3c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
LAB_00584d43:
      pcStack_330 = (undefined1 *)0x584d49;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_330 = (undefined1 *)0x584d54;
        FUN_00878dfb();
      }
    }
    else {
      if (iVar9 == 1) {
        pcStack_330 = (char *)(unaff_EBP + -0x70);
        uStack_334 = 0x584737;
        uVar5 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
        pcStack_330 = (char *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_334 = 0x58474b;
        uVar5 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
        pcStack_330 = (char *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uStack_334 = 0x58475f;
        puVar8 = (undefined4 *)FUN_00679d22();
        pcStack_330 = (char *)**(undefined4 **)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uStack_334 = *puVar8;
        pcStack_338 = s__s___s__s__00965870;
        FUN_00434e21(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        pcStack_330 = (char *)0x5847b0;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        pcStack_330 = (char *)0x5847c0;
        FUN_00403191();
        pcStack_330 = (char *)(unaff_EBP + -0x2f8);
        pcStack_338 = (char *)(unaff_EBP + -0x78);
        uStack_334 = 0x1f;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uStack_334 = 0x5847ea;
        uStack_334 = FUN_00449749();
        pcStack_338 = (char *)0x5847f3;
        uVar5 = FUN_00449713();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00448a17(uVar5);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 10;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        uVar5 = 0x8a;
        FUN_004115d9(0x8a,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0x78) != (int *)0x0) {
          pcStack_330 = (char *)0x58482f;
          (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        pcStack_330 = (char *)0x58483f;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58484a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x58485a;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584865;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x584871;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        pcStack_330 = (char *)0x584881;
        FUN_00403191();
        pcStack_330 = (char *)(unaff_EBP + -0x298);
        pcStack_338 = (char *)(unaff_EBP + -0x80);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        uStack_334 = 0x5848ab;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x1081);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x1e;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
          pcStack_330 = (char *)0x5848ec;
          (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        pcStack_330 = (char *)0x5848fc;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584907;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x584917;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584922;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x58492e;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        pcStack_330 = (char *)0x58493e;
        FUN_00403191();
        pcStack_330 = (char *)(unaff_EBP + -0x2c8);
        pcStack_338 = (char *)(unaff_EBP + -0x88);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uStack_334 = 0x58496b;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x1082);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
          pcStack_330 = (char *)0x5849af;
          (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        pcStack_330 = (char *)0x5849bf;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5849ca;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x5849da;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5849e5;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x5849f1;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        pcStack_330 = (char *)0x584a01;
        FUN_00403191();
        pcStack_330 = (char *)(unaff_EBP + -0x308);
        pcStack_338 = (char *)(unaff_EBP + -0x90);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uStack_334 = 0x584a2e;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        pcStack_338 = extraout_ECX_04;
        FUN_00679e4e(&pcStack_338,0x1083);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x3c;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        if (*(int **)(unaff_EBP + -0x90) != (int *)0x0) {
          pcStack_330 = (char *)0x584a72;
          (**(code **)(**(int **)(unaff_EBP + -0x90) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        pcStack_330 = (char *)0x584a82;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584a8d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
      if (iVar9 == 2) {
        pcStack_330 = (char *)0x58438f;
        VariantInit((VARIANTARG *)(unaff_EBP + -600));
        pcStack_330 = (char *)(unaff_EBP + -600);
        uStack_334 = 0x58439c;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5843a8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        pcStack_330 = (char *)0x5843b5;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1b8));
        pcStack_330 = (char *)(unaff_EBP + -0x1b8);
        uStack_334 = 0x5843c2;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5843ce;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x1b8);
        pcStack_338 = (char *)(unaff_EBP + -0x9c);
        uStack_334 = 0x1f;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        uStack_334 = 0x5843fb;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x16);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 10;
        uVar5 = 0x8a;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_004115d9(0x8a,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int **)(unaff_EBP + -0x9c) != (int *)0x0) {
          pcStack_330 = (char *)0x58443f;
          (**(code **)(**(int **)(unaff_EBP + -0x9c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        pcStack_330 = (char *)0x58444f;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58445a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x58446a;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584475;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x58447e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x278));
        pcStack_330 = (char *)(unaff_EBP + -0x278);
        uStack_334 = 0x58448b;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584497;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        pcStack_330 = (char *)0x5844a4;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1d8));
        pcStack_330 = (char *)(unaff_EBP + -0x1d8);
        uStack_334 = 0x5844b1;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5844bd;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x1d8);
        pcStack_338 = (char *)(unaff_EBP + -0x84);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        uStack_334 = 0x5844ea;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x1086);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x1e;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (*(int **)(unaff_EBP + -0x84) != (int *)0x0) {
          pcStack_330 = (char *)0x58452e;
          (**(code **)(**(int **)(unaff_EBP + -0x84) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        pcStack_330 = (char *)0x58453e;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584549;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x584559;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584564;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x58456d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xd8));
        pcStack_330 = (char *)(unaff_EBP + -0xd8);
        uStack_334 = 0x58457a;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584586;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        pcStack_330 = (char *)0x584593;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x268));
        pcStack_330 = (char *)(unaff_EBP + -0x268);
        uStack_334 = 0x5845a0;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5845ac;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x268);
        pcStack_338 = (char *)(unaff_EBP + -0x54);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        uStack_334 = 0x5845d6;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x1087);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
          pcStack_330 = (char *)0x584617;
          (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        pcStack_330 = (char *)0x584627;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584632;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x584642;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58464d;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x584656;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x108));
        pcStack_330 = (char *)(unaff_EBP + -0x108);
        uStack_334 = 0x584663;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58466f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        pcStack_330 = (char *)0x58467c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe8));
        pcStack_330 = (char *)(unaff_EBP + -0xe8);
        uStack_334 = 0x584689;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584695;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0xe8);
        pcStack_338 = (char *)(unaff_EBP + -0x58);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        uStack_334 = 0x5846bf;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        pcStack_338 = extraout_ECX_03;
        FUN_00679e4e(&pcStack_338,0x1088);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x3c;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        if (*(int **)(unaff_EBP + -0x58) != (int *)0x0) {
          pcStack_330 = (char *)0x584700;
          (**(code **)(**(int **)(unaff_EBP + -0x58) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        pcStack_330 = (char *)0x584710;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58471b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
      if (iVar9 == 3) {
        pcStack_330 = (char *)(unaff_EBP + -0x6c);
        uStack_334 = 0x583f6b;
        uVar5 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
        pcStack_330 = (char *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        uStack_334 = 0x583f82;
        uVar5 = FUN_00679d22();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
        pcStack_330 = (char *)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        uStack_334 = 0x583f96;
        puVar8 = (undefined4 *)FUN_00679d22();
        pcStack_330 = (char *)**(undefined4 **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        uStack_334 = *puVar8;
        pcStack_338 = s__s___s__s__00965870;
        FUN_00434e21(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00414ebb();
        pcStack_330 = (char *)0x583fe7;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1e8));
        pcStack_330 = (char *)(unaff_EBP + -0x1e8);
        uStack_334 = 0x583ff4;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584000;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        pcStack_330 = (char *)0x58400d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x138));
        pcStack_330 = (char *)(unaff_EBP + -0x138);
        uStack_334 = 0x58401a;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584026;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x138);
        pcStack_338 = (char *)(unaff_EBP + -0x94);
        uStack_334 = 0x1f;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        uStack_334 = 0x584053;
        uStack_334 = FUN_00449749();
        pcStack_338 = (char *)0x58405c;
        uVar5 = FUN_00449713();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00448a17(uVar5);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 10;
        uVar5 = 0x8a;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        FUN_004115d9(0x8a,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        if (*(int **)(unaff_EBP + -0x94) != (int *)0x0) {
          pcStack_330 = (char *)0x58409b;
          (**(code **)(**(int **)(unaff_EBP + -0x94) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        pcStack_330 = (char *)0x5840ab;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5840b6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x5840c6;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5840d1;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x5840da;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1f8));
        pcStack_330 = (char *)(unaff_EBP + -0x1f8);
        uStack_334 = 0x5840e7;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5840f3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        pcStack_330 = (char *)0x584100;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x158));
        pcStack_330 = (char *)(unaff_EBP + -0x158);
        uStack_334 = 0x58410d;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584119;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x158);
        pcStack_338 = (char *)(unaff_EBP + -0x50);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        uStack_334 = 0x584143;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x1089);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x1e;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x35;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
          pcStack_330 = (char *)0x584184;
          (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        pcStack_330 = (char *)0x584194;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58419f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x5841af;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5841ba;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x5841c3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x218));
        pcStack_330 = (char *)(unaff_EBP + -0x218);
        uStack_334 = 0x5841d0;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5841dc;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        pcStack_330 = (char *)0x5841e9;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x178));
        pcStack_330 = (char *)(unaff_EBP + -0x178);
        uStack_334 = 0x5841f6;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584202;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x178);
        pcStack_338 = (char *)(unaff_EBP + -0xb4);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        uStack_334 = 0x58422f;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x108a);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int **)(unaff_EBP + -0xb4) != (int *)0x0) {
          pcStack_330 = (char *)0x584273;
          (**(code **)(**(int **)(unaff_EBP + -0xb4) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x37;
        pcStack_330 = (char *)0x584283;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x58428e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x58429e;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5842a9;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x5842b2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x238));
        pcStack_330 = (char *)(unaff_EBP + -0x238);
        uStack_334 = 0x5842bf;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5842cb;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        pcStack_330 = (char *)0x5842d8;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x198));
        pcStack_330 = (char *)(unaff_EBP + -0x198);
        uStack_334 = 0x5842e5;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x5842f1;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x198);
        pcStack_338 = (char *)(unaff_EBP + -0x7c);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        uStack_334 = 0x58431b;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        pcStack_338 = extraout_ECX_02;
        FUN_00679e4e(&pcStack_338,0x108b);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x3c;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (*(int **)(unaff_EBP + -0x7c) != (int *)0x0) {
          pcStack_330 = (char *)0x58435c;
          (**(code **)(**(int **)(unaff_EBP + -0x7c) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        pcStack_330 = (char *)0x58436c;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x584377;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
      if (iVar9 == 4) {
        pcStack_330 = (char *)0x583bbd;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1a8));
        pcStack_330 = (char *)(unaff_EBP + -0x1a8);
        uStack_334 = 0x583bca;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583bd6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        pcStack_330 = (char *)0x583be3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x1c8));
        pcStack_330 = (char *)(unaff_EBP + -0x1c8);
        uStack_334 = 0x583bf0;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583bfc;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x1c8);
        pcStack_338 = (char *)(unaff_EBP + -0x74);
        uStack_334 = 0x1f;
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        uStack_334 = 0x583c26;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x18);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 10;
        uVar5 = 0x8a;
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        FUN_004115d9(0x8a,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        if (*(int **)(unaff_EBP + -0x74) != (int *)0x0) {
          pcStack_330 = (char *)0x583c67;
          (**(code **)(**(int **)(unaff_EBP + -0x74) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        pcStack_330 = (char *)0x583c77;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583c82;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x583c92;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583c9d;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x583ca6;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x208));
        pcStack_330 = (char *)(unaff_EBP + -0x208);
        uStack_334 = 0x583cb3;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583cbf;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        pcStack_330 = (char *)0x583ccc;
        VariantInit((VARIANTARG *)(unaff_EBP + -200));
        pcStack_330 = (char *)(unaff_EBP + -200);
        uStack_334 = 0x583cd9;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583ce5;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -200);
        pcStack_338 = (char *)(unaff_EBP + -0xb0);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        uStack_334 = 0x583d12;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x108e);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x1e;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        if (*(int **)(unaff_EBP + -0xb0) != (int *)0x0) {
          pcStack_330 = (char *)0x583d56;
          (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        pcStack_330 = (char *)0x583d66;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583d71;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x583d81;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583d8c;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x583d95;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x248));
        pcStack_330 = (char *)(unaff_EBP + -0x248);
        uStack_334 = 0x583da2;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583dae;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        pcStack_330 = (char *)0x583dbb;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xf8));
        pcStack_330 = (char *)(unaff_EBP + -0xf8);
        uStack_334 = 0x583dc8;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583dd4;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0xf8);
        pcStack_338 = (char *)(unaff_EBP + -0xb8);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        uStack_334 = 0x583e01;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        FUN_00679e4e(&pcStack_338,0x108f);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x2d;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (*(int **)(unaff_EBP + -0xb8) != (int *)0x0) {
          pcStack_330 = (char *)0x583e45;
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        pcStack_330 = (char *)0x583e55;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583e60;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_330 = (char *)0x583e70;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583e7b;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)0x583e84;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x228));
        pcStack_330 = (char *)(unaff_EBP + -0x228);
        uStack_334 = 0x583e91;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583e9d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        pcStack_330 = (char *)0x583eaa;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x118));
        pcStack_330 = (char *)(unaff_EBP + -0x118);
        uStack_334 = 0x583eb7;
        iVar9 = FUN_00402e32();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583ec3;
          FUN_00878dfb();
        }
        pcStack_330 = (char *)(unaff_EBP + -0x118);
        pcStack_338 = (char *)(unaff_EBP + -0xac);
        uStack_334 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        uStack_334 = 0x583ef0;
        uStack_334 = FUN_00449749();
        *(char ***)(unaff_EBP + -0x14) = &pcStack_338;
        pcStack_338 = extraout_ECX_01;
        FUN_00679e4e(&pcStack_338,0x1090);
        iVar9 = *(int *)(unaff_EBP + -0x1c) + 0x3c;
        uVar5 = 0xf;
        *(undefined1 *)(unaff_EBP + -4) = 0x4d;
        FUN_004115d9(0xf,iVar9);
        FUN_00448e3a(uVar5,iVar9);
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        if (*(int **)(unaff_EBP + -0xac) != (int *)0x0) {
          pcStack_330 = (char *)0x583f34;
          (**(code **)(**(int **)(unaff_EBP + -0xac) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        pcStack_330 = (char *)0x583f44;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          pcStack_330 = (char *)0x583f4f;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        goto LAB_00584d43;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    iVar9 = *(int *)(unaff_EBP + -0x28);
  } while( true );
}


