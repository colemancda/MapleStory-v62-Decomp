/* FUN_00647e19 - 0x00647e19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00647e19(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  uint extraout_ECX_05;
  int extraout_ECX_06;
  int iVar9;
  int unaff_EBP;
  undefined1 auStack_ec [4];
  undefined4 uStack_e8;
  int *piStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x34) = extraout_ECX;
  iVar9 = *(int *)(*(int *)(extraout_ECX + 0xb0) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x40) = iVar9;
  *(undefined4 *)(unaff_EBP + -0x20) = 2000;
  *(int *)(unaff_EBP + -0x28) = iVar9 << 6;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x92;
  iVar2 = extraout_ECX;
  do {
    iVar7 = *(int *)(iVar2 + 0xcc);
    if ((iVar7 == 0) ||
       (uVar3 = iVar9 + -2000 + *(int *)(unaff_EBP + -0x20), *(uint *)(iVar7 + -4) <= uVar3)) {
      piVar4 = *(int **)(*(int *)(iVar2 + 0xa0) + 4 + *(int *)(unaff_EBP + -0x18));
      if (piVar4 != (int *)0x0) {
        _iStack_cc = CONCAT44(0x647e8e,iStack_cc);
        (**(code **)(*piVar4 + 0xc))();
      }
    }
    else {
      iVar9 = *(int *)(iVar2 + 0xcc) + *(int *)(unaff_EBP + -0x28);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      uVar1 = *(uint *)(iVar2 + 0xe4);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = iVar7;
      if (uVar1 == uVar3) {
        _iStack_cc = 0x3000000ff;
        iStack_d0 = 0x647ec2;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar2 + 0xdc);
        piVar4 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar4 == (int *)0x0) {
          _iStack_cc = 0x8000400300647ee0;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + 8);
        }
        iVar2 = *piVar4;
        iStack_d8 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_d4 = *(int *)(unaff_EBP + -0xa4);
        iStack_d0 = *(int *)(unaff_EBP + -0xa0);
        iStack_dc = *(int *)(unaff_EBP + -0x14) + -0x13;
        iStack_e0 = 0x111;
        *(int **)(unaff_EBP + -0x10) = piVar4;
        _iStack_cc = CONCAT44(*(undefined4 *)(unaff_EBP + -0x98),*(undefined4 *)(unaff_EBP + -0x9c))
        ;
        uStack_e8 = 0x647f0d;
        piStack_e4 = piVar4;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          _iStack_cc = CONCAT44(&DAT_00963cc8,*(undefined4 *)(unaff_EBP + -0x10));
          iStack_d4 = 0x647f1f;
          iStack_d0 = iVar2;
          FUN_00878e09();
        }
        iVar6 = unaff_EBP + -0xa4;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_cc = 0x647f2f;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          _iStack_cc = CONCAT44(iVar2,0x647f3a);
          FUN_00878dfb();
          iVar6 = extraout_ECX_00;
        }
        iVar2 = *(int *)(unaff_EBP + -0x34);
      }
      uVar5 = *(undefined4 *)(iVar9 + 0x38);
      *(int **)(unaff_EBP + -0x10) = &iStack_cc;
      _iStack_cc = CONCAT44(uVar5,iVar6);
      iStack_d0 = 0x647f4f;
      FUN_0052e11f();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_d0 = 0x647f58;
      FUN_0048b97b();
      iStack_d0 = 0x647f5f;
      uVar3 = FUN_0055540f();
      _iStack_cc = (ulonglong)uVar3;
      iStack_d0 = 0;
      iStack_d4 = 0;
      iStack_d8 = 0;
      iStack_dc = 0x647f6e;
      piVar4 = (int *)FUN_0053793e();
      iStack_dc = 0x647f75;
      iStack_dc = (**(code **)(*piVar4 + 4))();
      iStack_e0 = *(int *)(unaff_EBP + -0x14) + 0xf;
      piStack_e4 = (int *)0xee;
      uStack_e8 = 0x647f89;
      uStack_e8 = thunk_FUN_0045e2eb();
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_ec;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0048b97b();
      FUN_005558b0();
      if (*(int *)(iVar9 + 0x10) == 0) {
        uVar5 = 0;
      }
      else {
        _iStack_cc = CONCAT44(0x647fb5,iStack_cc);
        uVar5 = FUN_00409205();
      }
      _iStack_cc = CONCAT44(0xffffffff,uVar5);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_d0 = 0x647fc7;
      FUN_00414edd();
      _iStack_cc = CONCAT44(0x98,extraout_ECX_01);
      iStack_d0 = iVar2 + 0xd4;
      *(int **)(unaff_EBP + -0x10) = &iStack_cc;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_d4 = 0x647fe2;
      FUN_0046fcc9();
      iStack_d0 = unaff_EBP + -0x24;
      iStack_d4 = 0x647feb;
      FUN_007d3a22();
      _iStack_cc = 0x98069000647fff;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      _iStack_cc = 0x9806900064800f;
      FUN_00403191();
      _iStack_cc = CONCAT44(unaff_EBP + -0xc4,unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_d0 = 0x648029;
      iStack_d0 = FUN_004458be();
      iStack_d4 = 0x648032;
      iStack_d8 = FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_d4;
      iStack_dc = 0x64803e;
      iStack_d4 = extraout_ECX_02;
      FUN_00448a17();
      iStack_d8 = *(int *)(unaff_EBP + -0x14) + -0x12;
      iStack_dc = 0x117;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_e0 = 0x648059;
      FUN_0044974c();
      iStack_e0 = 0x648060;
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      _iStack_cc = CONCAT44(unaff_EBP + -0xb4,0x648070);
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        _iStack_cc = CONCAT44(iVar6,0x64807b);
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      _iStack_cc = CONCAT44(unaff_EBP + -0xc4,0x64808b);
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        _iStack_cc = CONCAT44(iVar7,0x648096);
        FUN_00878dfb();
      }
      _iStack_cc = CONCAT44(0x64809d,iStack_cc);
      iVar7 = FUN_0045e2eb();
      if (((iVar7 / 10000 != 0xcf) && (iVar7 / 10000 != 0xe9)) ||
         (*(double *)(iVar9 + 0x20) <= _DAT_008e8a80)) {
        piVar4 = *(int **)(*(int *)(iVar2 + 0xa0) + 4 + *(int *)(unaff_EBP + -0x18));
        if (piVar4 != (int *)0x0) {
          _iStack_cc = CONCAT44(0x6481be,iStack_cc);
          (**(code **)(*piVar4 + 0xc))();
        }
      }
      else {
        piVar4 = *(int **)(*(int *)(iVar2 + 0xa0) + 4 + *(int *)(unaff_EBP + -0x18));
        if (piVar4 != (int *)0x0) {
          if (piVar4[5] == *(int *)(unaff_EBP + -0x20)) goto LAB_006481be;
          if (piVar4 != (int *)0x0) {
            _iStack_cc = CONCAT44(0x6480ef,iStack_cc);
            (**(code **)(*piVar4 + 0xc))();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x54) = 1;
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        _iStack_cc = CONCAT44(0x613,unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_d0 = 0x648118;
        uVar5 = FUN_00679d86();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        _iStack_cc = CONCAT44(uVar5,0x648125);
        FUN_00419192();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        _iStack_cc = CONCAT44(0x648131,iStack_cc);
        FUN_00402676();
        _iStack_cc = 0x57800648140;
        iVar7 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar7;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar7 == 0) {
          uVar5 = 0;
        }
        else {
          _iStack_cc = CONCAT44(0x648152,iStack_cc);
          uVar5 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        _iStack_cc = CONCAT44(uVar5,0x648169);
        FUN_00450382();
        _iStack_cc = (ulonglong)(unaff_EBP - 0x54) << 0x20;
        iStack_d0 = *(int *)(unaff_EBP + -0x14) + -0x13;
        iStack_d4 = 0x194;
        iStack_d8 = *(int *)(unaff_EBP + -0x20);
        iStack_e0 = 0x648191;
        iStack_dc = iVar2;
        (**(code **)(**(int **)(*(int *)(iVar2 + 0xa0) + 4 + *(int *)(unaff_EBP + -0x18)) + 0x20))()
        ;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x48) != 0) {
          _iStack_cc = CONCAT44(*(int *)(unaff_EBP + -0x48) + -0xc,0x6481a5);
          FUN_00403384();
        }
      }
LAB_006481be:
      _iStack_cc = CONCAT44(0x6481c5,iStack_cc);
      iVar6 = FUN_0045e2eb();
      if (((iVar6 / 10000 != 0xcf) && (iVar6 / 10000 != 0xe9)) ||
         (*(double *)(iVar9 + 0x20) <= _DAT_008e8a80)) {
        _iStack_cc = CONCAT44(1,*(undefined4 *)(iVar9 + 0x18));
        iStack_d0 = unaff_EBP + -0x1c;
        iStack_d4 = 0x648345;
        FUN_007d3546();
        _iStack_cc = CONCAT44(0x348,unaff_EBP + -0x3c);
        iStack_d0 = 0x64835b;
        piVar4 = (int *)FUN_00679d22();
        iVar6 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + -4);
        }
        _iStack_cc = CONCAT44(uVar5,iVar6);
        iStack_d0 = 0x648376;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        _iStack_cc = CONCAT44(0x648382,iStack_cc);
        FUN_00414ebb();
        _iStack_cc = CONCAT44((VARIANTARG *)(unaff_EBP + -0x74),0x64838c);
        VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
        _iStack_cc = CONCAT44(&DAT_00980690,unaff_EBP + -0x74);
        iStack_d0 = 0x648396;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x6483a2);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        _iStack_cc = CONCAT44((VARIANTARG *)(unaff_EBP + -0x84),0x6483b3);
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        _iStack_cc = CONCAT44(&DAT_00980690,unaff_EBP + -0x84);
        iStack_d0 = 0x6483c0;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x6483cc);
          FUN_00878dfb();
        }
        _iStack_cc = CONCAT44(unaff_EBP + -0x74,unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_d0 = 0x6483e3;
        iStack_d0 = FUN_004458be();
        iStack_d4 = 0x6483ec;
        iStack_d8 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_d4;
        iStack_dc = 0x6483f8;
        iStack_d4 = extraout_ECX_04;
        FUN_00448a17();
        iStack_d8 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_dc = 0x117;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_e0 = 0x64840f;
        FUN_0044974c();
        iStack_e0 = 0x648416;
        FUN_005c1d2c();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        _iStack_cc = CONCAT44(unaff_EBP + -0x84,0x648426);
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x648431);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        _iStack_cc = CONCAT44(unaff_EBP + -0x74,0x64843e);
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          _iStack_cc = CONCAT44(iVar7,0x648449);
          FUN_00878dfb();
        }
      }
      else {
        _iStack_cc = CONCAT44(1,*(undefined4 *)(iVar9 + 0x18));
        iStack_d0 = unaff_EBP + -0x1c;
        iStack_d4 = 0x6481ff;
        FUN_007d3546();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
        _iStack_cc = CONCAT44(0x349,unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iStack_d0 = 0x648223;
        puVar8 = (undefined4 *)FUN_00679d22();
        _iStack_cc = *(undefined8 *)(iVar9 + 0x20);
        uVar5 = *puVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
        iStack_d0 = 0x648239;
        FUN_0087c3de();
        _iStack_cc = CONCAT44(0x648240,iStack_cc);
        uVar5 = __ftol();
        _iStack_cc = CONCAT44(uVar5,*(undefined4 *)(unaff_EBP + -0x10));
        iStack_d4 = unaff_EBP + -0x2c;
        iStack_d0 = *(undefined4 *)(unaff_EBP + -0x30);
        iStack_d8 = 0x648250;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        _iStack_cc = CONCAT44(0x64825f,iStack_cc);
        FUN_00414ebb();
        _iStack_cc = CONCAT44((VARIANTARG *)(unaff_EBP + -100),0x648269);
        VariantInit((VARIANTARG *)(unaff_EBP + -100));
        _iStack_cc = CONCAT44(&DAT_00980690,unaff_EBP + -100);
        iStack_d0 = 0x648273;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x64827f);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        _iStack_cc = CONCAT44((VARIANTARG *)(unaff_EBP + -0x94),0x648290);
        VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
        _iStack_cc = CONCAT44(&DAT_00980690,unaff_EBP + -0x94);
        iStack_d0 = 0x64829d;
        iVar6 = FUN_00402e32();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x6482a9);
          FUN_00878dfb();
        }
        _iStack_cc = CONCAT44(unaff_EBP + -100,unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_d0 = 0x6482c0;
        iStack_d0 = FUN_004458be();
        iStack_d4 = 0x6482c9;
        iStack_d8 = FUN_00449713();
        *(int **)(unaff_EBP + -0x10) = &iStack_d4;
        iStack_dc = 0x6482d5;
        iStack_d4 = extraout_ECX_03;
        FUN_00448a17();
        iStack_d8 = *(undefined4 *)(unaff_EBP + -0x14);
        iStack_dc = 0x117;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_e0 = 0x6482ec;
        FUN_0044974c();
        iStack_e0 = 0x6482f3;
        FUN_005c1d2c();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        _iStack_cc = CONCAT44(unaff_EBP + -0x94,0x648303);
        iVar6 = FUN_00402bc3();
        if (iVar6 < 0) {
          _iStack_cc = CONCAT44(iVar6,0x64830e);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        _iStack_cc = CONCAT44(unaff_EBP + -100,0x64831b);
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          _iStack_cc = CONCAT44(iVar7,0x648326);
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        _iStack_cc = CONCAT44(0x648332,iStack_cc);
        FUN_00414ebb();
      }
      _iStack_cc = CONCAT44(0x648450,iStack_cc);
      iVar7 = FUN_0045e2eb();
      iVar7 = iVar7 / 1000000;
      if (((iVar7 == 2) || (iVar7 == 3)) || (iVar7 == 4)) {
        _iStack_cc = CONCAT44(0x648471,iStack_cc);
        uVar5 = (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))();
        _iStack_cc = (ulonglong)extraout_ECX_05;
        iStack_d0 = iVar2 + 0xd8;
        *(int **)(unaff_EBP + -0x10) = &iStack_cc;
        iStack_d4 = 0x648487;
        FUN_00424dbc();
        iStack_d4 = *(int *)(unaff_EBP + -0x14) + 1;
        iStack_d8 = 0xec;
        iStack_e0 = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x10) = &iStack_dc;
        piStack_e4 = (int *)0x6484a1;
        iStack_dc = extraout_ECX_06;
        iStack_d0 = uVar5;
        FUN_0046fc23();
        iStack_e0 = 0x6484a6;
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      _iStack_cc = CONCAT44(0x6484b5,iStack_cc);
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      _iStack_cc = CONCAT44(0x6484c1,iStack_cc);
      FUN_00414ebb();
      iVar9 = *(int *)(unaff_EBP + -0x40);
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 0x40;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
    if (4 < *(int *)(unaff_EBP + -0x20) + -2000) {
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar4 != (int *)0x0) {
        _iStack_cc = CONCAT44(piVar4,0x6484f5);
        (**(code **)(*piVar4 + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


