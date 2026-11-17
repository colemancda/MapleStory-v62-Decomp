/* FUN_004319eb - 0x004319eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004319eb(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  uint uVar7;
  int iStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *local_64;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x48);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (-1 < *(int *)(unaff_EBP + 8) - iVar3) {
    *(int *)(extraout_ECX + 0x48) = *(int *)(extraout_ECX + 0x34) + iVar3;
    if (**(int **)(extraout_ECX + 0x54) != 0) {
      uVar6 = 1;
      goto LAB_004320d2;
    }
    if ((*(int **)(extraout_ECX + 0x54))[1] == 0) {
      iVar3 = *(int *)(extraout_ECX + 0x24);
      *(int *)(unaff_EBP + -0x18) = *(int *)(extraout_ECX + 0x14) - *(int *)(extraout_ECX + 0xc);
      *(int *)(unaff_EBP + -0x28) = *(int *)(extraout_ECX + 0x18) - *(int *)(extraout_ECX + 0x10);
      iVar5 = *(int *)(extraout_ECX + 0x1c);
      uVar7 = iVar3 - iVar5;
      *(int *)(unaff_EBP + -0x24) = iVar5;
      if (uVar7 == 0) {
        *(int *)(unaff_EBP + -0x14) = iVar5;
      }
      else {
        _local_64 = CONCAT44(0x431a59,local_64);
        uVar1 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x14) = uVar1 % uVar7 + *(int *)(unaff_EBP + -0x24);
      }
      iVar3 = *(int *)(extraout_ECX + 0x20);
      uVar7 = *(int *)(extraout_ECX + 0x28) - iVar3;
      *(int *)(unaff_EBP + -0x24) = iVar3;
      if (uVar7 == 0) {
        *(int *)(unaff_EBP + -0x24) = iVar3;
      }
      else {
        _local_64 = CONCAT44(0x431a7f,local_64);
        uVar1 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x24) = uVar1 % uVar7 + *(int *)(unaff_EBP + -0x24);
      }
      iVar3 = *(int *)(extraout_ECX + 0x40);
      if (iVar3 == 0) {
        _local_64 = CONCAT44(0x431ac0,local_64);
        uVar7 = FUN_004133f0();
        *(uint *)(unaff_EBP + -0x1c) = uVar7 % 0x168;
      }
      else {
        iVar5 = *(int *)(extraout_ECX + 0x4c);
        *(int *)(unaff_EBP + -0x1c) = iVar5;
        *(int *)(extraout_ECX + 0x4c) = (iVar5 + 0x168 + iVar3) % 0x168;
      }
      iVar3 = *(int *)(extraout_ECX + 0x3c);
      *(double *)(unaff_EBP + -0x3c) = (double)*(int *)(unaff_EBP + -0x1c) * _DAT_008e8a88;
      if (iVar3 == 0) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          uVar7 = 0;
        }
        else {
          _local_64 = CONCAT44(0x431b20,local_64);
          uVar7 = FUN_004133f0();
          uVar7 = uVar7 % *(uint *)(unaff_EBP + -0x18);
        }
        *(uint *)(unaff_EBP + -0x1c) = uVar7 + *(int *)(extraout_ECX + 0xc);
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          uVar7 = 0;
        }
        else {
          _local_64 = CONCAT44(0x431b3b,local_64);
          uVar7 = FUN_004133f0();
          uVar7 = uVar7 % *(uint *)(unaff_EBP + -0x28);
        }
        iVar3 = *(int *)(extraout_ECX + 0x10) + uVar7;
      }
      else {
        *(double *)(unaff_EBP + -0x34) = (double)*(int *)(unaff_EBP + -0x14);
        _local_64 = *(undefined8 *)(unaff_EBP + -0x3c);
        iStack_68 = 0x431af0;
        FUN_0087ae74();
        iStack_68 = 0x431af8;
        uVar2 = __ftol();
        _local_64 = *(undefined8 *)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
        iStack_68 = 0x431b06;
        FUN_0087adc4();
        _local_64 = CONCAT44(0x431b10,local_64);
        iVar3 = __ftol();
      }
      iVar5 = *(int *)(extraout_ECX + 0x3c);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar5 != 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 10;
      }
      _local_64 = 0xff;
      if (*(int *)(extraout_ECX + 0x38) == 0) {
        iStack_68 = 0x431bf2;
        FUN_00424e27();
        iStack_68 = 0x431bf9;
        iStack_68 = FUN_004320e3();
        iStack_68 = iStack_68 + *(int *)(extraout_ECX + 0x2c);
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_6c;
        iStack_70 = 0;
        iStack_74 = 0x431c09;
        uStack_6c = extraout_ECX_01;
        FUN_00424e0a();
        *(undefined4 *)(unaff_EBP + -4) = 3;
        iStack_70 = 0x431c18;
        FUN_00424df4();
        iStack_70 = 0x431c1f;
        iVar5 = FUN_00404abb();
        iStack_70 = iVar5 + *(int *)(unaff_EBP + -0x18) + iVar3;
        iStack_74 = 0x431c2d;
        FUN_00424df4();
        iStack_74 = 0x431c34;
        iStack_74 = FUN_00404a94();
        iStack_74 = iStack_74 + *(int *)(unaff_EBP + -0x1c);
        *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_78;
        iStack_7c = 0;
        uStack_80 = 0x431c44;
        FUN_00424dd7();
        iStack_7c = 0;
        uStack_80 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00434401();
        uStack_80 = FUN_0042517f();
        FUN_00437287();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_80;
        FUN_00424dbc();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        piVar4 = (int *)FUN_0042e5bf();
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 5;
      }
      else {
        iStack_68 = 0x431b6f;
        FUN_00424e27();
        iStack_68 = 0x431b76;
        iStack_68 = FUN_004320e3();
        iStack_68 = iStack_68 + *(int *)(extraout_ECX + 0x2c);
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_6c;
        iStack_70 = 0;
        iStack_74 = 0x431b86;
        uStack_6c = extraout_ECX_00;
        FUN_00424e0a();
        iStack_70 = *(int *)(unaff_EBP + -0x18) + iVar3;
        iStack_74 = *(int *)(unaff_EBP + -0x1c);
        iStack_7c = extraout_ECX + 4;
        *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_78;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_80 = 0x431ba1;
        FUN_00433bdf();
        iStack_7c = 0;
        uStack_80 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00434401();
        uStack_80 = FUN_0042517f();
        FUN_00437287();
        *(undefined4 **)(unaff_EBP + -0x28) = &uStack_80;
        FUN_00424dbc();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar4 = (int *)FUN_0042e5bf();
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined4 *)(unaff_EBP + -4) = 2;
      }
      piVar4 = (int *)*piVar4;
      *(int **)(unaff_EBP + 8) = piVar4;
      if (piVar4 != (int *)0x0) {
        _local_64 = CONCAT44(piVar4,0x431c9a);
        (**(code **)(*piVar4 + 4))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 8;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        piVar4 = *(int **)(unaff_EBP + -0x2c);
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        if (piVar4 != (int *)0x0) {
          _local_64 = CONCAT44(piVar4,0x431cb8);
          (**(code **)(*piVar4 + 8))();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
         (piVar4 = *(int **)(unaff_EBP + -0x30), piVar4 != (int *)0x0)) {
        _local_64 = CONCAT44(piVar4,0x431cd2);
        (**(code **)(*piVar4 + 8))();
      }
      if (*(int *)(extraout_ECX + 0x44) == 0) {
        iVar3 = *(int *)(extraout_ECX + 0x54);
        if (*(int *)(unaff_EBP + 8) == 0) {
          _local_64 = 0x8000400300431ce9;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        _local_64 = CONCAT44(*(undefined4 *)(iVar3 + 8),piVar4);
        iStack_68 = 0x431cf9;
        iVar3 = (**(code **)(*piVar4 + 0xd8))();
        if (iVar3 < 0) {
          _local_64 = CONCAT44(&DAT_00963df8,piVar4);
          uStack_6c = 0x431d09;
          iStack_68 = iVar3;
          FUN_00878e09();
        }
      }
      if (*(int *)(extraout_ECX + 0x3c) == 0) {
        _local_64 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x4c),0x431e0f);
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        _local_64 = CONCAT44(&DAT_00980690,unaff_EBP + -0x4c);
        iStack_68 = 0x431e1d;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          _local_64 = CONCAT44(iVar3,0x431e29);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int *)(unaff_EBP + 8) == 0) {
          _local_64 = 0x8000400300431e3d;
          FUN_00878dfb();
        }
        _local_64 = CONCAT44(0x431e45,local_64);
        iVar3 = FUN_0042a378();
        _local_64 = CONCAT44(3,iVar3 + *(int *)(extraout_ECX + 0x30));
        iStack_68 = 0x431e53;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (*(int *)(unaff_EBP + 8) == 0) {
          _local_64 = 0x8000400300431e62;
          FUN_00878dfb();
        }
        _local_64 = CONCAT44(0x431e6a,local_64);
        iVar5 = FUN_0043210d();
        iVar3 = *(int *)(unaff_EBP + -0x14);
        if (iVar5 != 0) {
          iVar3 = -iVar3;
        }
        *(int *)(unaff_EBP + -0x28) = iVar3;
        piVar4 = *(int **)(unaff_EBP + 8);
        if (piVar4 == (int *)0x0) {
          _local_64 = 0x8000400300431e83;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x4c);
        iStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
        iVar3 = *piVar4;
        _local_64 = *(undefined8 *)(unaff_EBP + -0x44);
        uStack_80 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_7c = *(undefined4 *)(unaff_EBP + -0x5c);
        uStack_78 = *(undefined4 *)(unaff_EBP + -0x58);
        iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
        *(int **)(unaff_EBP + -0x1c) = piVar4;
        iStack_70 = *(undefined4 *)(unaff_EBP + -0x50);
        iVar3 = (**(code **)(iVar3 + 0x94))();
        if (iVar3 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      else {
        _local_64 = CONCAT44((VARIANTARG *)(unaff_EBP + -0x4c),0x431d1c);
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        _local_64 = CONCAT44(&DAT_00980690,unaff_EBP + -0x4c);
        iStack_68 = 0x431d2a;
        iVar3 = FUN_00402e32();
        if (iVar3 < 0) {
          _local_64 = CONCAT44(iVar3,0x431d36);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + 8) == 0) {
          _local_64 = 0x8000400300431d49;
          FUN_00878dfb();
        }
        _local_64 = CONCAT44(0x431d51,local_64);
        iVar3 = FUN_0042a378();
        _local_64 = CONCAT44(3,iVar3 + *(int *)(extraout_ECX + 0x30));
        iStack_68 = 0x431d5f;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + 8) == 0) {
          _local_64 = 0x8000400300431d72;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        *(double *)(unaff_EBP + -0x20) = (double)*(int *)(unaff_EBP + -0x24);
        *(int **)(unaff_EBP + -0x28) = piVar4;
        _local_64 = *(undefined8 *)(unaff_EBP + -0x3c);
        iStack_68 = 0x431d8b;
        FUN_0087adc4();
        iStack_68 = 0x431d93;
        uVar2 = __ftol();
        _local_64 = *(undefined8 *)(unaff_EBP + -0x3c);
        *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
        iStack_68 = 0x431da1;
        FUN_0087ae74();
        iStack_68 = 0x431da9;
        __ftol();
        uStack_6c = *(undefined4 *)(unaff_EBP + -0x4c);
        iStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
        _local_64 = *(undefined8 *)(unaff_EBP + -0x44);
        uStack_80 = *(undefined4 *)(unaff_EBP + -0x24);
        iStack_7c = *(undefined4 *)(unaff_EBP + -0x5c);
        uStack_78 = *(undefined4 *)(unaff_EBP + -0x58);
        iStack_74 = *(undefined4 *)(unaff_EBP + -0x54);
        iStack_70 = *(undefined4 *)(unaff_EBP + -0x50);
        iVar3 = (**(code **)(*piVar4 + 0x94))();
        if (iVar3 < 0) {
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb();
      }
      FUN_0042a378();
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb();
      }
      piVar4 = (int *)FUN_004113e5();
      iVar3 = *piVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar3 == 0) {
        FUN_00878dfb();
      }
      iVar3 = *(int *)*piVar4;
      *(int **)(unaff_EBP + -0x28) = (int *)*piVar4;
      iVar3 = (**(code **)(iVar3 + 0x90))();
      if (iVar3 < 0) {
        iStack_bc = *(undefined4 *)(unaff_EBP + -0x28);
        uStack_c4 = 0x431faa;
        iStack_c0 = iVar3;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        iStack_bc = 0x431fbb;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_bc = 0x431fc8;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_bc = 0x431fd3;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_bc = 0x431fe0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_bc = 0x431feb;
        FUN_00878dfb();
      }
      iStack_bc = 0x431ff5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_bc = unaff_EBP + -0x4c;
      iStack_c0 = 0x432004;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_bc = 0x432010;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_bc = 0x43201d;
      FUN_00403191();
      piStack_dc = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (piStack_dc == (int *)0x0) {
        iStack_bc = 0x432032;
        FUN_00878dfb();
        piStack_dc = *(int **)(unaff_EBP + 8);
      }
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_c0 = *(undefined4 *)(unaff_EBP + -0x48);
      iVar3 = *piStack_dc;
      iStack_bc = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_d4 = *(undefined4 *)(unaff_EBP + -0x5c);
      uStack_d0 = *(undefined4 *)(unaff_EBP + -0x58);
      uStack_cc = *(undefined4 *)(unaff_EBP + -0x54);
      uStack_d8 = 0x20;
      *(int **)(unaff_EBP + -0x28) = piStack_dc;
      uStack_c8 = *(undefined4 *)(unaff_EBP + -0x50);
      piStack_e0 = (int *)0x43205b;
      iVar3 = (**(code **)(iVar3 + 0x110))();
      if (iVar3 < 0) {
        piStack_e0 = (int *)&DAT_00963df8;
        iStack_e4 = *(int *)(unaff_EBP + -0x28);
        FUN_00878e09(iVar3);
      }
      piStack_e0 = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_e4 = 0x43207a;
      piStack_e0 = (int *)FUN_00402bc3();
      if ((int)piStack_e0 < 0) {
        iStack_e4 = 0x432085;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_e4 = 0x432092;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_e4 = 0x43209d;
        piStack_e0 = (int *)iVar3;
        FUN_00878dfb();
        piStack_e0 = (int *)extraout_ECX_02;
      }
      uVar2 = *(undefined4 *)(extraout_ECX + 0x30);
      *(int **)(unaff_EBP + -0x28) = &iStack_e4;
      iStack_e4 = (int)piStack_e0;
      piStack_e0 = (int *)uVar2;
      FUN_0041160e(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00424e82();
      FUN_00427b38();
      piStack_e0 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_e0 != (int *)0x0) {
        iStack_e4 = 0x4320d0;
        (**(code **)(*piStack_e0 + 8))();
      }
    }
  }
  uVar6 = 0;
LAB_004320d2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


