/* ptr_004ac73b - 0x004ac73b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004ac73b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00498b1f(unaff_EBP + -0x18,0);
  iVar1 = *(int *)(extraout_ECX + 0x54);
  iVar2 = *(int *)(unaff_EBP + 0xc);
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(extraout_ECX + 0x50);
    *(int *)(unaff_EBP + -0x28) = iVar3;
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    iVar1 = iVar1 + iVar3;
LAB_004ac787:
    *(int *)(unaff_EBP + -0x20) = iVar1;
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(extraout_ECX + 0x50);
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    iVar1 = iVar1 + iVar2;
    goto LAB_004ac787;
  }
  FUN_00817e25(unaff_EBP + -0x38,0);
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
  iVar1 = *(int *)(unaff_EBP + -0x38);
  iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
  iVar2 = FUN_004ad311(iVar1 - iVar2,*(int *)(unaff_EBP + -0x34) - iVar3);
  iVar1 = *(int *)(extraout_ECX + 0x40);
  if ((iVar1 == 0x65) && (iVar2 == 0x65)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if ((iVar1 != 0x66) || (*(undefined4 *)(unaff_EBP + -0x24) = 3, iVar2 != 0x66)) {
    *(undefined4 *)(unaff_EBP + -0x24) = 2;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(uint *)(unaff_EBP + -0x30) = (iVar1 == 0x69) + 5;
  iVar1 = *(int *)(extraout_ECX + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 < 2) {
    uVar6 = 7;
  }
  puVar4 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,uVar6);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar4);
  FUN_004125e6();
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    FUN_00403191(puVar4);
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
      iVar1 = unaff_EBP + -0x78;
LAB_004ac98d:
      iVar1 = FUN_00402bc3(iVar1);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
    }
  }
  else if (*(int *)(extraout_ECX + 0x54) == 1) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    FUN_00403191(puVar4);
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      iVar1 = unaff_EBP + -0x68;
      goto LAB_004ac98d;
    }
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c) + *(int *)(extraout_ECX + 0x4c);
  iVar1 = *(int *)(extraout_ECX + 0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  puVar4 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,((iVar1 < 2) - 1 & 0xfffffffb) + 9);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar4);
  piVar5 = *(int **)(unaff_EBP + -0x2c);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  iVar1 = *(int *)(unaff_EBP + -0x20);
  if (iVar2 < iVar1 - *(int *)(extraout_ECX + 0x4c)) {
    do {
      if (*(int *)(extraout_ECX + 0x54) == 0) {
        if (*(int *)(extraout_ECX + 0x6c) == 0) {
          puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
          *(undefined1 *)(unaff_EBP + -4) = 6;
        }
        else {
          puVar4 = &DAT_00980690;
        }
        FUN_00403191(puVar4);
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x18);
        }
        iVar1 = *piVar5;
        *(int **)(unaff_EBP + -0x2c) = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
          iVar1 = unaff_EBP + -0x68;
LAB_004acb53:
          iVar1 = FUN_00402bc3(iVar1);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
        }
      }
      else if (*(int *)(extraout_ECX + 0x54) == 1) {
        if (*(int *)(extraout_ECX + 0x6c) == 0) {
          puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
          *(undefined1 *)(unaff_EBP + -4) = 8;
        }
        else {
          puVar4 = &DAT_00980690;
        }
        FUN_00403191(puVar4);
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + -0x18);
        }
        iVar1 = *piVar5;
        *(int **)(unaff_EBP + -0x2c) = piVar5;
        iVar1 = (**(code **)(iVar1 + 0x80))
                          (piVar5,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar1 < 0) {
          FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          iVar1 = unaff_EBP + -0x78;
          goto LAB_004acb53;
        }
      }
      iVar1 = *(int *)(unaff_EBP + -0x20);
      iVar2 = *(int *)(extraout_ECX + 0x4c);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + iVar2;
    } while (*(int *)(unaff_EBP + -0x1c) < iVar1 - iVar2);
  }
  iVar2 = *(int *)(extraout_ECX + 0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar1 - *(int *)(extraout_ECX + 0x4c);
  if (iVar2 < 2) {
    uVar6 = 8;
  }
  else {
    uVar6 = *(undefined4 *)(unaff_EBP + -0x24);
  }
  puVar4 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,uVar6);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar4);
  piVar5 = *(int **)(unaff_EBP + -0x2c);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 10;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iVar1 = FUN_00402e32(unaff_EBP + -0x58,puVar4);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
      iVar1 = unaff_EBP + -0x68;
LAB_004acd4a:
      iVar1 = FUN_00402bc3(iVar1);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
    }
  }
  else if (*(int *)(extraout_ECX + 0x54) == 1) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iVar1 = FUN_00402e32(unaff_EBP + -0x48,puVar4);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar1 = *piVar5;
    *(int **)(unaff_EBP + -0x2c) = piVar5;
    iVar1 = (**(code **)(iVar1 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
      iVar1 = unaff_EBP + -0x78;
      goto LAB_004acd4a;
    }
  }
  if ((*(int *)(extraout_ECX + 0x3c) < 2) || (*(int *)(extraout_ECX + 0x68) != 0))
  goto LAB_004acf84;
  puVar4 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x30));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar4);
  piVar5 = *(int **)(unaff_EBP + -0x30);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (*(int *)(extraout_ECX + 0x54) == 1) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0040e53d();
  }
  else {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar1 = FUN_0040e48b();
  }
  *(uint *)(unaff_EBP + -0x1c) =
       (uint)(((*(int *)(extraout_ECX + 0x50) + *(int *)(extraout_ECX + 0x4c) * -2) - iVar1) *
             *(int *)(extraout_ECX + 0x38)) / (*(int *)(extraout_ECX + 0x3c) - 1U) +
       *(int *)(extraout_ECX + 0x4c) + *(int *)(unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iVar1 = FUN_00402e32(unaff_EBP + -0x48,puVar4);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
    iVar1 = (**(code **)(*piVar5 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar5,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x40) == 0) goto LAB_004acf84;
    iVar1 = unaff_EBP + -0x68;
  }
  else {
    if (*(int *)(extraout_ECX + 0x54) != 1) goto LAB_004acf84;
    if (*(int *)(extraout_ECX + 0x6c) == 0) {
      puVar4 = (undefined4 *)FUN_004031b7(0xff,3);
      *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 0x80;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
    }
    else {
      puVar4 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iVar1 = FUN_00402e32(unaff_EBP + -0x58,puVar4);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
    iVar1 = (**(code **)(*piVar5 + 0x80))
                      (piVar5,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar1 < 0) {
      FUN_00878e09(iVar1,piVar5,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x80) == 0) goto LAB_004acf84;
    iVar1 = unaff_EBP + -0x78;
  }
  iVar1 = FUN_00402bc3(iVar1);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
LAB_004acf84:
  piVar5 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  piVar5 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


