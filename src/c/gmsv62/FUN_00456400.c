/* FUN_00456400 - 0x00456400 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00456400(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined1 *puStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_b8 = 0x456425;
  FUN_0081622a();
  FUN_00456af5();
  iStack_b8 = 0x456437;
  FUN_00448dc6();
  iVar1 = *(int *)(extraout_ECX + 0x78);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = extraout_ECX;
  if (-1 < iVar1) {
    if (iVar1 < 3) {
      iVar1 = *(int *)(extraout_ECX + 0x80);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < iVar1) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x2b;
        do {
          *(undefined4 *)(unaff_EBP + -0x38) =
               *(undefined4 *)(*(int *)(iVar4 + 0x84) + *(int *)(unaff_EBP + -0x14) * 8 + 4);
          FUN_0045e45d();
          *(undefined4 *)(unaff_EBP + -0x30) = 0;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iVar1 = *(int *)(*(int *)(unaff_EBP + -0x38) + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if ((iVar1 < 80000000) || (89999999 < iVar1)) {
            iStack_b8 = unaff_EBP + -0x58;
            iStack_bc = 0x4564e5;
            piVar2 = (int *)FUN_00679d22();
            *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
            *(undefined4 *)(unaff_EBP + -4) = 6;
          }
          else {
            iStack_b8 = unaff_EBP + -0x5c;
            iStack_bc = 0x4564c8;
            piVar2 = (int *)FUN_00679d22();
            *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
            *(undefined1 *)(unaff_EBP + -4) = 5;
          }
          iStack_b8 = *piVar2;
          iStack_bc = unaff_EBP + -0x30;
          iStack_c0 = 0x456502;
          FUN_00434e21();
          *(undefined4 *)(unaff_EBP + -4) = 5;
          if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
             (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
             *(int *)(unaff_EBP + -0x58) != 0)) {
            iStack_b8 = 0x456526;
            FUN_00434e38();
          }
          *(undefined4 *)(unaff_EBP + -4) = 4;
          if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
             (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
             *(int *)(unaff_EBP + -0x5c) != 0)) {
            iStack_b8 = 0x456548;
            FUN_00434e38();
          }
          iVar1 = FUN_0045e2eb();
          if (iVar1 / 100000 == 0x5b) {
            FUN_0045e2eb();
            iStack_b8 = unaff_EBP + -0x54;
            iStack_bc = 0x45657e;
            puVar3 = (undefined4 *)FUN_00556b9d();
            iStack_b8 = 0x456588;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar3);
            FUN_004125e6();
            FUN_0045e2eb();
            iStack_b8 = unaff_EBP + -0x4c;
            iStack_bc = 0x4565ad;
            FUN_00556acf();
            *(undefined1 *)(unaff_EBP + -4) = 7;
            iStack_b8 = 0x4565ba;
            FUN_00414f8b();
            iVar1 = *(int *)(unaff_EBP + -0x4c);
            *(undefined1 *)(unaff_EBP + -4) = 4;
          }
          else {
            iStack_b8 = 0;
            iStack_bc = 0x4565d0;
            iStack_bc = FUN_0045e2eb();
            iStack_c0 = unaff_EBP + -0x50;
            puStack_c4 = (undefined1 *)0x4565dc;
            puVar3 = (undefined4 *)FUN_005536ce();
            iStack_b8 = 0x4565e6;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                       (IBinding *)*puVar3);
            FUN_004125e6();
            FUN_0045e2eb();
            iStack_b8 = unaff_EBP + -0x60;
            iStack_bc = 0x45660b;
            FUN_0045a1d8();
            *(undefined1 *)(unaff_EBP + -4) = 8;
            iStack_b8 = 0x456618;
            FUN_00414f8b();
            iVar1 = *(int *)(unaff_EBP + -0x60);
            *(undefined1 *)(unaff_EBP + -4) = 4;
          }
          if (iVar1 != 0) {
            iStack_b8 = 0x45662c;
            FUN_00434e38();
          }
          iStack_b8 = 0xff;
          iStack_bc = 0x45663c;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (*(int *)(unaff_EBP + 8) == 0) {
            iStack_b8 = 0x456650;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 8) == 0) {
              iStack_b8 = 0x45665b;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            iStack_b8 = 0x456669;
            FUN_00878dfb();
          }
          piVar2 = *(int **)(unaff_EBP + -0x1c);
          *(int **)(unaff_EBP + -0x48) = piVar2;
          *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 8);
          iVar4 = FUN_0040eed0();
          iVar1 = *(int *)(unaff_EBP + -0x20);
          iStack_cc = FUN_0040eea9();
          puStack_c4 = *(undefined1 **)(unaff_EBP + -0x28);
          iStack_cc = 0x15 - iStack_cc;
          iStack_c0 = *(int *)(unaff_EBP + -0x80);
          iStack_bc = *(undefined4 *)(unaff_EBP + -0x7c);
          iStack_b8 = *(int *)(unaff_EBP + -0x78);
          uStack_d0 = *(undefined4 *)(unaff_EBP + -0x48);
          piStack_d4 = (int *)0x4566aa;
          iStack_c8 = (iVar1 - iVar4) + 0xe;
          iVar1 = (**(code **)(*piVar2 + 0x80))();
          if (iVar1 < 0) {
            piStack_d4 = (int *)&DAT_00963cc8;
            iStack_d8 = *(undefined4 *)(unaff_EBP + -0x48);
            iStack_e0 = 0x4566be;
            iStack_dc = iVar1;
            FUN_00878e09();
          }
          piStack_d4 = (int *)(unaff_EBP + -0x80);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_d8 = 0x4566cb;
          piStack_d4 = (int *)FUN_00402bc3();
          if ((int)piStack_d4 < 0) {
            iStack_d8 = 0x4566d6;
            FUN_00878dfb();
          }
          piStack_d4 = &DAT_00980690;
          iStack_d8 = 0x4566e7;
          FUN_00403191();
          piStack_d4 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_d8 = 0x4566f4;
          FUN_00403191();
          piStack_d4 = (int *)(unaff_EBP + -0x90);
          iStack_d8 = unaff_EBP + -0x70;
          iStack_e0 = unaff_EBP + -0x24;
          iStack_dc = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_e4 = 0x45670d;
          FUN_007d4a9a();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_dc = 0x45671a;
          iStack_dc = FUN_00449749();
          iStack_e0 = 0x456723;
          iStack_e4 = FUN_00449713();
          *(int **)(unaff_EBP + -0x28) = &iStack_e0;
          uStack_e8 = 0x45672f;
          FUN_00448a17();
          iStack_e4 = *(int *)(unaff_EBP + -0x20) + -0x10;
          uStack_e8 = 0x3f;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_004115d9();
          FUN_00448e3a();
          piStack_d4 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (piStack_d4 != (int *)0x0) {
            iStack_d8 = 0x45675c;
            (**(code **)(*piStack_d4 + 8))();
          }
          piStack_d4 = (int *)(unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_d8 = 0x456769;
          piStack_d4 = (int *)FUN_00402bc3();
          if ((int)piStack_d4 < 0) {
            iStack_d8 = 0x456774;
            FUN_00878dfb();
          }
          piStack_d4 = (int *)(unaff_EBP + -0x90);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_d8 = 0x456784;
          piStack_d4 = (int *)FUN_00402bc3();
          if ((int)piStack_d4 < 0) {
            iStack_d8 = 0x45678f;
            FUN_00878dfb();
          }
          piStack_d4 = &DAT_00980690;
          iStack_d8 = 0x45679b;
          FUN_00403191();
          piStack_d4 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_d8 = 0x4567ab;
          FUN_00403191();
          piStack_d4 = (int *)0x0;
          iStack_d8 = 0;
          iStack_dc = -1;
          iStack_e0 = *(int *)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iStack_e4 = 0;
          uStack_e8 = 0;
          (*DAT_0097b4c8)();
          FUN_0087a1b0();
          FUN_007d4a9a(unaff_EBP + -0x34,0,unaff_EBP + -0xa0,unaff_EBP + -0xb0);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iStack_bc = 0x4567f2;
          iStack_bc = FUN_00449749();
          iStack_c0 = -1;
          iStack_c8 = 0x4567fe;
          puStack_c4 = (undefined1 *)&uStack_e8;
          iStack_c8 = FUN_00449713();
          iStack_cc = 0x456804;
          puStack_c4 = (undefined1 *)FUN_00456ad5();
          *(int **)(unaff_EBP + -0x28) = &iStack_c0;
          iStack_c8 = 0x456811;
          FUN_004033a1();
          puStack_c4 = *(undefined1 **)(unaff_EBP + -0x20);
          iStack_c8 = 0x3f;
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iStack_cc = 0x456822;
          FUN_004115d9();
          iStack_cc = 0x456829;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
            iStack_b8 = 0x45683a;
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_b8 = 0x45684a;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_b8 = 0x456855;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_b8 = 0x456865;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_b8 = 0x456870;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
            iStack_b8 = 0x456881;
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            iStack_b8 = 0x4568ab;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          iVar4 = *(int *)(unaff_EBP + -0x18);
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x28;
        } while (*(int *)(unaff_EBP + -0x14) < *(int *)(iVar4 + 0x80));
      }
      if (*(int *)(iVar4 + 0x78) == 0) {
        iVar1 = 0x7b;
      }
      else {
        iVar1 = ((*(int *)(iVar4 + 0x78) != 2) - 1 & 0x10) + 0x8e;
      }
      iVar1 = *(int *)(iVar4 + 0x20) - iVar1;
    }
    else {
      if (iVar1 != 3) goto LAB_004568f1;
      iVar1 = *(int *)(extraout_ECX + 0x20) + -0x90;
    }
    *(int *)(unaff_EBP + 8) = iVar1;
  }
LAB_004568f1:
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uVar5 = 0;
  while ((*(int *)(iVar4 + 0x74) != 0 && (uVar5 < *(uint *)(*(int *)(iVar4 + 0x74) + -4)))) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_b8 = 0x456919;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b8 = 0x456927;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_b8 = unaff_EBP + -0x44;
    iStack_bc = 0x456936;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_b8 = 0x456942;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_b8 = 0x456952;
    iStack_bc = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_b8;
    iStack_c0 = 0x45695e;
    FUN_00448a17();
    iStack_c0 = unaff_EBP + -0x34;
    iStack_bc = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_c4 = (undefined1 *)0x45696c;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_bc = 0x456979;
    FUN_0044974c();
    iStack_bc = 0x456980;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
      iStack_b8 = 0x456994;
      (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b8 = 0x4569a1;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b8 = 0x4569ac;
      FUN_00878dfb();
    }
    iVar1 = *(int *)(unaff_EBP + -0x24);
    iStack_b8 = 0x4569c5;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
    iStack_b8 = unaff_EBP + -0x80;
    iStack_bc = 0x4569cf;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_b8 = 0x4569db;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_b8 = 0x4569e9;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
    iStack_b8 = unaff_EBP + -0x70;
    iStack_bc = 0x4569f3;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_b8 = 0x4569ff;
      FUN_00878dfb();
    }
    iStack_b8 = unaff_EBP + -0x70;
    iStack_c0 = unaff_EBP + -0x28;
    iStack_bc = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_c4 = (undefined1 *)0x456a16;
    FUN_007d4a9a();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_bc = 0x456a23;
    iStack_bc = FUN_00449749();
    iStack_c0 = 0x456a2c;
    puStack_c4 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &iStack_c0;
    iStack_c8 = 0x456a38;
    iStack_c0 = extraout_ECX_00;
    FUN_00448a17();
    puStack_c4 = *(undefined1 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_cc = 0x456a48;
    iStack_c8 = 0x85 - iVar1 / 2;
    FUN_004115d9();
    iStack_cc = 0x456a4f;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      iStack_b8 = 0x456a60;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_b8 = 0x456a6d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b8 = 0x456a78;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b8 = 0x456a85;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_b8 = 0x456a90;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    uVar5 = *(uint *)(unaff_EBP + -0x18);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_b8 = 0x456abe;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


