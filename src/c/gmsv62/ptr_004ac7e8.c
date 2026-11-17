/* ptr_004ac7e8 - 0x004ac7e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004ac7e8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int iVar5;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(uint *)(unaff_EBP + -0x30) = (param_1 == 0x69) + 5;
  iVar2 = *(int *)(unaff_EBX + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 < 2) {
    param_2 = 7;
  }
  puVar1 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,param_2);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar1);
  FUN_004125e6();
  if (*(int *)(unaff_EBX + 0x54) == 0) {
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,unaff_ESI);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    FUN_00403191(puVar1);
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = unaff_ESI;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
      iVar2 = unaff_EBP + -0x78;
LAB_004ac98d:
      iVar2 = FUN_00402bc3(iVar2);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
  }
  else if (*(int *)(unaff_EBX + 0x54) == 1) {
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,unaff_ESI);
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    FUN_00403191(puVar1);
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 5;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      iVar2 = unaff_EBP + -0x68;
      goto LAB_004ac98d;
    }
  }
  iVar5 = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBX + 0x4c);
  iVar2 = *(int *)(unaff_EBX + 0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  puVar1 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,((iVar2 < 2) - 1 & 0xfffffffb) + 9);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar1);
  piVar4 = *(int **)(unaff_EBP + -0x2c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar2 = *(int *)(unaff_EBP + -0x20);
  if (iVar5 < iVar2 - *(int *)(unaff_EBX + 0x4c)) {
    do {
      if (*(int *)(unaff_EBX + 0x54) == 0) {
        if (*(int *)(unaff_EBX + 0x6c) == 0) {
          puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
          *(undefined1 *)(unaff_EBP + -4) = 6;
        }
        else {
          puVar1 = &DAT_00980690;
        }
        FUN_00403191(puVar1);
        piVar4 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar4;
        *(int **)(unaff_EBP + -0x2c) = piVar4;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
          iVar2 = unaff_EBP + -0x68;
LAB_004acb53:
          iVar2 = FUN_00402bc3(iVar2);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
      }
      else if (*(int *)(unaff_EBX + 0x54) == 1) {
        if (*(int *)(unaff_EBX + 0x6c) == 0) {
          puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
          *(undefined1 *)(unaff_EBP + -4) = 8;
        }
        else {
          puVar1 = &DAT_00980690;
        }
        FUN_00403191(puVar1);
        piVar4 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (piVar4 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar4 = *(int **)(unaff_EBP + -0x18);
        }
        iVar2 = *piVar4;
        *(int **)(unaff_EBP + -0x2c) = piVar4;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar4,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
          *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
          iVar2 = unaff_EBP + -0x78;
          goto LAB_004acb53;
        }
      }
      iVar2 = *(int *)(unaff_EBP + -0x20);
      iVar5 = *(int *)(unaff_EBX + 0x4c);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + iVar5;
    } while (*(int *)(unaff_EBP + -0x1c) < iVar2 - iVar5);
  }
  iVar5 = *(int *)(unaff_EBX + 0x3c);
  *(int *)(unaff_EBP + -0x1c) = iVar2 - *(int *)(unaff_EBX + 0x4c);
  if (iVar5 < 2) {
    uVar3 = 8;
  }
  else {
    uVar3 = *(undefined4 *)(unaff_EBP + -0x24);
  }
  puVar1 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x2c,uVar3);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar1);
  piVar4 = *(int **)(unaff_EBP + -0x2c);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (*(int *)(unaff_EBX + 0x54) == 0) {
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 10;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iVar2 = FUN_00402e32(unaff_EBP + -0x58,puVar1);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xb;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef;
      iVar2 = unaff_EBP + -0x68;
LAB_004acd4a:
      iVar2 = FUN_00402bc3(iVar2);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
  }
  else if (*(int *)(unaff_EBX + 0x54) == 1) {
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iVar2 = FUN_00402e32(unaff_EBP + -0x48,puVar1);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar4 = *(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 0xd;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x18);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x2c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x2c),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
      iVar2 = unaff_EBP + -0x78;
      goto LAB_004acd4a;
    }
  }
  if ((*(int *)(unaff_EBX + 0x3c) < 2) || (*(int *)(unaff_EBX + 0x68) != 0)) goto LAB_004acf84;
  puVar1 = (undefined4 *)FUN_004ac37e(unaff_EBP + -0x30,*(undefined4 *)(unaff_EBP + -0x30));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
             (IBinding *)*puVar1);
  piVar4 = *(int **)(unaff_EBP + -0x30);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  if (*(int *)(unaff_EBX + 0x54) == 1) {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0040e53d();
  }
  else {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = FUN_0040e48b();
  }
  *(uint *)(unaff_EBP + -0x1c) =
       (uint)(((*(int *)(unaff_EBX + 0x50) + *(int *)(unaff_EBX + 0x4c) * -2) - iVar2) *
             *(int *)(unaff_EBX + 0x38)) / (*(int *)(unaff_EBX + 0x3c) - 1U) +
       *(int *)(unaff_EBX + 0x4c) + *(int *)(unaff_EBP + -0x28);
  if (*(int *)(unaff_EBX + 0x54) == 0) {
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    iVar2 = FUN_00402e32(unaff_EBP + -0x48,puVar1);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x18);
    iVar2 = (**(code **)(*piVar4 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x48),
                       *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x40) == 0) goto LAB_004acf84;
    iVar2 = unaff_EBP + -0x68;
  }
  else {
    if (*(int *)(unaff_EBX + 0x54) != 1) goto LAB_004acf84;
    if (*(int *)(unaff_EBX + 0x6c) == 0) {
      puVar1 = (undefined4 *)FUN_004031b7(0xff,3);
      *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 0x80;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
    }
    else {
      puVar1 = &DAT_00980690;
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iVar2 = FUN_00402e32(unaff_EBP + -0x58,puVar1);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x18);
    iVar2 = (**(code **)(*piVar4 + 0x80))
                      (piVar4,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if ((*(byte *)(unaff_EBP + -0x10) & 0x80) == 0) goto LAB_004acf84;
    iVar2 = unaff_EBP + -0x78;
  }
  iVar2 = FUN_00402bc3(iVar2);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
LAB_004acf84:
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


