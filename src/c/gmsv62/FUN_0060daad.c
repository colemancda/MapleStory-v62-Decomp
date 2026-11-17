/* FUN_0060daad - 0x0060daad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060daad(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int extraout_ECX_02;
  int *piVar5;
  int unaff_EBP;
  undefined1 auStack_d4 [4];
  undefined4 uStack_d0;
  int *piStack_cc;
  int iStack_c8;
  int *piStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b4;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  piStack_b4 = (int *)0x60dacd;
  FUN_005c11da();
  piStack_b4 = (int *)(**(code **)(*extraout_ECX + 0x70))();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_bc = 0x60dae8;
  FUN_007d3546();
  piStack_b4 = (int *)0x60daf6;
  FUN_00448dc6();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60db08;
  FUN_00403191();
  piStack_b4 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_bc = 0x60db1c;
  FUN_005b1a45();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_b4 = (int *)0x60db27;
  FUN_00449713();
  *(int ***)(unaff_EBP + 8) = &piStack_b4;
  iStack_bc = 0x60db33;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_b4 = (int *)0x60db60;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60db6e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60db79;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)0x60db82;
  FUN_00403191();
  piStack_b4 = (int *)0xff;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004031b7();
  piStack_b4 = (int *)(unaff_EBP + -0x48);
  iStack_bc = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_c0 = 0x60dbad;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00449749();
  iStack_bc = 0x60dbc6;
  iStack_c0 = FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_bc;
  piStack_c4 = (int *)0x60dbd2;
  FUN_00448a17();
  iStack_c0 = 9;
  piStack_c4 = (int *)0x17;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_c8 = 0x60dbe2;
  FUN_004115d9();
  iStack_c8 = 0x60dbe9;
  FUN_00448e3a();
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_b4 = (int *)0x60dbfe;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60dc09;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60dc16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60dc21;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)0x60dc2a;
  FUN_00403191();
  piStack_b4 = (int *)0xff;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_004031b7();
  piStack_b4 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00449749();
  iStack_bc = 0;
  iStack_c0 = unaff_EBP + -0x18;
  piStack_c4 = (int *)0x60dc5e;
  FUN_005b1a45();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_bc = 0x60dc69;
  iStack_c0 = FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_bc;
  piStack_c4 = (int *)0x60dc75;
  FUN_00448a17();
  iStack_c0 = 0x87;
  piStack_c4 = (int *)(0x38 - *(int *)(unaff_EBP + 8) / 2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_c8 = 0x60dc94;
  FUN_004115d9();
  iStack_c8 = 0x60dc9b;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_b4 = (int *)0x60dcaf;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_b4 = (int *)0x60dcbd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60dcc8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60dcd5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60dce0;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)0x60dce9;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_b4 = (int *)0x60dcf9;
  FUN_00449713();
  *(int ***)(unaff_EBP + 8) = &piStack_b4;
  iStack_bc = 0x60dd05;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0044974c();
  uVar1 = FUN_00448ebb();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60dd2b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60dd36;
    FUN_00878dfb();
  }
  piStack_b4 = (int *)0x60dd3f;
  FUN_00403191();
  piStack_b4 = (int *)0xff;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_004031b7();
  piStack_b4 = (int *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00449749();
  iStack_bc = 0x60dd6e;
  iStack_c0 = FUN_00449713();
  *(int **)(unaff_EBP + -0x30) = &iStack_bc;
  piStack_c4 = (int *)0x60dd7a;
  iStack_bc = extraout_ECX_00;
  FUN_00448a17();
  piStack_c4 = (int *)(0xda - *(int *)(unaff_EBP + 8));
  iStack_c0 = 0x87;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_c8 = 0x60dd94;
  FUN_004115d9();
  iStack_c8 = 0x60dd9b;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_b4 = (int *)0x60dda8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60ddb3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_b4 = (int *)0x60ddc0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_b4 = (int *)0x60ddcb;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(extraout_ECX[0x8c] + 0x38);
  *(int *)(unaff_EBP + -0x28) = iVar2;
  iVar2 = iVar2 * 0x14;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x9d;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  piVar3 = extraout_ECX;
  do {
    if (*(int *)(unaff_EBP + -0x28) < piVar3[0x62]) {
      piVar5 = (int *)(piVar3[99] + iVar2);
      if ((piVar3[0x6a] == *(int *)(unaff_EBP + -0x28)) && (*piVar5 != 0)) {
        piStack_b4 = (int *)0xff;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0x71c);
        piVar3 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        if (piVar3 == (int *)0x0) {
          piStack_b4 = (int *)0x60de4d;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x10);
        }
        iVar2 = *piVar3;
        iStack_c0 = *(int *)(unaff_EBP + -0x38);
        piStack_c4 = *(int **)(unaff_EBP + -0x14);
        iStack_bc = *(int *)(unaff_EBP + -0x8c);
        piStack_b4 = *(int **)(unaff_EBP + -0x84);
        iStack_c8 = 0x2c;
        *(int **)(unaff_EBP + -0x1c) = piVar3;
        uStack_d0 = 0x60de73;
        piStack_cc = piVar3;
        iVar2 = (**(code **)(iVar2 + 0x80))();
        if (iVar2 < 0) {
          piStack_b4 = *(int **)(unaff_EBP + -0x1c);
          iStack_bc = 0x60de85;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_b4 = (int *)0x60de95;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_b4 = (int *)0x60dea0;
          FUN_00878dfb();
        }
      }
      piStack_b4 = (int *)0x1;
      FUN_0045e2eb();
      iStack_bc = unaff_EBP + -0x30;
      iStack_c0 = 0x60dec2;
      FUN_005536ce();
      iVar2 = piVar5[4];
      *(int ***)(unaff_EBP + -0x1c) = &piStack_b4;
      if (iVar2 != 0) {
        iStack_bc = 0x60dedd;
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_0048b97b();
      piStack_b4 = (int *)FUN_0055540f();
      iStack_bc = 0;
      iStack_c0 = 0;
      piStack_c4 = (int *)0x60defc;
      piVar3 = (int *)FUN_0053793e();
      piStack_c4 = (int *)0x60df03;
      piStack_c4 = (int *)(**(code **)(*piVar3 + 4))();
      iStack_c8 = *(int *)(unaff_EBP + -0x14) + 0x22;
      piStack_cc = (int *)&DAT_00000008;
      uStack_d0 = 0x60df14;
      FUN_0053793e();
      uStack_d0 = 0x60df1e;
      uStack_d0 = thunk_FUN_0045e2eb();
      *(undefined1 **)(unaff_EBP + -0x1c) = auStack_d4;
      FUN_0046fc23(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_0048b97b();
      FUN_005558b0();
      if (*piVar5 == 0) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_b4 = (int *)0x60df51;
          FUN_00878dfb();
        }
        piVar3 = *(int **)(unaff_EBP + -0x10);
        piStack_b4 = (int *)0x23;
        iStack_bc = *(int *)(unaff_EBP + -0x14);
        iStack_c0 = 7;
        iStack_c8 = 0x60df6e;
        piStack_c4 = piVar3;
        iVar2 = (**(code **)(*piVar3 + 0x8c))();
        if (iVar2 < 0) {
          iStack_bc = 0x60df7e;
          piStack_b4 = piVar3;
          FUN_00878e09();
        }
      }
      iVar2 = FUN_0045e2eb();
      if ((iVar2 / 10000 == 0xcf) || (iVar2 / 10000 == 0xe9)) {
LAB_0060e006:
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
      }
      else {
        iVar2 = FUN_0045e2eb();
        iVar2 = iVar2 / 1000000;
        if ((iVar2 != 2) && ((iVar2 != 3 && (iVar2 != 4)))) goto LAB_0060e006;
        piStack_b4 = (int *)0xf4240;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_b4;
        *(undefined4 *)(unaff_EBP + -0x38) = 1;
        iStack_bc = 0x60dfdd;
        FUN_00424dbc();
        iStack_bc = *(int *)(unaff_EBP + -0x14) + 0x17;
        iStack_c0 = 8;
        iStack_c8 = unaff_EBP + -0x10;
        *(int ***)(unaff_EBP + -0x1c) = &piStack_c4;
        piStack_cc = (int *)0x60dffc;
        piStack_c4 = extraout_ECX_01;
        FUN_0046fc23();
        iStack_c8 = 0x60e001;
        FUN_007d3201();
      }
      FUN_0045e2eb();
      piStack_b4 = (int *)(unaff_EBP + -0x4c);
      FUN_0045a1d8();
      *(int ***)(unaff_EBP + -0x1c) = &piStack_b4;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_bc = 0x60e044;
      FUN_0046fcc9();
      iStack_bc = 0x60e04d;
      FUN_007d3a22();
      piStack_b4 = (int *)0x60e05a;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_b4 = (int *)(unaff_EBP + -0x5c);
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e074;
        FUN_00878dfb();
      }
      piStack_b4 = (int *)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004031b7();
      piStack_b4 = (int *)(unaff_EBP + -0x9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      FUN_00449749();
      iStack_bc = 0x60e0a9;
      iStack_c0 = FUN_00449713();
      *(int **)(unaff_EBP + -0x1c) = &iStack_bc;
      piStack_c4 = (int *)0x60e0b5;
      FUN_00448a17();
      iStack_c0 = *(int *)(unaff_EBP + -0x14) + 1;
      piStack_c4 = (int *)0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      iStack_c8 = 0x60e0c8;
      FUN_004115d9();
      iStack_c8 = 0x60e0cf;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_b4 = (int *)0x60e0df;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e0ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_b4 = (int *)0x60e0f7;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e102;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      piStack_b4 = (int *)piVar5[2];
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_bc = 0x60e11d;
      FUN_007d3546();
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        piStack_b4 = (int *)(unaff_EBP + -0x60);
        piStack_b4 = (int *)FUN_00679d22();
        piStack_b4 = (int *)*piStack_b4;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_bc = 0x60e180;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else {
        piStack_b4 = (int *)(unaff_EBP + -100);
        FUN_00679d22();
        piStack_b4 = (int *)piVar5[1];
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_bc = unaff_EBP + -0x34;
        iStack_c0 = 0x60e14e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      FUN_00414ebb();
      iVar2 = piVar5[2];
      if (iVar2 < 100000) {
        piStack_b4 = (int *)(unaff_EBP + -0x68);
        piVar3 = (int *)FUN_007d4a9a();
        piVar3 = (int *)*piVar3;
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (piVar5 != piVar3) {
          *(int **)(unaff_EBP + 8) = piVar3;
          FUN_0045e787();
          if (piVar5 != (int *)0x0) {
            piStack_b4 = (int *)0x60e1c9;
            (**(code **)(*piVar5 + 8))();
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else if (iVar2 < 1000000) {
        piStack_b4 = (int *)(unaff_EBP + -0x70);
        piVar3 = (int *)FUN_007d4a9a();
        piVar3 = (int *)*piVar3;
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (piVar5 != piVar3) {
          *(int **)(unaff_EBP + 8) = piVar3;
          FUN_0045e787();
          if (piVar5 != (int *)0x0) {
            piStack_b4 = (int *)0x60e20c;
            (**(code **)(*piVar5 + 8))();
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x70);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else if (iVar2 < 10000000) {
        piStack_b4 = (int *)(unaff_EBP + -0x7c);
        piVar3 = (int *)FUN_007d4a9a();
        piVar3 = (int *)*piVar3;
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        if (piVar5 != piVar3) {
          *(int **)(unaff_EBP + 8) = piVar3;
          FUN_0045e787();
          if (piVar5 != (int *)0x0) {
            piStack_b4 = (int *)0x60e24f;
            (**(code **)(*piVar5 + 8))();
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x7c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else if (iVar2 < 100000000) {
        piStack_b4 = (int *)(unaff_EBP + -0x6c);
        piVar3 = (int *)FUN_007d4a9a();
        piVar3 = (int *)*piVar3;
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        if (piVar5 != piVar3) {
          *(int **)(unaff_EBP + 8) = piVar3;
          FUN_0045e787();
          if (piVar5 != (int *)0x0) {
            piStack_b4 = (int *)0x60e292;
            (**(code **)(*piVar5 + 8))();
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else if (iVar2 < 1000000000) {
        piStack_b4 = (int *)(unaff_EBP + -0x78);
        piVar3 = (int *)FUN_007d4a9a();
        piVar3 = (int *)*piVar3;
        piVar5 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        if (piVar5 != piVar3) {
          *(int **)(unaff_EBP + 8) = piVar3;
          FUN_0045e787();
          if (piVar5 != (int *)0x0) {
            piStack_b4 = (int *)0x60e2d2;
            (**(code **)(*piVar5 + 8))();
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      }
      else {
        piStack_b4 = (int *)(unaff_EBP + -0x74);
        puVar4 = (undefined4 *)FUN_007d4a9a();
        piStack_b4 = (int *)0x60e2f2;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                   (IBinding *)*puVar4);
        piVar3 = *(int **)(unaff_EBP + -0x74);
      }
      if (piVar3 != (int *)0x0) {
        piStack_b4 = (int *)0x60e2ff;
        (**(code **)(*piVar3 + 8))();
      }
      piStack_b4 = (int *)0x60e309;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      piStack_b4 = (int *)(unaff_EBP + -0x48);
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e323;
        FUN_00878dfb();
      }
      piStack_b4 = (int *)0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_004031b7();
      piStack_b4 = (int *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00449749();
      iStack_bc = 0x60e359;
      iStack_c0 = FUN_00449713();
      *(int **)(unaff_EBP + -0x1c) = &iStack_bc;
      piStack_c4 = (int *)0x60e365;
      iStack_bc = extraout_ECX_02;
      FUN_00448a17();
      iStack_c0 = *(int *)(unaff_EBP + -0x14) + 0x13;
      piStack_c4 = (int *)0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_c8 = 0x60e37a;
      FUN_004115d9();
      iStack_c8 = 0x60e381;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_b4 = (int *)0x60e391;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e39c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_b4 = (int *)0x60e3a9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_b4 = (int *)0x60e3b4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        piStack_b4 = (int *)0x60e3c5;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
        piStack_b4 = (int *)0x60e3fa;
        (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
    iVar2 = *(int *)(unaff_EBP + -0x18) + 0x14;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    *(int *)(unaff_EBP + -0x18) = iVar2;
    if (0x164 < *(int *)(unaff_EBP + -0x14)) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_b4 = (int *)0x60e428;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piVar3 = *(int **)(unaff_EBP + -0x24);
  } while( true );
}


