/* FUN_00773f73 - 0x00773f73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00773f73(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_334;
  int iStack_330;
  int *piStack_32c;
  undefined4 uStack_314;
  uint uStack_310;
  uint uStack_30c;
  int iStack_2f4;
  int iStack_2f0;
  uint uStack_2ec;
  undefined1 *puStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  undefined4 *puStack_2c8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x20) = DAT_00978368;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x838);
  puStack_2c8 = (undefined4 *)0x773fbc;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x834);
  puStack_2c8 = (undefined4 *)0x773fd1;
  FUN_0045e787();
  iVar2 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -0x70) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
  iVar2 = *(int *)(iVar2 + 0x77c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2c8 = &DAT_00980690;
  if (iVar2 < 1) {
    iStack_2cc = 0x7740d3;
    FUN_00403191();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    puStack_2d4 = (undefined1 *)&iStack_2cc;
    *(int **)(unaff_EBP + -0x14) = &iStack_2cc;
    uStack_2d0 = 0x111e;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_2d0 = 0x7740fd;
    FUN_0044974c();
    uStack_2d0 = 0x774104;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_2cc = 0x774114;
    puStack_2c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2c8 < 0) {
      iStack_2cc = 0x77411f;
      FUN_00878dfb();
    }
    puStack_2c8 = &DAT_00980690;
    iStack_2cc = 0x774137;
    FUN_00403191();
    puStack_2c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_2cc = 0x774144;
    FUN_00403191();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -0x80);
    iStack_2cc = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_2d0 = 0x774158;
    uStack_2d0 = FUN_00449749();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_2d4;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_004115d9();
    FUN_00448e3a();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_2cc = 0x774192;
    puStack_2c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2c8 < 0) {
      iStack_2cc = 0x77419d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
  }
  else {
    iStack_2cc = 0x773ffa;
    FUN_00403191();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_2cc = 0x77400a;
    uStack_2d0 = FUN_00449713();
    *(int **)(unaff_EBP + -0x14) = &iStack_2cc;
    puStack_2d4 = (undefined1 *)0x774016;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_2d0 = 0x774022;
    FUN_0044974c();
    uStack_2d0 = 0x774029;
    FUN_00448ebb();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_2cc = 0x774039;
    puStack_2c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2c8 < 0) {
      iStack_2cc = 0x774044;
      FUN_00878dfb();
    }
    puStack_2c8 = &DAT_00980690;
    iStack_2cc = 0x77405b;
    FUN_00403191();
    puStack_2c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_2cc = 0x774068;
    FUN_00403191();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -0x80);
    iStack_2cc = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_2d0 = 0x77407c;
    uStack_2d0 = FUN_00449749();
    puStack_2d4 = (undefined1 *)0x774085;
    FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_2d4;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_004115d9();
    FUN_00448e3a();
    puStack_2c8 = (undefined4 *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_2cc = 0x7740b4;
    puStack_2c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_2c8 < 0) {
      iStack_2cc = 0x7740bf;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
  }
  puStack_2c8 = (undefined4 *)(unaff_EBP + -0x80);
  iStack_2cc = 0x7741aa;
  puStack_2c8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_2c8 < 0) {
    iStack_2cc = 0x7741b5;
    FUN_00878dfb();
  }
  puStack_2c8 = &DAT_00980690;
  iStack_2cc = 0x7741be;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(extraout_ECX + 0x18);
  piVar8 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (piVar8 == (int *)0x0) {
    puStack_2c8 = (undefined4 *)0x80004003;
    iStack_2cc = 0x7741d9;
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 8);
  }
  iVar2 = *piVar8;
  puStack_2d4 = *(undefined1 **)(unaff_EBP + -100);
  uStack_2d0 = *(undefined4 *)(unaff_EBP + -0x60);
  iStack_2cc = *(int *)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + -0x18) = piVar8;
  puStack_2c8 = *(undefined4 **)(unaff_EBP + -0x58);
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    uStack_2ec = *(uint *)(unaff_EBP + -0x18);
    iStack_2f4 = 0x77420d;
    iStack_2f0 = iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_2ec = 0x77421a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_2ec = 0x774227;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x24) + 0x77c) < 1) {
    uStack_2ec = 0x7742ee;
    cVar1 = FUN_00433bfa();
    if (cVar1 == '\0') {
      uStack_2ec = 0x7742fa;
      FUN_0051548c();
    }
  }
  else if ((*(char **)(extraout_ECX + 0x54) == (char *)0x0) ||
          (**(char **)(extraout_ECX + 0x54) == '\0')) {
    uStack_2ec = 0x774254;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_2ec = 0x774261;
    FUN_00403191();
    uStack_2ec = unaff_EBP - 100;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_2f0 = 0x774275;
    iStack_2f0 = FUN_00449749();
    *(int **)(unaff_EBP + -0x14) = &iStack_2f4;
    iStack_2f4 = extraout_ECX_00;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_2ec = 0x7742b0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_2ec = 0x7742bb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_2ec = 0x7742c8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_2ec = 0x7742d3;
      FUN_00878dfb();
    }
  }
  else if (*(int *)(extraout_ECX + 0x58) == 0) {
    FUN_00775b1e();
  }
  iVar2 = *(int *)(unaff_EBP + -0x20);
  iVar5 = extraout_ECX;
  if (*(int *)(iVar2 + 0x2cd2) != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    while( true ) {
      if (*(int *)(iVar2 + 0x2cf8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar2 + 0x2cf8) + -4);
      }
      if (iVar3 + 1 <= *(int *)(unaff_EBP + -0x38)) break;
      iVar2 = *(int *)(unaff_EBP + -0x28);
      piVar8 = (int *)(*(int *)(unaff_EBP + -0x38) * 0x80 + 0x60 + iVar2);
      *(int *)(unaff_EBP + -0x1c) =
           *(int *)(unaff_EBP + -0x38) * 0x10 + 0x7b8 + *(int *)(iVar2 + 0x24);
      uStack_2ec = 0x77435c;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 4);
      piVar7 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (piVar7 == (int *)0x0) {
        uStack_2ec = 0x774377;
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + 0xc);
      }
      iVar2 = *piVar7;
      iStack_2f4 = *(int *)(unaff_EBP + -0x204);
      iStack_2f0 = *(int *)(unaff_EBP + -0x200);
      uStack_2ec = *(uint *)(unaff_EBP + -0x1fc);
      *(int **)(unaff_EBP + -0x24) = piVar7;
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        uStack_30c = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_314 = 0x7743af;
        uStack_310 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      uStack_30c = 0x7743bf;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_30c = 0x7743cc;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x10);
      piVar8[1] = 0x4d;
      piVar8[2] = iVar2 + 8;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        iVar2 = *(int *)(unaff_EBP + -0x20);
        uStack_30c = 0x774400;
        FUN_004dee9b();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uStack_30c = 0x77440d;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_00414ebb();
        if (*(short *)(iVar2 + 0x2cc7) == 0) {
          uStack_30c = 0xff;
          uStack_310 = 0x7744d4;
          FUN_004031b7();
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x20);
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x7744f2;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar7;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x234);
          uStack_310 = *(int *)(unaff_EBP + -0x230);
          uStack_30c = *(int *)(unaff_EBP + -0x22c);
          *(int **)(unaff_EBP + -0x24) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            uStack_2ec = *(uint *)(unaff_EBP + -0x24);
            iStack_2f4 = 0x77452e;
            iStack_2f0 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
        }
        else {
          uStack_30c = 0;
          uStack_310 = 0;
          uStack_314 = 0;
          puVar4 = (undefined4 *)FUN_00856c17();
          uStack_30c = 0x774445;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x54),
                     (IBinding *)*puVar4);
          FUN_004125e6();
          uStack_30c = 0xff;
          uStack_310 = 0x774462;
          FUN_004031b7();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x774477;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar7;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x274);
          uStack_310 = *(int *)(unaff_EBP + -0x270);
          uStack_30c = *(int *)(unaff_EBP + -0x26c);
          *(int **)(unaff_EBP + -0x18) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            uStack_2ec = *(uint *)(unaff_EBP + -0x18);
            iStack_2f4 = 0x7744b3;
            iStack_2f0 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
        }
      }
      else {
        iVar2 = *(int *)(unaff_EBP + -0x38) * 0x2a + -0x2a +
                *(int *)(*(int *)(unaff_EBP + -0x20) + 0x2cf8);
        uStack_30c = 0x77455c;
        FUN_00414f8b();
        if (*(short *)(iVar2 + 0x1b) == 0) {
          uStack_30c = 0xff;
          uStack_310 = 0x774622;
          FUN_004031b7();
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x20);
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x774640;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar7;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x254);
          uStack_310 = *(int *)(unaff_EBP + -0x250);
          uStack_30c = *(int *)(unaff_EBP + -0x24c);
          *(int **)(unaff_EBP + -0x24) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            uStack_2ec = *(uint *)(unaff_EBP + -0x24);
            iStack_2f4 = 0x77467c;
            iStack_2f0 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
        }
        else {
          uStack_30c = (uint)*(ushort *)(iVar2 + 0x18);
          uStack_310 = (uint)*(byte *)(iVar2 + 0x1d);
          uStack_314 = CONCAT22(extraout_var,*(short *)(iVar2 + 0x1b));
          puVar4 = (undefined4 *)FUN_00856c17();
          uStack_30c = 0x774596;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x54),
                     (IBinding *)*puVar4);
          FUN_004125e6();
          uStack_30c = 0xff;
          uStack_310 = 0x7745b3;
          FUN_004031b7();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x7745c8;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar7;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x2b4);
          uStack_310 = *(int *)(unaff_EBP + -0x2b0);
          uStack_30c = *(int *)(unaff_EBP + -0x2ac);
          *(int **)(unaff_EBP + -0x18) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            uStack_2ec = *(uint *)(unaff_EBP + -0x18);
            iStack_2f4 = 0x774604;
            iStack_2f0 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
        }
      }
      uStack_2ec = 0x77468c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_2ec = 0x774697;
        FUN_00878dfb();
      }
      uStack_2ec = 0x7746a8;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      uStack_2ec = 0x7746b8;
      FUN_00403191();
      uStack_2ec = unaff_EBP - 0x294;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iStack_2f0 = 0x7746d2;
      iStack_2f0 = FUN_00449749();
      iStack_2f4 = 0x7746db;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_2f4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 8;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      uStack_2ec = 0x774716;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_2ec = 0x774721;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_2ec = 0x774731;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_2ec = 0x77473c;
        FUN_00878dfb();
      }
      if (piVar8[0x1c] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(piVar8[0x1c] + -4);
      }
      uStack_2ec = unaff_EBP - 0x88;
      iStack_2f0 = 0x774760;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_2f0 = *puVar4;
      iStack_2f4 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      uStack_2ec = uVar9;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00414ebb();
      uStack_2ec = 0x774792;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      uStack_2ec = 0x7747a5;
      iStack_2f0 = FUN_00449713();
      *(uint **)(unaff_EBP + -0x14) = &uStack_2ec;
      iStack_2f4 = 0x7747b1;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_2f0 = 0x7747bd;
      FUN_0044974c();
      iStack_2f0 = 0x7747c4;
      iVar2 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_2ec = 0x7747d6;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_2ec = 0x7747e1;
        FUN_00878dfb();
      }
      uStack_2ec = 0x7747ed;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uStack_2ec = 0x7747fd;
      FUN_00403191();
      uStack_2ec = unaff_EBP - 0x244;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iStack_2f0 = 0x774817;
      iStack_2f0 = FUN_00449749();
      iStack_2f4 = 0x774820;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_2f4;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      uStack_2ec = 0x774857;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_2ec = 0x774862;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_2ec = 0x774872;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_2ec = 0x77487d;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x9c) = iVar2 + 0x6e;
      puVar4 = *(undefined4 **)(unaff_EBP + -0x1c);
      *(int *)(unaff_EBP + -0x98) = *(int *)(unaff_EBP + -0x10) + 0x19;
      *(undefined4 *)(unaff_EBP + -0xa4) = 0x46;
      *(int *)(unaff_EBP + -0xa0) = *(int *)(unaff_EBP + -0x10) + 3;
      *puVar4 = *(undefined4 *)(unaff_EBP + -0xa4);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0xa0);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x9c);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x98);
      iVar2 = piVar8[0x1c];
      if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) < 2)) {
        piVar8[7] = 1;
      }
      else {
        iVar5 = 0;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + -4);
        }
        piVar8[7] = (iVar5 - 1U) / 5 + 1;
      }
      uStack_2ec = unaff_EBP - 0x90;
      iStack_2f0 = 0x7748f4;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_2f0 = *puVar4;
      uStack_2ec = piVar8[6];
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      iStack_2f4 = unaff_EBP + -0x3c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_00414ebb();
      uStack_2ec = 0x77492d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      uStack_2ec = 0x774940;
      iStack_2f0 = FUN_00449713();
      *(uint **)(unaff_EBP + -0x14) = &uStack_2ec;
      iStack_2f4 = 0x77494c;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iStack_2f0 = 0x774958;
      FUN_0044974c();
      iStack_2f0 = 0x77495f;
      uVar6 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_2ec = 0x774972;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_2ec = 0x77497d;
        FUN_00878dfb();
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      uStack_2ec = 0x774991;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uStack_2ec = 0x7749a1;
      FUN_00403191();
      uStack_2ec = unaff_EBP - 0x2a4;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_2f0 = 0x7749bb;
      iStack_2f0 = FUN_00449749();
      iStack_2f4 = 0x7749c4;
      FUN_00449713();
      *(int **)(unaff_EBP + -0x14) = &iStack_2f4;
      iStack_2f4 = extraout_ECX_01;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uStack_2ec = 0x7749fb;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_2ec = 0x774a06;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      uStack_2ec = 0x774a16;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        uStack_2ec = 0x774a21;
        FUN_00878dfb();
      }
      piVar8[4] = *(int *)(unaff_EBP + -0x10) + 8;
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      piVar8[3] = 0xf8 - iVar2;
      iVar2 = *(int *)(unaff_EBP + -0x28);
      piVar8[5] = iVar5 + 0xd;
      if (*(int *)(iVar2 + 4) == 0) {
        uStack_2ec = 0x774a4c;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040e53d();
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
      if (*piVar8 != 0) {
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
        uStack_2ec = 0x774a71;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x194));
        uStack_2ec = unaff_EBP - 0x194;
        iStack_2f0 = 0x774a7e;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          uStack_2ec = 0x774a8a;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 8);
        piVar7 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        if (piVar7 == (int *)0x0) {
          uStack_2ec = 0x774aa5;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + 0xc);
        }
        iVar2 = *piVar7;
        iStack_2f4 = *(int *)(unaff_EBP + -0x194);
        iStack_2f0 = *(int *)(unaff_EBP + -400);
        uStack_2ec = *(uint *)(unaff_EBP + -0x18c);
        *(int **)(unaff_EBP + -0x24) = piVar7;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          uStack_30c = *(undefined4 *)(unaff_EBP + -0x24);
          uStack_314 = 0x774add;
          uStack_310 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        uStack_30c = 0x774aed;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          uStack_30c = 0x774af8;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(unaff_EBP + -0x10);
        piVar8[10] = 0x118;
        iVar2 = iVar5 + 1;
        piVar8[9] = iVar2;
        iVar5 = iVar5 + 0x11;
        piVar8[0xb] = iVar5;
        piVar8[8] = 1;
        piVar8[0xd] = iVar2;
        piVar8[0xc] = 1;
        piVar8[0xe] = 0x60;
        piVar8[0xf] = iVar5;
        iVar2 = piVar8[0xe];
        piVar8[0x10] = iVar2;
        piVar8[0x11] = piVar8[9];
        piVar8[0x13] = piVar8[0xb];
        piVar8[0x12] = iVar2 + 0x45;
        piVar8[0x14] = iVar2 + 0x45;
        piVar8[0x15] = piVar8[9];
        piVar8[0x17] = piVar8[0xb];
        piVar8[0x16] = iVar2 + 0x6d;
        piVar8[0x18] = iVar2 + 0x6d;
        piVar8[0x19] = piVar8[9];
        piVar8[0x1a] = iVar2 + 0xb8;
        piVar8[0x1b] = piVar8[0xb];
        iVar2 = piVar8[0x1e];
        if ((((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) || (iVar2 == 4)) {
          iVar2 = iVar2 + 2;
          *(int *)(unaff_EBP + -0x18) = piVar8[iVar2 * 4 + 2] - piVar8[iVar2 * 4];
          uStack_30c = 0x774ba3;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x104));
          uStack_30c = unaff_EBP + -0x104;
          uStack_310 = 0x774bb4;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            uStack_30c = 0x774bc0;
            FUN_00878dfb();
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          uVar6 = *(undefined4 *)(*(int *)(unaff_EBP + -0x28) + 0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x774bde;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar5 = (piVar8 + iVar2 * 4)[1];
          *(int *)(unaff_EBP + -0x6c) = piVar8[iVar2 * 4];
          piStack_32c = *(int **)(unaff_EBP + -0x18);
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x104);
          iStack_330 = -1;
          uStack_334 = *(undefined4 *)(unaff_EBP + -0x24);
          uStack_310 = *(int *)(unaff_EBP + -0x100);
          *(int *)(unaff_EBP + -0x1c) = iVar5;
          iVar2 = *piVar7;
          uStack_30c = *(undefined4 *)(unaff_EBP + -0xfc);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x84))
                            (piVar7,*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x1c));
          if (iVar2 < 0) {
            uStack_30c = *(undefined4 *)(unaff_EBP + -0x14);
            uStack_314 = 0x774c34;
            uStack_310 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          uStack_30c = 0x774c44;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_30c = 0x774c4f;
            FUN_00878dfb();
          }
        }
        iVar2 = *(int *)(unaff_EBP + -0x28);
        if (*(int *)(iVar2 + 8) == 0) {
          uStack_30c = 0x774c62;
          FUN_00878dfb();
        }
        iVar5 = FUN_0040e53d();
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar5;
        iVar5 = piVar8[6] * 5 + -5;
        *(int *)(unaff_EBP + -0x18) = iVar5;
        *(int *)(unaff_EBP + -0x24) = iVar5 * 0x44;
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x10) + 4;
        while( true ) {
          if (piVar8[0x1c] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(piVar8[0x1c] + -4);
          }
          iVar3 = piVar8[6] * 5;
          if (iVar5 <= piVar8[6] * 5) {
            iVar3 = iVar5;
          }
          if (iVar3 <= *(int *)(unaff_EBP + -0x18)) break;
          uStack_30c = 0x774cb6;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x124));
          uStack_30c = unaff_EBP + -0x124;
          uStack_310 = 0x774cc7;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            uStack_30c = 0x774cd3;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 0xc);
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          if (piVar7 == (int *)0x0) {
            uStack_30c = 0x774cee;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar7;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0x124);
          uStack_310 = *(int *)(unaff_EBP + -0x120);
          uStack_30c = *(undefined4 *)(unaff_EBP + -0x11c);
          *(int **)(unaff_EBP + -0x6c) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            piStack_32c = *(int **)(unaff_EBP + -0x6c);
            uStack_334 = 0x774d26;
            iStack_330 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          piStack_32c = (int *)0x774d36;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_32c = (int *)0x774d41;
            FUN_00878dfb();
          }
          iVar2 = *(int *)(unaff_EBP + -0x24);
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          piStack_32c = (int *)0x774d58;
          FUN_00414f8b();
          iStack_330 = unaff_EBP + -0x30;
          *(int ***)(unaff_EBP + -0x14) = &piStack_32c;
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          uStack_334 = 0x774d6d;
          FUN_0046fcc9();
          iStack_330 = unaff_EBP + -0x34;
          uStack_334 = 0x774d76;
          uVar6 = FUN_007d3a22();
          *(undefined4 *)(iVar2 + 0x3c + piVar8[0x1c]) = uVar6;
          piStack_32c = (int *)(unaff_EBP + -0x50);
          if (*(int *)(piVar8[0x1c] + iVar2 + 0x10) == -1) {
            iStack_330 = 0x774d98;
            FUN_00434e21();
            piStack_32c = (int *)(unaff_EBP + -0x44);
            iStack_330 = 0x774da6;
            FUN_00434e21();
            piStack_32c = (int *)(unaff_EBP + -0x48);
            iStack_330 = 0x774db6;
            FUN_00434e21();
          }
          else {
            iStack_330 = 0x774dbf;
            FUN_00434e21();
            piStack_32c = (int *)(unaff_EBP + -0x44);
            iStack_330 = 0x774dcd;
            FUN_00434e21();
            iStack_330 = unaff_EBP + -0x48;
            piStack_32c = (int *)&DAT_0096477c;
            uStack_334 = 0x774de4;
            FUN_00434e21();
          }
          iVar5 = *(int *)(unaff_EBP + -0x28);
          piStack_32c = (int *)(unaff_EBP + -0x4c);
          iStack_330 = 0x774dfe;
          FUN_00434e21();
          if (*(int *)(*(int *)(iVar5 + 0x24) + 0x818) == *(int *)(iVar2 + piVar8[0x1c])) {
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              piStack_32c = (int *)0x774e25;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + 0xc);
            piStack_32c = (int *)0x12;
            iStack_330 = 0x119;
            uStack_334 = *(undefined4 *)(unaff_EBP + -0x10);
            iVar2 = (**(code **)(*piVar7 + 0x8c))(piVar7,1);
            if (iVar2 < 0) {
              uStack_334 = 0x774e52;
              iStack_330 = iVar2;
              piStack_32c = piVar7;
              FUN_00878e09();
            }
            piStack_32c = (int *)0x774e61;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xb4));
            piStack_32c = (int *)(unaff_EBP + -0xb4);
            iStack_330 = 0x774e73;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774e7f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x32;
            piStack_32c = (int *)0x774e8c;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xd4));
            piStack_32c = (int *)(unaff_EBP + -0xd4);
            iStack_330 = 0x774e99;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774ea5;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0xd4);
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            iStack_330 = 0x774ebf;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x774ec8;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 10;
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            FUN_004115d9(10,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x32;
            piStack_32c = (int *)0x774efc;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774f07;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x774f17;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774f22;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x774f2b;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x1b4));
            piStack_32c = (int *)(unaff_EBP + -0x1b4);
            iStack_330 = 0x774f38;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774f44;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            piStack_32c = (int *)0x774f51;
            VariantInit((VARIANTARG *)(unaff_EBP + -0xf4));
            piStack_32c = (int *)(unaff_EBP + -0xf4);
            iStack_330 = 0x774f5e;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774f6a;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0xf4);
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            iStack_330 = 0x774f84;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x774f8d;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 100;
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            FUN_004115d9(100,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            piStack_32c = (int *)0x774fc1;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774fcc;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x774fdc;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x774fe7;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x774ff0;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x1d4));
            piStack_32c = (int *)(unaff_EBP + -0x1d4);
            iStack_330 = 0x774ffd;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775009;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            piStack_32c = (int *)0x775016;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x114));
            piStack_32c = (int *)(unaff_EBP + -0x114);
            iStack_330 = 0x775023;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77502f;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x114);
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            iStack_330 = 0x775049;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x775052;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 0xaa;
            *(undefined1 *)(unaff_EBP + -4) = 0x39;
            FUN_004115d9(0xaa,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x38;
            piStack_32c = (int *)0x775089;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775094;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x7750a4;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7750af;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x7750b8;
            VariantInit((VARIANTARG *)(unaff_EBP + -500));
            piStack_32c = (int *)(unaff_EBP + -500);
            iStack_330 = 0x7750c5;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7750d1;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            piStack_32c = (int *)0x7750de;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x134));
            piStack_32c = (int *)(unaff_EBP + -0x134);
            iStack_330 = 0x7750eb;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7750f7;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x134);
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            iStack_330 = 0x775111;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x77511a;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 0xd2;
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            FUN_004115d9(0xd2,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            piStack_32c = (int *)0x775151;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77515c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x77516c;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775177;
              FUN_00878dfb();
            }
            iVar2 = piVar8[0x1c] + *(int *)(unaff_EBP + -0x24);
            uVar6 = *(undefined4 *)(iVar2 + 0x40);
            *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(iVar2 + 0x14);
            *(undefined4 *)(unaff_EBP + -0x68) = uVar6;
          }
          else {
            piStack_32c = (int *)0x77519f;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x164));
            piStack_32c = (int *)(unaff_EBP + -0x164);
            iStack_330 = 0x7751b1;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7751bd;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3e;
            piStack_32c = (int *)0x7751ca;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x1a4));
            piStack_32c = (int *)(unaff_EBP + -0x1a4);
            iStack_330 = 0x7751d7;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7751e3;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x1a4);
            *(undefined1 *)(unaff_EBP + -4) = 0x3f;
            iStack_330 = 0x7751fd;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x775206;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 10;
            *(undefined1 *)(unaff_EBP + -4) = 0x3f;
            FUN_004115d9(10,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x3e;
            piStack_32c = (int *)0x77523a;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775245;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x775255;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775260;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x775269;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x184));
            piStack_32c = (int *)(unaff_EBP + -0x184);
            iStack_330 = 0x775276;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775282;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x41;
            piStack_32c = (int *)0x77528f;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x1e4));
            piStack_32c = (int *)(unaff_EBP + -0x1e4);
            iStack_330 = 0x77529c;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7752a8;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x1e4);
            *(undefined1 *)(unaff_EBP + -4) = 0x42;
            iStack_330 = 0x7752c2;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x7752cb;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 100;
            *(undefined1 *)(unaff_EBP + -4) = 0x42;
            FUN_004115d9(100,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x41;
            piStack_32c = (int *)0x7752ff;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77530a;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x77531a;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775325;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x77532e;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x144));
            piStack_32c = (int *)(unaff_EBP + -0x144);
            iStack_330 = 0x77533b;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775347;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            piStack_32c = (int *)0x775354;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x1c4));
            piStack_32c = (int *)(unaff_EBP + -0x1c4);
            iStack_330 = 0x775361;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77536d;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x1c4);
            *(undefined1 *)(unaff_EBP + -4) = 0x45;
            iStack_330 = 0x775387;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x775390;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 0xaa;
            *(undefined1 *)(unaff_EBP + -4) = 0x45;
            FUN_004115d9(0xaa,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            piStack_32c = (int *)0x7753c7;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7753d2;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x7753e2;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7753ed;
              FUN_00878dfb();
            }
            piStack_32c = (int *)0x7753f6;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x174));
            piStack_32c = (int *)(unaff_EBP + -0x174);
            iStack_330 = 0x775403;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77540f;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            piStack_32c = (int *)0x77541c;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x154));
            piStack_32c = (int *)(unaff_EBP + -0x154);
            iStack_330 = 0x775429;
            iVar2 = FUN_00402e32();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x775435;
              FUN_00878dfb();
            }
            piStack_32c = (int *)(unaff_EBP + -0x154);
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            iStack_330 = 0x77544f;
            iStack_330 = FUN_00449749();
            uStack_334 = 0x775458;
            uVar6 = FUN_00449713();
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_334;
            FUN_00448a17(uVar6);
            uVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
            uVar10 = 0xd2;
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            FUN_004115d9(0xd2,uVar6);
            FUN_00448e3a(uVar10,uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            piStack_32c = (int *)0x77548f;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x77549a;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x31;
            piStack_32c = (int *)0x7754aa;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_32c = (int *)0x7754b5;
              FUN_00878dfb();
            }
          }
          iVar2 = *(int *)(unaff_EBP + -0x1c);
          iVar5 = *(int *)(unaff_EBP + -0x24);
          piStack_32c = (int *)0x119;
          iStack_330 = *(int *)(unaff_EBP + -0x10);
          uStack_334 = 0;
          (*DAT_0097b504)(iVar5 + 0x18 + piVar8[0x1c]);
          (*DAT_0097b504)(iVar5 + 0x2c + piVar8[0x1c],0x61,*(undefined4 *)(unaff_EBP + -0x10),0xa4,
                          iVar2 + 0xe);
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x12;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_00414ebb();
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          *(int *)(unaff_EBP + -0x24) = iVar5 + 0x44;
          iVar2 = *(int *)(unaff_EBP + -0x28);
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          uStack_30c = 0x77552c;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xc4));
          uStack_30c = unaff_EBP + -0xc4;
          uStack_310 = 0x77553d;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            uStack_30c = 0x775549;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          if (piVar8 == (int *)0x0) {
            uStack_30c = 0x775561;
            FUN_00878dfb();
            piVar8 = *(int **)(unaff_EBP + 0xc);
          }
          iVar2 = *piVar8;
          uStack_314 = *(undefined4 *)(unaff_EBP + -0xc4);
          uStack_310 = *(int *)(unaff_EBP + -0xc0);
          uStack_30c = *(undefined4 *)(unaff_EBP + -0xbc);
          *(int **)(unaff_EBP + -0x14) = piVar8;
          iVar2 = (**(code **)(iVar2 + 0x80))();
          if (iVar2 < 0) {
            uStack_30c = *(undefined4 *)(unaff_EBP + -0x14);
            uStack_314 = 0x775597;
            uStack_310 = iVar2;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          uStack_30c = 0x7755a7;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_30c = 0x7755b2;
            FUN_00878dfb();
          }
          uStack_30c = 0x7755be;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
          uStack_30c = unaff_EBP + -0x80;
          uStack_310 = 0x7755cd;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            uStack_30c = 0x7755d9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          uStack_30c = 0x7755e6;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xe4));
          uStack_30c = unaff_EBP + -0xe4;
          uStack_310 = 0x7755f3;
          iVar2 = FUN_00402e32();
          if (iVar2 < 0) {
            uStack_30c = 0x7755ff;
            FUN_00878dfb();
          }
          uStack_30c = unaff_EBP + -0xe4;
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          uStack_310 = 0x775616;
          uStack_310 = FUN_00449749();
          *(undefined4 **)(unaff_EBP + -0x14) = &uStack_314;
          uStack_314 = extraout_ECX_02;
          FUN_00679e4e();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          FUN_004115d9();
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          uStack_30c = 0x775659;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_30c = 0x775664;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          uStack_30c = 0x775671;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_30c = 0x77567c;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
        }
        uStack_30c = 0x77568d;
        VariantInit((VARIANTARG *)(unaff_EBP + -100));
        uStack_30c = unaff_EBP + -100;
        uStack_310 = 0x77569b;
        iVar2 = FUN_00402e32();
        if (iVar2 < 0) {
          uStack_30c = 0x7756a7;
          FUN_00878dfb();
        }
        piVar8 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        if (piVar8 == (int *)0x0) {
          uStack_30c = 0x7756bf;
          FUN_00878dfb();
          piVar8 = *(int **)(unaff_EBP + 0xc);
        }
        iVar2 = *piVar8;
        uStack_314 = *(undefined4 *)(unaff_EBP + -100);
        uStack_310 = *(int *)(unaff_EBP + -0x60);
        uStack_30c = *(int *)(unaff_EBP + -0x5c);
        *(int **)(unaff_EBP + -0x14) = piVar8;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          uStack_2ec = *(uint *)(unaff_EBP + -0x14);
          iStack_2f4 = 0x7756f2;
          iStack_2f0 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        uStack_2ec = 0x7756ff;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          uStack_2ec = 0x77570a;
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x10) == 0) {
          uStack_2ec = 0x77571d;
          FUN_00878dfb();
        }
        iVar2 = FUN_0040e53d();
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar2;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 10;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      if (*(int **)(unaff_EBP + -0x54) != (int *)0x0) {
        uStack_2ec = 0x77573d;
        (**(code **)(**(int **)(unaff_EBP + -0x54) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
      iVar2 = *(int *)(unaff_EBP + -0x20);
      iVar5 = *(int *)(unaff_EBP + -0x28);
    }
  }
  if (*(int *)(iVar2 + 0x2cd2) == 0) {
    iVar2 = 0x698;
    do {
      uStack_2ec = 0x775a56;
      (**(code **)(*(int *)(*(int *)(iVar2 + *(int *)(iVar5 + 0x24)) + 4) + 0x1c))();
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0x6f0);
    goto LAB_00775a61;
  }
  *(uint *)(unaff_EBP + -0x34) =
       (uint)(*(int *)(*(int *)(iVar5 + 0x24) + 0x818) != *(int *)(DAT_00978368 + 0x2088));
  uStack_2ec = 0x77578e;
  FUN_00775af2();
  uStack_2ec = 0x7757d1;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x698) + 4) + 0x1c))();
  uStack_2ec = *(uint *)(iVar2 + 0x2088);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6a0) + 4)
  ;
  iStack_2f0 = 0x7757f1;
  iVar2 = FUN_00775af2();
  uStack_2ec = (uint)(iVar2 == 2);
  iStack_2f0 = 0x775801;
  (**(code **)(*(int *)(unaff_EBP + -0x14) + 0x1c))();
  iStack_2f0 = 0x775809;
  iVar2 = FUN_008582fe();
  if (((iVar2 == 0) || (*(int *)(unaff_EBP + -0x70) != 1)) || (*(int *)(unaff_EBP + -0x34) == 0)) {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6a8) + 4);
    iStack_2f0 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6a8) + 4);
    iStack_2f0 = 1;
  }
  iStack_2f4 = 0x775840;
  (**(code **)(iVar2 + 0x1c))();
  iVar2 = *(int *)(unaff_EBP + -0x68);
  if (iVar2 < 1) {
LAB_0077590b:
    iStack_2f4 = 0;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6b0) + 4) + 0x1c))();
    iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 0x6b8);
LAB_00775929:
    (**(code **)(*(int *)(iVar2 + 4) + 0x1c))();
  }
  else {
    iStack_2f4 = 0x775853;
    iVar3 = FUN_008582fe();
    if (iVar3 == 0) {
      iStack_2f4 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x2088);
      iVar3 = FUN_00775af2();
      if (iVar3 != 2) goto LAB_0077590b;
    }
    if ((iVar2 == 1) || (iVar2 == 2)) goto LAB_0077590b;
    if (iVar2 != 3) {
      iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x6b0);
      if (iVar2 != 5) {
        iStack_2f4 = 1;
        (**(code **)(*(int *)(iVar3 + 4) + 0x1c))();
        iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6b8) + 4);
        FUN_008584ae();
        goto LAB_007758d3;
      }
      iStack_2f4 = 1;
      (**(code **)(*(int *)(iVar3 + 4) + 0x1c))();
      iVar2 = *(int *)(*(int *)(iVar5 + 0x24) + 0x6b8);
      goto LAB_00775929;
    }
    iStack_2f4 = 0;
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6b0) + 4) + 0x1c))();
    iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6b8) + 4);
    FUN_008584ae();
LAB_007758d3:
    (**(code **)(iVar2 + 0x1c))();
  }
  iVar3 = FUN_008582fe();
  iVar2 = 1;
  if (((iVar3 == 0) || (*(int *)(unaff_EBP + -0x70) != 1)) || (*(int *)(unaff_EBP + -0x34) == 0)) {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6c0) + 4);
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6c0) + 4);
  }
  (**(code **)(iVar3 + 0x1c))();
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6c8) + 4) + 0x1c))();
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6d0) + 4) + 0x1c))();
  uStack_30c = 0x7759cf;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6d8) + 4) + 0x1c))();
  uStack_30c = 0x7759d7;
  iVar3 = FUN_008582fe();
  uStack_30c = iVar2;
  if (iVar3 == 0) {
    uStack_30c = 0x7759e3;
    iVar3 = FUN_00858341();
    uStack_30c = iVar2;
    if (iVar3 == 0) {
      uStack_30c = 0;
    }
  }
  uStack_310 = 0x7759ff;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6e0) + 4) + 0x1c))();
  if (((*(int *)(unaff_EBP + -0x34) == 0) ||
      (iVar3 = *(int *)(unaff_EBP + -0x20), *(int *)(iVar3 + 0x2b40) == 0)) ||
     ((*(int *)(iVar3 + 0x2bf2) != *(int *)(iVar3 + 0x2088) ||
      (*(int *)(*(int *)(iVar5 + 0x24) + 0x818) == 0)))) {
    iVar2 = 0;
  }
  uStack_314 = 0x775a40;
  uStack_310 = iVar2;
  (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 0x24) + 0x6e8) + 4) + 0x1c))();
LAB_00775a61:
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
    uStack_2ec = 0x775a72;
    (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    uStack_2ec = 0x775a83;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_2ec = 0x775ad0;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    uStack_2ec = 0x775ae1;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


